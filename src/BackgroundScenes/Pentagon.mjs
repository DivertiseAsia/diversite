// Generated by ReScript, PLEASE EDIT WITH CARE

import * as List from "rescript/lib/es6/list.js";
import * as $$Array from "rescript/lib/es6/array.js";
import * as Three from "three";
import * as Caml_array from "rescript/lib/es6/caml_array.js";
import * as Caml_int32 from "rescript/lib/es6/caml_int32.js";

function deg2rad(degree) {
  return Math.PI / 180 * degree;
}

var width = window.innerWidth;

var height = window.innerHeight;

var scene = [new (Three.Scene)()];

var radius = width / 12;

var size = [
  1.1,
  1.1,
  1.1,
  1.5,
  1.2,
  1
];

var rad_X = [
  -deg2rad(28),
  deg2rad(28),
  -deg2rad(38),
  deg2rad(48),
  -deg2rad(58),
  deg2rad(8)
];

var rad_Y = [
  deg2rad(10),
  deg2rad(20),
  deg2rad(20),
  -deg2rad(18),
  deg2rad(5),
  deg2rad(10)
];

var rad_Z = [
  deg2rad(30),
  deg2rad(15),
  -deg2rad(5),
  -deg2rad(18),
  -deg2rad(30),
  deg2rad(10)
];

var rot_ret = [
  500,
  500,
  500,
  500,
  500,
  500
];

var pentagons = [[]];

var allParticle = [/* [] */0];

var temp_particles_body = [/* [] */0];

var particles_body_0 = {
  x: -width / 2 + 120,
  y: -height / 2 + 120,
  z: 0,
  size: 100,
  n: 8,
  o: 0,
  angle: 0
};

var particles_body_1 = {
  hd: {
    x: -width / 2 + 320,
    y: -height / 2 + 120,
    z: 0,
    size: 35,
    n: 8,
    o: 0,
    angle: 0
  },
  tl: {
    hd: {
      x: -width / 2 + 120,
      y: -height / 2 + 320,
      z: 0,
      size: 35,
      n: 3,
      o: 0,
      angle: 0
    },
    tl: {
      hd: {
        x: width / 2 - 450,
        y: -height / 2 - 20,
        z: 0,
        size: 50,
        n: 6,
        o: 0,
        angle: 0
      },
      tl: {
        hd: {
          x: width / 2 - 200,
          y: -height / 2 + 50,
          z: 0,
          size: 100,
          n: 6,
          o: 0,
          angle: 0
        },
        tl: {
          hd: {
            x: width / 2 - 200,
            y: height / 2 - 50,
            z: 0,
            size: 100,
            n: 3,
            o: 0,
            angle: 0
          },
          tl: {
            hd: {
              x: width / 2 - 550,
              y: height / 2 + 20,
              z: 0,
              size: 50,
              n: 3,
              o: 0,
              angle: 0
            },
            tl: {
              hd: {
                x: width / 2 - 200,
                y: height / 2 - 250,
                z: 0,
                size: 50,
                n: 8,
                o: 0,
                angle: 0
              },
              tl: /* [] */0
            }
          }
        }
      }
    }
  }
};

var particles_body = {
  hd: particles_body_0,
  tl: particles_body_1
};

function buildParticle(param) {
  var colors = [[]];
  List.map((function (particle) {
          var newGeometry = new (Three.Geometry)();
          var validValue = [0];
          for(var x = 0; x <= 360; ++x){
            if (x === Caml_array.get(validValue, 0)) {
              var axisX = particle.size * Math.cos(x * Math.PI / 180);
              var axisY = particle.size * Math.sin(x * Math.PI / 180);
              var newVector3 = new (Three.Vector3)(axisX, axisY, 0);
              newGeometry.vertices.push(newVector3);
              var color = new (Three.Color)(x < (180 - Caml_int32.div(360, particle.n | 0) | 0) ? "rgba(255, 252, 249, 1.000)" : "rgba(116, 165, 162, 1.000)");
              Caml_array.set(colors, 0, $$Array.append(Caml_array.get(colors, 0), [color]));
              Caml_array.set(validValue, 0, x + Caml_int32.div(360, particle.n | 0) | 0);
            }
            
          }
          newGeometry.colors = Caml_array.get(colors, 0);
          var params = JSON.parse("{\"color\": \"#ffffff\", \"opacity\": 1.0, \"linewidth\": 1.0, \"vertexColors\": 2.0}");
          var material = new (Three.LineBasicMaterial)(params);
          var line = new (Three.Line)(newGeometry, material);
          line.position.x = particle.x;
          line.position.y = particle.y;
          var newBody_x = -width / 2 + 120;
          var newBody_y = -height / 2 + 120;
          var newBody_o = Math.random() / particle.size * (
            Math.random() > 0.5 ? 1 : -1
          );
          var newBody_angle = Math.random() * 360;
          var newBody = {
            x: newBody_x,
            y: newBody_y,
            z: 0,
            size: 100,
            n: 8,
            o: newBody_o,
            angle: newBody_angle
          };
          Caml_array.set(temp_particles_body, 0, List.append(Caml_array.get(temp_particles_body, 0), {
                    hd: newBody,
                    tl: /* [] */0
                  }));
          Caml_array.set(allParticle, 0, List.append(Caml_array.get(allParticle, 0), {
                    hd: line,
                    tl: /* [] */0
                  }));
          Caml_array.get(scene, 0).add(line);
          
        }), particles_body);
  
}

