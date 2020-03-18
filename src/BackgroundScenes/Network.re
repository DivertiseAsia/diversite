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
        let lineData = { p1, p2, dist: d };
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
                let pinned = column_index mod ((col |> int_of_float) - 1) === 0 || 
                                        row_index === 0 || 
                                        row_index === (row |> int_of_float) - 1;
                
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
        scene[0] = Three.scene();

        pointTarget[0] = None;
        points[0] = [||];
        lines[0] = [||];
        vertexts[0] = [||];
        edges[0] = [||];

        force[0] = Three.newVector3(0., 0., 0.);

        buildBackSpace(width, height);
        buildObject(width, height);
    };
    
    let onMouseOver = (event, width, height) => {   
        let clientX = mouseX(event);
        let clientY = mouseY(event);
        let mouse = Three.newVector2(clientX -. width /. 2., -.(clientY -. height /. 2.));
        Array.mapi((index, vertext:Three.mesh) => {
            let p = vertext##position;
            let dx = Three.get_x_vector2(mouse) -. p##x;
            let dy = Three.get_y_vector2(mouse) -. p##y;
            let d = Js.Math.sqrt(dx *. dx +. dy *. dy);
            let point = points[0][index];
            if (d <= point.radius && !point.pinned) {
                pointTarget[0] = Some(point);
                force[0] = Three.newVector3(
                            Three.get_x(point.position), 
                            Three.get_y(point.position), 
                            Three.get_z(force[0]));
            };
            switch pointTarget[0] {
            | Some(target) => {
                    let dx = Three.get_x_vector2(mouse) -. Three.get_x(target.position);
                    let dy = Three.get_y_vector2(mouse) -. Three.get_y(target.position);
                    if (Js.Math.abs_float(dx) < width *. k) {
                        force[0] = Three.newVector3(
                            Three.get_x_vector2(mouse),
                            Three.get_y(force[0]),
                            Three.get_z(force[0]))
                    };
                    if (Js.Math.abs_float(dy) < height *. k) {
                        force[0] = Three.newVector3(
                            Three.get_x(force[0]),
                            Three.get_y_vector2(mouse),
                            Three.get_z(force[0]))
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
        Document.set_mousemove(element, (e) => onMouseOver(e, width, height));
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
            Array.map((networkPoint) => {
                if (!networkPoint.pinned) {
                    let newNetworkPoint = {
                        position: Three.newVector3(
                            Three.get_x(networkPoint.position) +. (Three.get_x(networkPoint.position) -. Three.get_x(networkPoint.oldPosition) *. resilient),
                            Three.get_y(networkPoint.position) +. (Three.get_y(networkPoint.position) -. Three.get_y(networkPoint.oldPosition) *. resilient),
                            Three.get_z(networkPoint.position) +. (Three.get_z(networkPoint.position) -. Three.get_z(networkPoint.oldPosition) *. resilient)
                        ),
                        oldPosition: Three.newVector3(
                            Three.get_x(networkPoint.position),
                            Three.get_y(networkPoint.position),
                            Three.get_z(networkPoint.position)
                        ),
                        radius: networkPoint.radius,
                        pinned: networkPoint.pinned,
                    };
                    newNetworkPoint;
                } else {
                    networkPoint
                };
            }, points[0]);
    };

    let updateJoint = () => {
        lines[0] =
            Array.map((line) => {
                let dx = Three.get_x(line.p2.position) -. Three.get_x(line.p1.position);
                let dy = Three.get_y(line.p2.position) -. Three.get_y(line.p1.position);
                let d = Js.Math.sqrt(dx *. dx +. dy *. dy);
                let difference = line.dist -. d;
                let percen = difference /. d *. 0.5;
                let offsetX = dx *. percen;
                let offsetY = dy *. percen;
                let p1:networkPoint = {
                    position: Three.newVector3(
                        Three.get_x(line.p1.position) -. offsetX, 
                        Three.get_y(line.p1.position) -. offsetY,
                        Three.get_z(line.p1.position)
                    ),
                    oldPosition: line.p1.oldPosition,
                    radius: line.p1.radius,
                    pinned: line.p1.pinned,
                };
                let p2:networkPoint = {
                    position: Three.newVector3(
                        Three.get_x(line.p2.position) +. offsetX, 
                        Three.get_y(line.p2.position) +. offsetY,
                        Three.get_z(line.p2.position)
                    ),
                    oldPosition: line.p2.oldPosition,
                    radius: line.p2.radius,
                    pinned: line.p2.pinned,
                };

                let (newNetworkPoint1, newNetworkPoint2) = switch (line.p1.pinned, line.p2.pinned) {
                | (true, true) => (line.p1, line.p2)
                | (true, false) => (line.p1, p2)
                | (false, true) => (p1, line.p2)
                | (false, false) => (p1, p2)
                };

                let newLine = {
                    p1: newNetworkPoint1,
                    p2: newNetworkPoint2,
                    dist: line.dist
                };
                newLine;
            }, lines[0]);
    };

    [@bs.set][@bs.scope ("geometry")] external set_verticesNeedUpdate: (Three.line, bool) => unit = "verticesNeedUpdate";
    [@bs.set] external set_lineDistancesNeedUpdate: (Three.line, bool) => unit = "lineDistancesNeedUpdate";
    [@bs.get] external get_lineDistancesNeedUpdate: (Three.line) => bool = "lineDistancesNeedUpdate";
    
    let refreshMesh = () => {
        Array.mapi((index, networkPoint) => {
            Three.set_x(vertexts[0][index]##position, Three.get_x(networkPoint.position));
            Three.set_y(vertexts[0][index]##position, Three.get_y(networkPoint.position));
            Three.set_z(vertexts[0][index]##position, Three.get_z(networkPoint.position));
        }, points[0]); 

        Array.mapi((index, edge:Three.line) => {
            set_verticesNeedUpdate(edges[0][index], true); 
            set_lineDistancesNeedUpdate(edges[0][index], true);
        }, edges[0]);
        
    }; 

    let animate = () => {
        updateFource();
        /* updatePoint();
        updateJoint(); */
        refreshMesh();
        ()
    };
};
