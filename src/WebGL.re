
type three;

[@bs.module] external three: three = "three";

module Document {
    type document;
    type window;

    [@bs.send] external getElementById: (document, string) => Dom.element = "getElementById";
    [@bs.send] external createElement: (document, string) => Dom.element = "createElement";
    [@bs.val] external doc : document = "document";
    [@bs.get] external bodyElement: (document) => Dom.element = "body";
    [@bs.val] external windowWidth : float = "window.innerWidth";
    [@bs.val] external windowHeight : float = "window.innerHeight";
    [@bs.val] external windowDevicePixelRatio : float = "window.devicePixelRatio";
    [@bs.get] external offsetWidth: (Dom.element) => float = "offsetWidth";
    [@bs.get] external offsetHeight: (Dom.element) => float = "offsetHeight";
    [@bs.send] external appendChildToId: (Dom.element, Dom.element) => unit = "appendChild";
    
    [@bs.send][@bs.scope ("body")] external appendChildToBody: (document, Dom.element) => unit = "appendChild";
    [@bs.val] external setTimeout : (unit => unit, int) => float = "setTimeout";

    [@bs.set] external set_onresize: (Dom.element, unit => unit) => unit = "onresize";
    [@bs.set] external set_mousemove: (Dom.element, ReactEvent.Mouse.t => unit) => unit = "onmousemove";
    [@bs.set] external set_mouseout: (Dom.element, unit => unit) => unit = "onmouseout";
};

module Three {
    let _ = three;
    type objLoader;
    [@bs.deriving abstract]
    type position = {
        x:float,
        y:float,
        z:float
    };
    type vector3 = Js.t({
        .
        x:float,
        y:float,
        z:float
    });
    type vector2 = {
      x: float, 
      y: float
    };
    type vertice;
    type matrix3;
    type matrix4;
    [@bs.deriving abstract]
    type texture;
    type camera = Js.t({
        .
        position: vector3,
        rotation: vector3
    });
    type scene;
    type geometry = Js.t({
        .
        vertices: array(vertice)
    });
    type material;
    type mesh = Js.t({
        .
        geometry,
        material,
        matrix: matrix4,
        position: vector3,
        rotation: vector3,
        receiveShadow: bool
    });
    type values = {
        value: array(float)
    };
    type valueFloat = {
        value: float
    };
    type valueVector2 = {
        value: vector2
    };
    type uniforms = {
        time: valueFloat,
        r: values,
        speed: values, 
        bandWidth: values,
        color: valueVector2,
        resolution: valueVector2
    };
    type line = Js.t({
        .
        position: vector3,
        rotation: vector3,
    });
    type light;
    type ambientLight;
    type pointLight;
    
    type color;
    type vertexColors;
    type renderer = Js.t({
        .
        domElement: Dom.element,
    });
    
    [@bs.deriving abstract]
    type parameters = {
        [@bs.optional] antialias: string,
        [@bs.optional] color: string,
        [@bs.optional] opacity: float, 
        [@bs.optional] linewidth: float, 
        [@bs.optional] vertexColors: float,
        [@bs.optional] alpha: bool,
        [@bs.optional] map: texture, 
        [@bs.optional] transparent: bool,
    };
    type animate;

    [@bs.scope "JSON"] [@bs.val]
    external parseIntoParameters : string => parameters = "parse";

    [@bs.new] [@bs.scope ("Three")] external newMatrix3: (unit) => matrix3 = "Matrix3";

