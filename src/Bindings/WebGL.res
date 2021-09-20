type three

@module external three: three = "three"

module Document = {
  type document
  type window

  @send
  external getElementById: (document, string) => Dom.element = "getElementById"
  @send
  external createElement: (document, string) => Dom.element = "createElement"
  @val external doc: document = "document"
  @get external bodyElement: document => Dom.element = "body"
  @val external windowWidth: float = "window.innerWidth"
  @val external windowHeight: float = "window.innerHeight"
  @val external windowDevicePixelRatio: float = "window.devicePixelRatio"
  @get external offsetWidth: Dom.element => float = "offsetWidth"
  @get external offsetHeight: Dom.element => float = "offsetHeight"
  @send
  external appendChildToId: (Dom.element, Dom.element) => unit = "appendChild"

  @send @scope("body")
  external appendChildToBody: (document, Dom.element) => unit = "appendChild"
  @val external setTimeout: (unit => unit, int) => float = "setTimeout"
  @val external setInterval: (unit => unit, int) => int = "setInterval"
  @get external clearInterval: int => unit = "clearInterval"

  @set
  external set_onresize: (Dom.element, unit => unit) => unit = "onresize"
  @set
  external set_mousemove: (Dom.element, ReactEvent.Mouse.t => unit) => unit = "onmousemove"
  @set
  external set_mouseout: (Dom.element, ReactEvent.Mouse.t => unit) => unit = "onmouseout"

  let clearMouseEvents = element => {
    set_mousemove(element, _ => ())
    set_mouseout(element, _ => ())
  }
}

module Three = {
  let _ = three
  type objLoader
  @derivingabstract
  type position = {
    x: float,
    y: float,
    z: float,
  }
  type vector3 = {"x": float, "y": float, "z": float}
  type vector2 = {
    x: float,
    y: float,
  }
  type vertice
  type matrix3
  type matrix4
  @derivingabstract
  type texture
  type camera = {"position": vector3, "rotation": vector3}
  type scene
  type geometry = {"vertices": array<vertice>}
  type material
  type mesh = {
    "geometry": geometry,
    "material": material,
    "matrix": matrix4,
    "position": vector3,
    "rotation": vector3,
    "receiveShadow": bool,
  }
  type values = {value: array<float>}
  type valueFloat = {value: float}
  type valueVector2 = {value: vector2}
  type uniforms = {
    time: valueFloat,
    r: values,
    speed: values,
    bandWidth: values,
    color: valueVector2,
    resolution: valueVector2,
  }
  type line = {"position": vector3, "rotation": vector3}
  type light
  type ambientLight
  type pointLight

  type color
  type vertexColors
  type renderer = {"domElement": Dom.element}

  @derivingabstract
  type parameters = {
    @optional
    antialias: string,
    @optional
    color: string,
    @optional
    opacity: float,
    @optional
    linewidth: float,
    @optional
    vertexColors: float,
    @optional
    alpha: bool,
    @optional
    map: texture,
    @optional
    transparent: bool,
  }
  type animate

  @val @scope("JSON")
  external parseIntoParameters: string => parameters = "parse"

  @new @scope("Three")
  external newMatrix3: unit => matrix3 = "Matrix3"

  @new @scope("Three")
  external orthographicCamera: (float, float, float, float, float, float) => camera =
    "OrthographicCamera"
  @new @scope("Three")
  external perspectiveCamera: (float, float, float, float) => camera = "PerspectiveCamera"
  @new @scope("Three")
  external scene: unit => scene = "Scene"
  @new @scope("Three")
  external newGeometry: unit => geometry = "Geometry"
  @new @scope("Three")
  external cylinderGeometry: (float, float, float, float) => geometry = "CylinderGeometry"
  @new @scope("Three")
  external sphereGeometry: (float, float, float) => geometry = "SphereGeometry"
  @new @scope("Three")
  external boxGeometry: (float, float, float) => geometry = "BoxGeometry"
  @new @scope("Three")
  external sphereBufferGeometry: (float, float, float) => geometry = "SphereBufferGeometry"
  @new @scope("Three")
  external planeBufferGeometry: (float, float) => geometry = "PlaneBufferGeometry"
  @new @scope("Three")
  external meshBasicMaterial: parameters => material = "MeshBasicMaterial"
  @new @scope("Three")
  external meshLambertMaterial: parameters => material = "MeshLambertMaterial"
  @new @scope("Three")
  external lineBasicMaterial: parameters => material = "LineBasicMaterial"
  @new @scope("Three")
  external meshNormalMaterial: unit => material = "MeshNormalMaterial"
  @new @scope("Three")
  external shaderMaterial: parameters => material = "ShaderMaterial"
  @new @scope("Three")
  external mesh: (geometry, material) => mesh = "Mesh"
  @new @scope("Three")
  external newTexture: Dom.element => texture = "Texture"
  @new @scope("Three")
  external line: (geometry, material) => line = "Line"
  @new @scope("Three")
  external pointLight: string => pointLight = "PointLight"
  @new @scope("Three")
  external pointLightHelper: (pointLight, float) => mesh = "PointLightHelper"
  @new @scope("Three")
  external ambientLight: (string, float) => ambientLight = "AmbientLight"
  @new @scope("Three")
  external directionalLight: (string, float) => light = "DirectionalLight"
  @new @scope("Three")
  external webGLRenderer: parameters => renderer = "WebGLRenderer"
  @new @scope("Three")
  external newVector3: (float, float, float) => position = "Vector3"
  @new @scope("Three")
  external newVector2: (float, float) => vector2 = "Vector2"

  @new @scope("Three")
  external color: string => color = "Color"