function updateParticle(param) {
  var updated_particles_body = [/* [] */0];
  List.mapi((function (index, particle) {
          var body = Caml_array.get($$Array.of_list(Caml_array.get(temp_particles_body, 0)), index);
          particle.rotation.z = particle.rotation.z + body.o;
          particle.position.x = particle.position.x + Math.cos(body.angle * Math.PI / 180) * 0.25;
          particle.position.y = particle.position.y + Math.sin(body.angle * Math.PI / 180) * 0.25;
          var newBody_x = particle.position.x + Math.cos(body.angle * Math.PI / 180) * 0.25;
          var newBody_y = particle.position.y + Math.sin(body.angle * Math.PI / 180) * 0.25;
          var newBody_z = particle.rotation.z + body.o;
          var newBody_size = body.size;
          var newBody_n = body.n;
          var newBody_o = body.o;
          var newBody_angle = body.angle + 1;
          var newBody = {
            x: newBody_x,
            y: newBody_y,
            z: newBody_z,
            size: newBody_size,
            n: newBody_n,
            o: newBody_o,
            angle: newBody_angle
          };
          return Caml_array.set(updated_particles_body, 0, List.append(Caml_array.get(updated_particles_body, 0), {
                          hd: newBody,
                          tl: /* [] */0
                        }));
        }), Caml_array.get(allParticle, 0));
  return Caml_array.set(temp_particles_body, 0, Caml_array.get(updated_particles_body, 0));
}

function buildBackground(param) {
  var paramColor = JSON.parse("{\"color\": \"#469FA3\"}");
  var geometry = new (Three.PlaneBufferGeometry)(window.innerWidth * 2, window.innerHeight * 2);
  var material = new (Three.MeshLambertMaterial)(paramColor);
  var mesh = new (Three.Mesh)(geometry, material);
  mesh.position.x = 0;
  mesh.position.y = 0;
  mesh.position.z = -100;
  mesh.receiveShadow = true;
  Caml_array.get(scene, 0).add(mesh);
  
}

function buildPointLight(color) {
  var newVector3 = new (Three.Vector3)(window.innerWidth * -1, window.innerHeight, 300);
  var pointLight = new (Three.PointLight)(color);
  pointLight.castShadow = true;
  pointLight.position.copy(newVector3);
  var pointLightHelper = new (Three.PointLightHelper)(pointLight, 10);
  Caml_array.get(scene, 0).add(pointLight);
  Caml_array.get(scene, 0).add(pointLightHelper);
  
}

function buildAmbientLight(color) {
  Caml_array.get(scene, 0).add(new (Three.AmbientLight)(color, 0.70));
  
}

function rotate3axis(obj, x, y, z) {
  obj.rotation.x = obj.rotation.x + x;
  obj.rotation.y = obj.rotation.y + y;
  obj.rotation.z = obj.rotation.z + z;
  
}

function getRotationTransformationVector(x, y, z, size) {
  var mX = new (Three.Matrix3)();
  var mY = new (Three.Matrix3)();
  var mZ = new (Three.Matrix3)();
  mX.set(1, 0, 0, 0, Math.cos(x), -Math.sin(x), 0, Math.sin(x), Math.cos(x));
  mY.set(Math.cos(y), 0, Math.sin(y), 0, 1, 0, -Math.sin(y), 0, Math.cos(y));
  mZ.set(Math.cos(z), -Math.sin(z), 0, Math.sin(z), Math.cos(z), 0, 0, 0, 1);
  var newVector3 = new (Three.Vector3)(0, 0, -0.31 * size * radius);
  var newVector3WithMz = newVector3.applyMatrix3(mZ);
  var newVector3WithMzMy = newVector3WithMz.applyMatrix3(mY);
  return newVector3WithMzMy.applyMatrix3(mX);
}

function getPivotVector(obj, first_vertice, second_vertice) {
  var vector3_first = new (Three.Vector3)(0, 0, 0);
  vector3_first.copy(Caml_array.get(obj.geometry.vertices, first_vertice));
  vector3_first.applyMatrix4(obj.matrix);
  var vector3_second = new (Three.Vector3)(0, 0, 0);
  vector3_second.copy(Caml_array.get(obj.geometry.vertices, second_vertice));
  vector3_second.applyMatrix4(obj.matrix);
  return vector3_first.add(vector3_second).multiplyScalar(0.5);
}

