open WebGL;

module NetworkScene {
    let t = three;

    type networkPoint = {
        position: Three.position,
        oldPosition: Three.position,
        radius: float,
        pinned: bool,
    };
    type lineData = { 
        p1: networkPoint, 
        p2: networkPoint, 
        dist: float
    };

    let scene = [|Three.scene()|];
    let pointTarget:array(option(networkPoint)) = [|None|];
    let points:array(array(networkPoint)) = [|[||]|];
    let lines:array(array(lineData)) = [|[||]|];
    let vertexts:array(array(Three.mesh)) = [|[||]|];
    let edges:array(array(Three.line)) = [|[||]|];

    let mouseIsDown = false;

    let force:array(Three.position) = [|Three.newVector3(0., 0., 0.)|];
    
    let k = 0.05;
    let resilient = 1.0

    let buildBackSpace = (width, height) => {
        let geometry = Three.planeBufferGeometry(width *. 2., height *. 2.);
        /* let texture = new THREE.Texture(this.generateTexture());
        texture.needsUpdate = true; // important! */
        let params = Three.parseIntoParameters("{\"color\": \"#469FA3\", \"transparent\": true}");
        let material = Three.meshBasicMaterial(params);
        let backSpace = Three.mesh(geometry, material);
        Three.set_x(backSpace##position, 0.);
        Three.set_y(backSpace##position, 0.);
        Three.set_z(backSpace##position, -.100.);
        Three.set_receiveShadow(backSpace, true);
        Three.addMeshToScene(scene[0], backSpace);
    };

    let createdPoint = (x, y, z, r, pinned) => {
        let p = Three.newVector3(x, y, z);
        let o = Three.newVector3(x, y, z);
        let pin = pinned || false;
        let networlPoint = {
            position: p,
            oldPosition: o,
            radius: r,
            pinned: pinned || false,
        };
        points[0] = Array.append(points[0], [|networlPoint|]);
        let color = (pin ? "#000000" : "#FFFFFF");
        let params = Three.parseIntoParameters("{\"color\": \"" ++ {j|$color|j} ++ "\"}");
        let material = Three.meshBasicMaterial(params);
        let geometry = Three.sphereGeometry(r, 30., 30.);
        let mesh = Three.mesh(geometry, material);
        Three.set_x(mesh##position, x);
        Three.set_y(mesh##position, y);
        Three.set_z(mesh##position, z);
        vertexts[0] = Array.append(vertexts[0], [|mesh|]);
        Three.addMeshToScene(scene[0], mesh);
    };

    [@bs.send] external set_distanceTo: (Three.position, Three.position) => float = "distanceTo";
    let makeEdge = (v1, v2) => {
        let p1 = points[0][v1];
        let p2 = points[0][v2];
        let d = set_distanceTo(p1.position, p2.position);
        let lineData = { p1: p1, p2: p2, dist: d };
        lines[0] = Array.append(lines[0], [|lineData|]);

        let params = Three.parseIntoParameters("{\"color\": \"#ffffff\"}");
        let material_line = Three.lineBasicMaterial(params);
        let geometry_line = Three.newGeometry();
        Three.geometry_vertices_pushs(geometry_line##vertices, p1.position, p2.position);
        let line = Three.line(geometry_line, material_line);
        edges[0] = Array.append(edges[0], [|line|]);

        Three.addLineToScene(scene[0], line);
    };

    let buildObject = (width, height) => {
        let accel = Three.newVector3(0., -.0.2, 0.);
        let radiusList = [|22., 30., 37.|];
        let rangeX = 300.;
        let rangeY = 250.;
        let row = 7.;
        let col = 7.;
        let colHeight = height /. (row -. 3.);
        let colWidth = width /. (col -. 3.);
        let xstart = width /. 2. +. colWidth;
        let ystart = height /. 2. +. colHeight;
        
        for (row_index in 0 to (row |> int_of_float) - 1) {
            for (column_index in 0 to (col |> int_of_float) - 1) {
                let radius = radiusList[Js.Math.floor(Js.Math.random() *. (Array.length(radiusList) |> float_of_int))];
                
                let x = -.xstart +. (column_index |> float_of_int) *. colWidth +. (column_index mod ((col |> int_of_float) - 1) !== 0 
                            ? Js.Math.random() *. rangeX : 0.);
                let y = ystart -. (row_index |> float_of_int) *. colHeight +. ((row_index |> float_of_int) !== 0. && (row_index |> float_of_int) !== row -. 1. 
                            ? Js.Math.random() *. rangeY : 0.);
                let pinned = column_index mod ((col |> int_of_float) - 1) === 0 || (row_index |> float_of_int) === 0. || (row_index |> float_of_int) === row -. 1.;
                createdPoint(x, y, 0., radius, pinned);
            };
        };

        for (index in 1 to Array.length(points[0]) - 1) {
            if (index mod (col |> int_of_float) !== 0) {
                makeEdge(index, index - 1)
            };
            if (index < Array.length(points[0]) - (col |> int_of_float) + 1) {
                makeEdge(index - 1, index + (col |> int_of_float) - 1)
            };
        };
    };
    let initScene = (width, height) => {
        buildBackSpace(width, height);
        buildObject(width, height);
    };
    let mouseX: (ReactEvent.Mouse.t) => (float) = [%bs.raw
    {|
      function(event) {
        return (event.clientX);
      }
    |}
    ];
    let mouseY: (ReactEvent.Mouse.t) => (float) = [%bs.raw
    {|
      function(event) {
        return (event.clientY);
      }
    |}
    ];
    let onMouseOver = (event, width, height) => {   
        let clientX = mouseX(event);
        let clientY = mouseY(event);
        let mouse = Three.newVector2(clientX -. width /. 2., clientY -. height /. 2.);
        
        Array.mapi((index, vertext:Three.mesh) => {
            let p = vertext##position;
            let dx = Three.get_x_vector2(mouse) -. p##x;
            let dy = Three.get_y_vector2(mouse) -. p##y;
            let d = Js.Math.sqrt(dx *. dx +. dy *. dy);
            let point = points[0][index];

            if (d <= point.radius && !point.pinned) {
                pointTarget[0] = Some(points[0][index]);
                switch pointTarget[0] {
                | Some(target) => 
                        force[0] = Three.newVector3(
                            Three.get_x(target.position), 
                            Three.get_y(target.position), 
                            Three.get_z(force[0]))
                | None => ()
                };
            };
            switch pointTarget[0] {
            | Some(target) => {
                    let dx = mouse.x -. Three.get_x(target.position);
                    let dy = mouse.y -. Three.get_y(target.position);
                    if (Js.Math.abs_float(dx) < width *. k) {
                        force[0] = Three.newVector3(mouse.x, Three.get_y(force[0]), Three.get_z(force[0]))
                    };
                    if (Js.Math.abs_float(dy) < height *. k) {
                        force[0] = Three.newVector3(Three.get_x(force[0]), mouse.y, Three.get_z(force[0]))
                    };
                }
            | None => ()
            }; 

        }, vertexts[0]) |> ignore;
    };

    let onMouseOut = () => {
        pointTarget[0] = None;
        force[0] = Three.newVector3(0., 0., Three.get_z(force[0]));
    };

    let setEventsMouse = (element, width, height) => {
        Document.set_mousemove(element, (e) => onMouseOver(e, width, height) |> ignore);
        Document.set_mouseout(element, () => onMouseOut());
    };

    let updateFource = () => {
        switch pointTarget[0] {
        | Some(target) => {
            pointTarget[0] = Some({
                position: Three.newVector3(Three.get_x(force[0]), Three.get_y(force[0]), Three.get_z(target.position)),
                oldPosition: target.oldPosition,
                radius: target.radius,
                pinned: target.pinned,
            });
        }
        | None => ()
        };
    };

    let updatePoint = () => {
        points[0] = 
            Array.mapi((index, point) => {
                if (!point.pinned) {
                    {
                        position: Three.newVector3(
                            Three.get_x(point.position) +. (Three.get_x(point.position) -. Three.get_x(point.oldPosition) *. resilient), 
                            Three.get_y(point.position) +. (Three.get_y(point.position) -. Three.get_y(point.oldPosition) *. resilient), 
                            Three.get_z(point.position) +. (Three.get_z(point.position) -. Three.get_z(point.oldPosition) *. resilient)
                        ),
                        oldPosition: Three.newVector3(
                            Three.get_x(point.position), 

                            Three.get_y(point.position), 
                            Three.get_z(point.position)
                        ),
                        radius: point.radius,
                        pinned: point.pinned,
                    }
                } else {
                    point
                };
            }, points[0]);
    };

    /* let updateJoint = () => {
        lines[0] = 
            Array.mapi((index, line) => {
                if (!point.pinned) {
                    { 
                        p1: networkPoint, 
                        p2: networkPoint, 
                        dist: float
                    }
                } else {
                    point
                };
            }, lines[0]);
        this.lines.forEach(line => {
            const p1 = line.p1.position;
            const p2 = line.p2.position;
            const dx = p2.x - p1.x;
            const dy = p2.y - p1.y;
            const d = Math.sqrt(dx * dx + dy * dy);
            const difference = line.dist - d;
            const percen = difference / d * 0.5;
            const offsetX = dx * percen;
            const offsetY = dy * percen;
            if (!line.p1.pinned) {
                p1.x -= offsetX;
                p1.y -= offsetY;
            }
            if (!line.p2.pinned) {
                p2.x += offsetX;
                p2.y += offsetY;
            }
        });
    }; */
};