  @send
  external updateProjectionMatrix: camera => unit = "updateProjectionMatrix"

  @send
  external addAmbientLightToScene: (scene, ambientLight) => unit = "add"
  @send
  external addPointLightToScene: (scene, pointLight) => unit = "add"
  @send external addLightToScene: (scene, light) => unit = "add"
  @send external addMeshToScene: (scene, mesh) => unit = "add"
  @send external addLineToScene: (scene, line) => unit = "add"
  @send
  external addVector3ToVector3: (position, position) => position = "add"
  @send external vector3_negate: position => position = "negate"
  @send
  external multiplyScalar: (position, float) => position = "multiplyScalar"
  @send
  external setPixelRatio: (renderer, float) => unit = "setPixelRatio"
  @send external setSize: (renderer, float, float) => unit = "setSize"
  @send external updateMatrix: mesh => unit = "updateMatrix"
  @send external rotateX: (mesh, float) => unit = "rotateX"
  @send
  external applyMatrix3: (position, matrix3) => position = "applyMatrix3"
  @send
  external applyMatrix4: (position, matrix4) => position = "applyMatrix4"
  @send
  external setMatrix3: (
    matrix3,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
    float,
  ) => unit = "set"

  @set external set_aspect: (camera, float) => unit = "aspect"

  @get external get_x_vector2: vector2 => float = "x"
  @get external get_y_vector2: vector2 => float = "y"

  @get external get_x: position => float = "x"
  @get external get_y: position => float = "y"
  @get external get_z: position => float = "z"
  @set external set_position_x: (position, float) => unit = "x"
  @set external set_position_y: (position, float) => unit = "y"
  @set external set_position_z: (position, float) => unit = "z"

  @get external get_vector_x: vector3 => float = "x"
  @get external get_vector_y: vector3 => float = "y"
  @get external get_vector_z: vector3 => float = "z"
  @set external set_x: (vector3, float) => unit = "x"
  @set external set_y: (vector3, float) => unit = "y"
  @set external set_z: (vector3, float) => unit = "z"
  @set
  external set_translate: (geometry, (float, float, float)) => unit = "translate"

  @set external set_receiveShadow: (mesh, bool) => unit = "receiveShadow"

  @set external set_castShadow: (pointLight, bool) => unit = "castShadow"

  @val
  external requestAnimationFrame: (unit => unit) => int = "requestAnimationFrame"
  @val
  external cancelAnimationFrame: int => unit = "cancelAnimationFrame"

  @send external render: (renderer, scene, camera) => unit = "render"
  @send external vector3_copy: (position, vertice) => unit = "copy"
  @val
  external set_position_copy: position => unit = "pointLight.position.copy"

  @get external get_camera: three => camera = "Camera"
  @get
  external geometry_vertices: geometry => list<vertice> = "vertices"
  @set
  external geometry_set_colors: (geometry, array<color>) => array<color> = "colors"
  @send
  external geometry_vertices_push: (list<vertice>, position) => unit = "push"
  @send
  external geometry_vertices_pushs: (array<vertice>, position, position) => unit = "push"

  let camera = [[]]
  let getCamera = element =>
    if Array.length(camera[0]) === 0 {
      let newCamera = orthographicCamera(
        Document.offsetWidth(element) /. -2.,
        Document.offsetWidth(element) /. 2.,
        Document.offsetHeight(element) /. 2.,
        Document.offsetHeight(element) /. -2.,
        1.,
        2000.,
      )
      camera[0] = Array.append(camera[0], [newCamera])
      camera[0][0]
    } else {
      camera[0][0]
    }

  let paramAntialias = parseIntoParameters("{\"antialias\": true, \"alpha\": true}")
  let renderer = webGLRenderer(paramAntialias)

  let onResize = element => {
    Document.set_onresize(Document.bodyElement(Document.doc), () => {
      set_aspect(camera[0][0], Document.offsetWidth(element) /. Document.offsetHeight(element))
      updateProjectionMatrix(camera[0][0])
      setSize(renderer, Document.offsetWidth(element), Document.offsetHeight(element))
    })
  }
}

let isNotSupportedWebGl: unit => bool = %raw(`
    function(a) {
        var isSafari = !!navigator.userAgent.match(/Version\/[\d\.]+.*Safari/);
        var iOS = /iPad|iPhone|iPod/.test(navigator.userAgent) && !window.MSStream;

        var ua = navigator.userAgent.toLowerCase();
        var isIE = (ua.indexOf('msie') > -1);
        if ((isSafari && iOS) || isIE) {
            return true;
        } else if(isSafari || isIE) {
            return true;
        } else {
            return false;
        }
    }
  `)

let setCanvasStyle: Dom.element => unit = %raw(`
    function(canvas) {
      if (canvas) {
        canvas.style.position = "absolute";
        canvas.style.top = "0px";
        canvas.style.zIndex = "-1";
      }
    }
  `)

let validElementById: string => bool = %raw(`
    function(canvas_id) {
      if (document.getElementById(canvas_id)) {
        return true;
      } else {
          return false;
      }
    }
  `)

let setIdToElement: (Dom.element, string) => unit = %raw(`
    function(canvas, id) {
      if (canvas) {
        canvas.id = id;
      }
    }
  `)

let mouseX: ReactEvent.Mouse.t => float = %raw(`
    function(event) {
      return (event.clientX);
    }
  `)
let mouseY: ReactEvent.Mouse.t => float = %raw(`
  function(event) {
    return (event.clientY);
  }
`)

let changeClassName: (Dom.element, string) => unit = %raw(`
  function(element, className) {
    console.log(className);
    if (element) {
      element.className = className;
    }
  }
`)
