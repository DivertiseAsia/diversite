open WebGL;

module BallWorldScene {
    let _ = three;

    type context2D;
    type gradientColor;

    type sphere = {
        x: float,
        y: float, 
        z: float, 
        r: float, 
        c: string, 
        o: float
    };
    [@bs.send] external context_2D: (Dom.element, string) => context2D = "getContext";
    [@bs.send] external createRadialGradient: (context2D, float, float, float, float, float, float) => gradientColor = "createRadialGradient";
    [@bs.set] external fillStyle: (context2D, gradientColor) => unit = "fillStyle";
    [@bs.send] external fillRect: (context2D, float, float, float, float) => unit = "fillRect";
    [@bs.send] external addColorStop: (gradientColor, float, string) => unit = "addColorStop";
    [@bs.set] external set_needsUpdate: (Three.texture, bool) => unit = "needsUpdate";
    [@bs.set] external set_width: (Dom.element, float) => unit = "width";
    [@bs.set] external set_height: (Dom.element, float) => unit = "height";

    let scene = [|Three.scene()|];
    let widthScene = [|0.|]; 
    let heightScene = [|0.|];
    let balls = [|[||]|];
    let directions:array(array(Three.vector2)) = [|[||]|];
    let camera = (camera) => camera;
    let mouse:array(Three.vector2) = [|{x: 0., y: 0.}|];

    let spheres = (width, height) => [
        { x: -.width /. 2. +. 100., y: height /. 2. -. 100., z: 150., r: 160., c: "#C1ACD7", o: 1.0 },
        { x: -.180., y: height /. 2., z: 200., r: 100., c: "rgb(208,118,130)", o: 1.0 },
        { x: width /. 2. -. 100., y: -.height /. 2. +. 100., z: 200., r: 160., c: "rgb(163,224,227)", o: 1.0 },
        { x: 200., y: -.height /. 2., z: 0., r: 90., c: "rgb(51,88,117)", o: 1.0 },
        { x: -.width /. 2. +. 90., y: -.200., z: 200., r: 120., c: "rgb(225,195,143)", o: 1.0 },
        { x: width /. 2. -. 90., y: 200., z: 200., r: 120., c: "rgb(222,225,170)", o: 1.0 },
        { x: -.200., y: -.height /. 2. +. 80., z: 200., r: 160., c: "rgb(238,238,238)", o: 1.0 },
        { x: 220., y: -.100., z: 200., r: 100., c: "rgb(238,238,238)", o: 1.0 },
        { x: -.50., y: height /. 2. -. 80., z: -.300., r: 120., c: "rgb(238,238,238)", o: 1.0 },
        { x: 200., y: 250., z: -.250., r: 60., c: "rgb(94,194,184)", o: 0.8 },
        { x: width /. 2. -. 325., y: height /. 2. -. 80., z: 200., r: 90., c: "rgb(200,200,200)", o: 1.0 },
        { x: width /. 2. -. 60., y: -. 100., z: -.100., r: 70., c: "rgb(238,238,238)", o: 1.0 },
        { x: -.width /. 2. +. 170., y: -.40., z: -.100., r: 90., c: "rgb(238,238,238)", o: 1.0 },
        { x: 70., y: height /. 2., z: 200., r: 50., c: "rgb(238,238,238)", o: 1.0 },
        { x: 70., y: -.height /. 2. +. 70., z: -.250., r: 35., c: "rgb(238,238,238)", o: 1.0 },
        { x: -.100., y: -.100., z: -.250., r: 40., c: "rgb(238,238,238)", o: 1.0 },
    ];

