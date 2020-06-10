open WebGL;

let deg2rad = degree => {
  Js.Math._PI /. 180. *. degree;
};

module PentagonScene = {
  let _ = three;
  type particle = {
    x: float,
    y: float,
    z: float,
    size: float,
    n: float,
    o: float,
    angle: float,
  };
  let width = Document.windowWidth;
  let height = Document.windowHeight;

  let scene = [|Three.scene()|];

  let amount = 6;
  let shift_pivot_z = (-0.31);
  let radius = width /. 12.;
  let size = [|1.1, 1.1, 1.1, 1.5, 1.2, 1.|];
  let rad_X = [|
    -. deg2rad(28.),
    deg2rad(28.),
    -. deg2rad(38.),
    deg2rad(48.),
    -. deg2rad(58.),
    deg2rad(8.),
  |];
  let rad_Y = [|
    deg2rad(10.),
    deg2rad(20.),
    deg2rad(20.),
    -. deg2rad(18.),
    deg2rad(5.),
    deg2rad(10.),
  |];
  let rad_Z = [|
    deg2rad(30.),
    deg2rad(15.),
    -. deg2rad(5.),
    -. deg2rad(18.),
    -. deg2rad(30.),
    deg2rad(10.),
  |];
  let rot_ret = [|500., 500., 500., 500., 500., 500.|];

  let pentagons = [|[||]|];

  let allParticle = [|[]|];
  let temp_particles_body = [|[]|];

  let particles_body: list(particle) = [
    {
      x: -. width /. 2. +. 120.,
      y: -. height /. 2. +. 120.,
      z: 0.,
      size: 100.,
      n: 8.,
      o: 0.,
      angle: 0.,
    },
    {
      x: -. width /. 2. +. 320.,
      y: -. height /. 2. +. 120.,
      z: 0.,
      size: 35.,
      n: 8.,
      o: 0.,
      angle: 0.,
    },
    {
      x: -. width /. 2. +. 120.,
      y: -. height /. 2. +. 320.,
      z: 0.,
      size: 35.,
      n: 3.,
      o: 0.,
      angle: 0.,
    },
    {
      x: width /. 2. -. 450.,
      y: -. height /. 2. -. 20.,
      z: 0.,
      size: 50.,
      n: 6.,
      o: 0.,
      angle: 0.,
    },
    {
      x: width /. 2. -. 200.,
      y: -. height /. 2. +. 50.,
      z: 0.,
      size: 100.,
      n: 6.,
      o: 0.,
      angle: 0.,
    },
    {
      x: width /. 2. -. 200.,
      y: height /. 2. -. 50.,
      z: 0.,
      size: 100.,
      n: 3.,
      o: 0.,
      angle: 0.,
    },
    {
      x: width /. 2. -. 550.,
      y: height /. 2. +. 20.,
      z: 0.,
      size: 50.,
      n: 3.,
      o: 0.,
      angle: 0.,
    },
    {
      x: width /. 2. -. 200.,
      y: height /. 2. -. 250.,
      z: 0.,
      size: 50.,
      n: 8.,
      o: 0.,
      angle: 0.,
    },
  ];

  [@bs.set] external set_o: (particle, float) => unit = "o";
  [@bs.set] external set_angle: (particle, float) => unit = "angle";