    [@bs.new] [@bs.scope ("Three")] external orthographicCamera: (float, float, float, float, float, float) => camera = "OrthographicCamera";
    [@bs.new] [@bs.scope ("Three")] external perspectiveCamera: (float, float, float, float) => camera = "PerspectiveCamera";
    [@bs.new] [@bs.scope ("Three")] external scene: unit => scene = "Scene";
    [@bs.new] [@bs.scope ("Three")] external newGeometry: (unit) => geometry = "Geometry";
    [@bs.new] [@bs.scope ("Three")] external cylinderGeometry: (float, float, float, float) => geometry = "CylinderGeometry";
    [@bs.new] [@bs.scope ("Three")] external sphereGeometry: (float, float, float) => geometry = "SphereGeometry";
    [@bs.new] [@bs.scope ("Three")] external boxGeometry: (float, float, float) => geometry = "BoxGeometry";
    [@bs.new] [@bs.scope ("Three")] external sphereBufferGeometry: (float, float, float) => geometry = "SphereBufferGeometry";
    [@bs.new] [@bs.scope ("Three")] external planeBufferGeometry: (float, float) => geometry = "PlaneBufferGeometry";
    [@bs.new] [@bs.scope ("Three")] external meshBasicMaterial: (parameters) => material = "MeshBasicMaterial";
    [@bs.new] [@bs.scope ("Three")] external meshLambertMaterial: (parameters) => material = "MeshLambertMaterial";
    [@bs.new] [@bs.scope ("Three")] external lineBasicMaterial: (parameters) => material = "LineBasicMaterial";
    [@bs.new] [@bs.scope ("Three")] external meshNormalMaterial: (unit) => material = "MeshNormalMaterial";
    [@bs.new] [@bs.scope ("Three")] external shaderMaterial: (parameters) => material = "ShaderMaterial";
    [@bs.new] [@bs.scope ("Three")] external mesh: (geometry, material) => mesh = "Mesh";
    [@bs.new] [@bs.scope ("Three")] external newTexture: (Dom.element) => texture = "Texture";
    [@bs.new] [@bs.scope ("Three")] external line: (geometry, material) => line = "Line";
    [@bs.new] [@bs.scope ("Three")] external pointLight: (string) => pointLight = "PointLight";
    [@bs.new] [@bs.scope ("Three")] external pointLightHelper: (pointLight, float) => mesh = "PointLightHelper";
    [@bs.new] [@bs.scope ("Three")] external ambientLight: (string, float) => ambientLight = "AmbientLight";
    [@bs.new] [@bs.scope ("Three")] external directionalLight: (string, float) => light = "DirectionalLight";
    [@bs.new] [@bs.scope ("Three")] external webGLRenderer: (parameters) => renderer = "WebGLRenderer";
    [@bs.new] [@bs.scope ("Three")] external newVector3: (float, float, float) => position = "Vector3";
    [@bs.new] [@bs.scope ("Three")] external newVector2: (float, float) => vector2 = "Vector2";

    [@bs.new] [@bs.scope ("Three")] external color: (string) => color = "Color";
    
    [@bs.send] external updateProjectionMatrix : (camera) => unit = "updateProjectionMatrix";
    
    [@bs.send] external addAmbientLightToScene : (scene, ambientLight) => unit = "add";
    [@bs.send] external addPointLightToScene : (scene, pointLight) => unit = "add";
    [@bs.send] external addLightToScene : (scene, light) => unit = "add";
    [@bs.send] external addMeshToScene : (scene, mesh) => unit = "add";
    [@bs.send] external addLineToScene : (scene, line) => unit = "add";
    [@bs.send] external addVector3ToVector3 : (position, position) => position = "add";
    [@bs.send] external vector3_negate : (position) => position = "negate";
    [@bs.send] external multiplyScalar : (position, float) => position = "multiplyScalar";
    [@bs.send] external setPixelRatio: (renderer, float) => unit = "setPixelRatio";
    [@bs.send] external setSize: (renderer, float, float) => unit = "setSize";
    [@bs.send] external updateMatrix: (mesh) => unit = "updateMatrix";
    [@bs.send] external rotateX: (mesh, float) => unit = "rotateX";
    [@bs.send] external applyMatrix3: (position, matrix3) => position = "applyMatrix3";
    [@bs.send] external applyMatrix4: (position, matrix4) => position = "applyMatrix4";
    [@bs.send] external setMatrix3: 
                (matrix3, float, float
                , float, float, float, 
                float , float, float, float) => unit = "set";