    let buildBackscene = (width, height) => {

        let geometry = Three.planeBufferGeometry(width *. 2., height *. 2.);
        let params = Three.parseIntoParameters("{\"color\": \"#469FA3\", \"transparent\": true}");
        let material = Three.meshBasicMaterial(params);
        let mesh = Three.mesh(geometry, material);
        Three.set_receiveShadow(mesh, true);
        Three.set_z(mesh##position, -300.);
        Three.addMeshToScene(scene[0], mesh);
        /* this.add(backScene); */
    };

    let buildSphere = (width, height) => {
        spheres(width, height) |> List.map((sphere) => {
            let geometry = Three.sphereGeometry(sphere.r, 128., 128.);
            let setParams = (color, opacity) => {
                let jsParams = 
                "{\"color\": \"" ++ {j|$color|j} ++ "\", \"transparent\": true, \"opacity\": " ++ {j|$opacity|j} ++ "}";
                Three.parseIntoParameters(jsParams);
            };
            let params = setParams(sphere.c, sphere.o);
            let material = Three.meshLambertMaterial(params);
            let ball = Three.mesh(geometry, material);
            Three.set_x(ball##position, sphere.x);
            Three.set_y(ball##position, sphere.y);
            Three.set_z(ball##position, sphere.z);
            Three.addMeshToScene(scene[0], ball);
            balls[0] = Array.append(balls[0], [|ball|]);
            let dir = Js.Math.random() < 0.5 ? 1. : -.1.; 
            let vector2:Three.vector2 = {x: dir, y: dir};
            directions[0] = Array.append(directions[0], [|vector2|]);
        }) |> ignore;
    };

    [@bs.get] external get_light_position: (Three.light) => Three.vector3 = "position";
    [@bs.set][@bs.scope ("shadow", "mapSize")] external set_light_width: (Three.light, float) => unit = "width";
    [@bs.set][@bs.scope ("shadow", "mapSize")] external set_light_height: (Three.light, float) => unit = "height";

    [@bs.set][@bs.scope ("shadow", "camera")] external set_light_left: (Three.light, float) => unit = "left";
    [@bs.set][@bs.scope ("shadow", "camera")] external set_light_right: (Three.light, float) => unit = "right";
    [@bs.set][@bs.scope ("shadow", "camera")] external set_light_top: (Three.light, float) => unit = "top";
    [@bs.set][@bs.scope ("shadow", "camera")] external set_light_bottom: (Three.light, float) => unit = "bottom";
    [@bs.set][@bs.scope ("shadow", "camera")] external set_light_far: (Three.light, float) => unit = "far";

    [@bs.set] external set_castShadow: (Three.light, bool) => unit = "castShadow";

    let buildDirectionalLight = (width, height, color) => {
        let light = Three.directionalLight(color, 0.7);
        Three.set_x(light |> get_light_position, 0.);
        Three.set_y(light |> get_light_position, 0.);
        Three.set_z(light |> get_light_position, 1000.);
        set_light_width(light, 1024.);
        set_light_height(light, 1024.);
        
        let d = 300.;

        set_light_left(light, d);
        set_light_right(light, d);
        set_light_top(light, d);
        set_light_bottom(light, d);

        set_light_far(light, 1000.);

        set_castShadow(light, true);

        let ambientLight = Three.ambientLight("#ffffff", 0.6);
        Three.addAmbientLightToScene(scene[0], ambientLight);
        Three.addLightToScene(scene[0], light);
    };

    let initScene = (width, height) => {
        scene[0] = Three.scene();
        widthScene[0] = 0.; 
        heightScene[0] = 0.;
        balls[0] = [||];
        directions[0] = [||];
        mouse[0] = {x: 0., y: 0.};

        buildBackscene(width, height);
        buildSphere(width, height);
        buildDirectionalLight(width, height, "#ffffff");
        widthScene[0] = width; 
        heightScene[0] = height;
    };

    [@bs.send] external set_translateX: (Three.mesh, float) => unit = "translateX";
    [@bs.send] external set_translateY: (Three.mesh, float) => unit = "translateY";

    let animate = (width) => {
        for (index in 0 to Array.length(balls[0]) - 1) {
            set_translateX(balls[0][index], Js.Math.random() *. directions[0][index].x /. 2.);
            set_translateY(balls[0][index], Js.Math.random() *. directions[0][index].y /. 2.);
            
            if(Js.Math.abs_float(balls[0][index]##position##x -. (spheres(widthScene[0], heightScene[0]) |> Array.of_list)[index].x) > 20.){
                let newDirection:Three.vector2 = {x: directions[0][index].x *. -.1., y: directions[0][index].y};
                directions[0][index] = newDirection;
            };
            if(Js.Math.abs_float(balls[0][index]##position##y -. (spheres(widthScene[0], heightScene[0]) |> Array.of_list)[index].y) > 20.){
                let newDirection:Three.vector2 = {x: directions[0][index].x, y: directions[0][index].y *. -.1.};
                directions[0][index] = newDirection;
            };
        };

        let targetAngleX = (mouse[0].x *. Js.Math._PI /. 32.) /. (widthScene[0] /. 2.);
        let targetAngleY = (mouse[0].y *. Js.Math._PI /. 16.) /. (widthScene[0] /. 2.);

        let element = Document.getElementById(Document.doc, "webgl-background");
        Three.set_x(Three.getCamera(element)##rotation, targetAngleY);
        Three.set_y(Three.getCamera(element)##rotation, -.targetAngleX);
    };

    let onMouseMove = (event, width, height) => {
        mouse[0] = {x: mouseX(event) -. width /. 2., y: (mouseY(event) -. height /. 2.)}
    };
};