  let buildParticle = () => {
    let colors = [|[||]|];
    particles_body
    |> List.map(particle => {
         let newGeometry = Three.newGeometry();
         let xStart = 0;
         let xEnd = 360;

         let validValue = [|0|];
         for (x in xStart to xEnd) {
           if (x === validValue[0]) {
             let axisX =
               particle.size
               *. Js.Math.cos((x |> float_of_int) *. Js.Math._PI /. 180.);
             let axisY =
               particle.size
               *. Js.Math.sin((x |> float_of_int) *. Js.Math._PI /. 180.);

             let newVector3 = Three.newVector3(axisX, axisY, 0.);
             Three.geometry_vertices_push(
               Three.geometry_vertices(newGeometry),
               newVector3,
             );
             let color =
               Three.color(
                 x < 180 - 360 / (particle.n |> int_of_float)
                   ? "rgba(255, 252, 249, 1.000)"
                   : "rgba(116, 165, 162, 1.000)",
               );
             colors[0] = Array.append(colors[0], [|color|]);
             validValue[0] = x + 360 / (particle.n |> int_of_float);
           };
         };

         Three.geometry_set_colors(newGeometry, colors[0]);
         let params =
           Three.parseIntoParameters(
             "{\"color\": \"#ffffff\", \"opacity\": 1.0, \"linewidth\": 1.0, \"vertexColors\": 2.0}",
           );
         let material = Three.lineBasicMaterial(params);
         let line = Three.line(newGeometry, material);
         Three.set_x(line##position, particle.x);
         Three.set_y(line##position, particle.y);
         let newBody = {
           x: -. width /. 2. +. 120.,
           y: -. height /. 2. +. 120.,
           z: 0.,
           size: 100.,
           n: 8.,
           o:
             Js.Math.random()
             /. particle.size
             *. (Js.Math.random() > 0.5 ? 1. : (-1.)),
           angle: Js.Math.random() *. 360.,
         };
         temp_particles_body[0] =
           List.append(temp_particles_body[0], [newBody]);
         allParticle[0] = List.append(allParticle[0], [line]);
         Three.addLineToScene(scene[0], line);
       })
    |> ignore;
  };
  let updateParticle = () => {
    let updated_particles_body = [|[]|];
    allParticle[0]
    |> List.mapi((index, particle) => {
         let body = (temp_particles_body[0] |> Array.of_list)[index];
         Three.set_z(particle##rotation, particle##rotation##z +. body.o);
         Three.set_x(
           particle##position,
           particle##position##x
           +. Js.Math.cos(body.angle *. Js.Math._PI /. 180.)
           *. 0.25,
         );
         Three.set_y(
           particle##position,
           particle##position##y
           +. Js.Math.sin(body.angle *. Js.Math._PI /. 180.)
           *. 0.25,
         );
         let newBody = {
           x:
             particle##position##x
             +. Js.Math.cos(body.angle *. Js.Math._PI /. 180.)
             *. 0.25,
           y:
             particle##position##y
             +. Js.Math.sin(body.angle *. Js.Math._PI /. 180.)
             *. 0.25,
           z: particle##rotation##z +. body.o,
           size: body.size,
           n: body.n,
           o: body.o,
           angle: body.angle +. 1.,
         };
         updated_particles_body[0] =
           List.append(updated_particles_body[0], [newBody]);
       })
    |> ignore;
    temp_particles_body[0] = updated_particles_body[0];
  };

  let buildBackground = () => {
    let paramColor = Three.parseIntoParameters("{\"color\": \"#469FA3\"}");
    let geometry =
      Three.planeBufferGeometry(
        Document.windowWidth *. 2.,
        Document.windowHeight *. 2.,
      );
    let material = Three.meshLambertMaterial(paramColor);
    let mesh = Three.mesh(geometry, material);
    Three.set_x(mesh##position, 0.);
    Three.set_y(mesh##position, 0.);
    Three.set_z(mesh##position, -100.);
    Three.set_receiveShadow(mesh, true);
    Three.addMeshToScene(scene[0], mesh);
  };

  let buildPointLight = color => {
    let newVector3 =
      Three.newVector3(
        Document.windowWidth *. (-1.),
        Document.windowHeight,
        300.,
      );
    let pointLight = Three.pointLight(color);
    Three.set_castShadow(pointLight, true);
    Three.set_position_copy(newVector3);

    let pointLightHelper = Three.pointLightHelper(pointLight, 10.);
    Three.addPointLightToScene(scene[0], pointLight);
    Three.addMeshToScene(scene[0], pointLightHelper);
  };

  let buildAmbientLight = color => {
    Three.addAmbientLightToScene(scene[0], Three.ambientLight(color, 0.70));
  };

  let rotate3axis = (obj, x, y, z) => {
    Three.set_x(obj##rotation, obj##rotation##x +. x);
    Three.set_y(obj##rotation, obj##rotation##y +. y);
    Three.set_z(obj##rotation, obj##rotation##z +. z);
  };

  let getRotationTransformationVector = (x, y, z, size) => {
    let mX = Three.newMatrix3();
    let mY = Three.newMatrix3();
    let mZ = Three.newMatrix3();
    Three.setMatrix3(
      mX,
      1.,
      0.,
      0.,
      0.,
      Js.Math.cos(x),
      -. Js.Math.sin(x),
      0.,
      Js.Math.sin(x),
      Js.Math.cos(x),
    );

    Three.setMatrix3(
      mY,
      Js.Math.cos(y),
      0.,
      Js.Math.sin(y),
      0.,
      1.,
      0.,
      -. Js.Math.sin(y),
      0.,
      Js.Math.cos(y),
    );

    Three.setMatrix3(
      mZ,
      Js.Math.cos(z),
      -. Js.Math.sin(z),
      0.,
      Js.Math.sin(z),
      Js.Math.cos(z),
      0.,
      0.,
      0.,
      1.,
    );

    let newVector3 =
      Three.newVector3(0., 0., shift_pivot_z *. size *. radius);
    let newVector3WithMz = Three.applyMatrix3(newVector3, mZ);
    let newVector3WithMzMy = Three.applyMatrix3(newVector3WithMz, mY);
    Three.applyMatrix3(newVector3WithMzMy, mX);
  };

  let getPivotVector = (obj, first_vertice, second_vertice) => {
    let vector3_first = Three.newVector3(0., 0., 0.);
    Three.vector3_copy(vector3_first, obj##geometry##vertices[first_vertice]);
    Three.applyMatrix4(vector3_first, obj##matrix);
    let vector3_second = Three.newVector3(0., 0., 0.);
    Three.vector3_copy(
      vector3_second,
      obj##geometry##vertices[second_vertice],
    );
    Three.applyMatrix4(vector3_second, obj##matrix);
    Three.multiplyScalar(
      Three.addVector3ToVector3(vector3_first, vector3_second),
      0.5,
    );
  };

  let getPivotVectors = (obj: Three.mesh) => {
    Three.updateMatrix(obj);
    let vertices = Three.geometry_vertices(obj##geometry);
    for (x in 0 to List.length(vertices) - 1) {
      let newVector3 = Three.newVector3(0., 0., 0.);
      Three.vector3_copy(newVector3, obj##geometry##vertices[x]);
      Three.applyMatrix4(newVector3, obj##matrix) |> ignore;
    };

    let vector3_right = getPivotVector(obj, 1, 6);
    let vector3_left = getPivotVector(obj, 4, 9);
    let vector3_center = getPivotVector(obj, 10, 11);

    [|vector3_right, vector3_left, vector3_center|];
  };

  let setPosition = (obj, oldPivotVectors, refPivotVectors, x, y, z, size) => {
    let newPosition: Three.position =
      Three.addVector3ToVector3(
        Three.addVector3ToVector3(refPivotVectors[0], oldPivotVectors[2]),
        Three.vector3_negate(oldPivotVectors[1]),
      );
    let vt = getRotationTransformationVector(x, y, z, size);
    Three.set_x(obj##position, Three.get_x(newPosition) -. Three.get_x(vt));
    Three.set_y(obj##position, Three.get_y(newPosition) -. Three.get_y(vt));
    Three.set_z(obj##position, Three.get_z(newPosition) -. Three.get_z(vt));
  };

  let createPentagon = radius => {
    let geometry = Three.cylinderGeometry(radius, radius, 36., 5.);
    Three.set_translate(geometry, (0., 0., shift_pivot_z *. radius));

    let paramColor = Three.parseIntoParameters("{\"color\": \"#ffffff\"}");
    let material = Three.meshLambertMaterial(paramColor);
    Three.mesh(geometry, material);
  };

  let addPentagonToScene = obj => {
    pentagons[0] = Array.append(pentagons[0], [|obj|]);
    Three.addMeshToScene(scene[0], obj);
  };

  let resetPentagon = () => {
    scene[0] = Three.scene();
    pentagons[0] = [||];
    allParticle[0] = [];
    temp_particles_body[0] = [];
  };

  let animate = () => {
    for (x in 0 to amount - 1) {
      Three.rotateX(pentagons[0][x], Js.Math._PI /. rot_ret[x]);
    };
    updateParticle();
  };

  let initScene = element => {
    scene[0] = Three.scene();
    resetPentagon();
    buildBackground();
    buildAmbientLight("#ffffff");
    buildPointLight("#ffffff");
    buildParticle();

    let pentagon_first = createPentagon(size[0] *. radius);
    Three.set_x(
      pentagon_first##position,
      -. (Document.offsetWidth(element) /. 1.95 -. radius),
    );
    Three.set_y(
      pentagon_first##position,
      Document.offsetHeight(element) /. 5.,
    );
    Three.set_z(pentagon_first##position, 250.);
    rotate3axis(pentagon_first, rad_X[0], rad_Y[0], rad_Z[0]);
    addPentagonToScene(pentagon_first);

    let pentagons = [|[|pentagon_first|]|];
    for (x in 1 to amount - 1) {
      let pentagon = createPentagon(size[x] *. radius);
      rotate3axis(pentagon, rad_X[x], rad_Y[x], rad_Z[x]);
      setPosition(
        pentagon,
        getPivotVectors(pentagon),
        getPivotVectors(pentagons[0][x - 1]),
        rad_X[x],
        rad_Y[x],
        rad_Z[x],
        size[x],
      );
      if (x === 3) {
        Three.rotateX(pentagon, deg2rad(-120.));
      };
      addPentagonToScene(pentagon);
      pentagons[0] = Array.append(pentagons[0], [|pentagon|]);
    };
  };
};