    [@bs.set] external set_aspect: (camera, float) => unit = "aspect";

    [@bs.get] external get_x_vector2: (vector2) => float = "x";
    [@bs.get] external get_y_vector2: (vector2) => float = "y";

    [@bs.get] external get_x: (position) => float = "x";
    [@bs.get] external get_y: (position) => float = "y";
    [@bs.get] external get_z: (position) => float = "z";
    
    [@bs.set] external set_x: (vector3, float) => unit = "x";
    [@bs.set] external set_y: (vector3, float) => unit = "y";
    [@bs.set] external set_z: (vector3, float) => unit = "z";
    [@bs.set] external set_translate: (geometry, (float, float, float)) => unit = "translate";

    [@bs.set] external set_receiveShadow: (mesh, bool) => unit = "receiveShadow";

    [@bs.set] external set_castShadow: (pointLight, bool) => unit = "castShadow";

    [@bs.val] external requestAnimationFrame: (unit => unit) => unit = "requestAnimationFrame";
    [@bs.send] external render : (renderer, scene, camera) => unit = "render";
    [@bs.send] external vector3_copy : (position, vertice) => unit = "copy";
    [@bs.val] external set_position_copy: (position) => unit = "pointLight.position.copy";

    [@bs.get] external get_camera: (three) => camera = "Camera";
    [@bs.get] external geometry_vertices: (geometry) => list(vertice) = "vertices";
    [@bs.set] external geometry_set_colors: (geometry, array(color)) => array(color) = "colors";
    [@bs.send] external geometry_vertices_push: (list(vertice), position) => unit = "push";
    [@bs.send] external geometry_vertices_pushs: (array(vertice), position, position) => unit = "push";
 
    let camera = [|[||]|];
    let getCamera = (element) => {
        if (Array.length(camera[0]) === 0) {
            let newCamera = orthographicCamera(
                Document.offsetWidth(element) /. -2., 
                Document.offsetWidth(element) /. 2., 
                Document.offsetHeight(element) /. 2., 
                Document.offsetHeight(element) /. -2., 
                1., 
                2000.);
                camera[0] = Array.append(camera[0], [|newCamera|]);
                camera[0][0];
        } else {
            camera[0][0];
        };
    };
    
    let paramAntialias = parseIntoParameters("{\"antialias\": true, \"alpha\": true}");
    let renderer = webGLRenderer(paramAntialias);

    let onResize = (element) => Document.set_onresize(Document.bodyElement(Document.doc), () => {
        set_aspect(camera[0][0], Document.offsetWidth(element) /. Document.offsetHeight(element));
        updateProjectionMatrix(camera[0][0]);
        setSize(renderer, Document.offsetWidth(element), Document.offsetHeight(element));
    });
};

let isNotSupportedWebGl: (unit) => bool = [%bs.raw
  {|
    function(a) {
        var isSafari = !!navigator.userAgent.match(/Version\/[\d\.]+.*Safari/);
        var iOS = /iPad|iPhone|iPod/.test(navigator.userAgent) && !window.MSStream;
        
        var ua = navigator.userAgent.toLowerCase(); 
        var isIE = (ua.indexOf('msie') > -1);
        console.log(isIE);
        if ((isSafari && iOS) || isIE) {
            return true;
        } else if(isSafari || isIE) {
            return true;
        } else {
            return false;
        }
    }
  |}
];

let setCanvasStyle: (Dom.element) => unit = [%bs.raw
  {|
    function(canvas) {
      if (canvas) {
        canvas.style.position = "absolute";
        canvas.style.top = "0px";
        canvas.style.zIndex = "-1";
      }
    }
  |}
];

let validElementById: (string) => bool = [%bs.raw
  {|
    function(canvas_id) {
      if (document.getElementById(canvas_id)) {
        return true;
      } else {
          return false;
      }
    }
  |}
];

let setIdToElement: (Dom.element, string) => unit = [%bs.raw
  {|
    function(canvas, id) {
      if (canvas) {
        canvas.id = id;
      }
    }
  |}
];