function getPivotVectors(obj) {
  obj.updateMatrix();
  var vertices = obj.geometry.vertices;
  for(var x = 0 ,x_finish = List.length(vertices); x < x_finish; ++x){
    var newVector3 = new (Three.Vector3)(0, 0, 0);
    newVector3.copy(Caml_array.get(obj.geometry.vertices, x));
    newVector3.applyMatrix4(obj.matrix);
  }
  var vector3_right = getPivotVector(obj, 1, 6);
  var vector3_left = getPivotVector(obj, 4, 9);
  var vector3_center = getPivotVector(obj, 10, 11);
  return [
          vector3_right,
          vector3_left,
          vector3_center
        ];
}

function setPosition(obj, oldPivotVectors, refPivotVectors, x, y, z, size) {
  var newPosition = Caml_array.get(refPivotVectors, 0).add(Caml_array.get(oldPivotVectors, 2)).add(Caml_array.get(oldPivotVectors, 1).negate());
  var vt = getRotationTransformationVector(x, y, z, size);
  obj.position.x = newPosition.x - vt.x;
  obj.position.y = newPosition.y - vt.y;
  obj.position.z = newPosition.z - vt.z;
  
}

function createPentagon(radius) {
  var geometry = new (Three.CylinderGeometry)(radius, radius, 36, 5);
  geometry.translate = [
    0,
    0,
    -0.31 * radius
  ];
  var paramColor = JSON.parse("{\"color\": \"#ffffff\"}");
  var material = new (Three.MeshLambertMaterial)(paramColor);
  return new (Three.Mesh)(geometry, material);
}

function addPentagonToScene(obj) {
  Caml_array.set(pentagons, 0, $$Array.append(Caml_array.get(pentagons, 0), [obj]));
  Caml_array.get(scene, 0).add(obj);
  
}

function resetPentagon(param) {
  Caml_array.set(scene, 0, new (Three.Scene)());
  Caml_array.set(pentagons, 0, []);
  Caml_array.set(allParticle, 0, /* [] */0);
  return Caml_array.set(temp_particles_body, 0, /* [] */0);
}

function animate(param) {
  for(var x = 0; x <= 5; ++x){
    Caml_array.get(Caml_array.get(pentagons, 0), x).rotateX(Math.PI / Caml_array.get(rot_ret, x));
  }
  return updateParticle(undefined);
}

function initScene(element) {
  Caml_array.set(scene, 0, new (Three.Scene)());
  resetPentagon(undefined);
  buildBackground(undefined);
  buildAmbientLight("#ffffff");
  buildPointLight("#ffffff");
  buildParticle(undefined);
  var pentagon_first = createPentagon(Caml_array.get(size, 0) * radius);
  pentagon_first.position.x = -(element.offsetWidth / 1.95 - radius);
  pentagon_first.position.y = element.offsetHeight / 5;
  pentagon_first.position.z = 250;
  rotate3axis(pentagon_first, Caml_array.get(rad_X, 0), Caml_array.get(rad_Y, 0), Caml_array.get(rad_Z, 0));
  addPentagonToScene(pentagon_first);
  var pentagons = [[pentagon_first]];
  for(var x = 1; x <= 5; ++x){
    var pentagon = createPentagon(Caml_array.get(size, x) * radius);
    rotate3axis(pentagon, Caml_array.get(rad_X, x), Caml_array.get(rad_Y, x), Caml_array.get(rad_Z, x));
    setPosition(pentagon, getPivotVectors(pentagon), getPivotVectors(Caml_array.get(Caml_array.get(pentagons, 0), x - 1 | 0)), Caml_array.get(rad_X, x), Caml_array.get(rad_Y, x), Caml_array.get(rad_Z, x), Caml_array.get(size, x));
    if (x === 3) {
      pentagon.rotateX(deg2rad(-120));
    }
    addPentagonToScene(pentagon);
    Caml_array.set(pentagons, 0, $$Array.append(Caml_array.get(pentagons, 0), [pentagon]));
  }
  
}

var PentagonScene = {
  width: width,
  height: height,
  scene: scene,
  amount: 6,
  shift_pivot_z: -0.31,
  radius: radius,
  size: size,
  rad_X: rad_X,
  rad_Y: rad_Y,
  rad_Z: rad_Z,
  rot_ret: rot_ret,
  pentagons: pentagons,
  allParticle: allParticle,
  temp_particles_body: temp_particles_body,
  particles_body: particles_body,
  buildParticle: buildParticle,
  updateParticle: updateParticle,
  buildBackground: buildBackground,
  buildPointLight: buildPointLight,
  buildAmbientLight: buildAmbientLight,
  rotate3axis: rotate3axis,
  getRotationTransformationVector: getRotationTransformationVector,
  getPivotVector: getPivotVector,
  getPivotVectors: getPivotVectors,
  setPosition: setPosition,
  createPentagon: createPentagon,
  addPentagonToScene: addPentagonToScene,
  resetPentagon: resetPentagon,
  animate: animate,
  initScene: initScene
};

export {
  deg2rad ,
  PentagonScene ,
  
}
/*  Not a pure module */
