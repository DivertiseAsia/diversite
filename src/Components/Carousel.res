open React
open WebGL
/* open Laser; */
open Pentagon
open BallWorld
open Network

let saveToLocalStorage = (key, data) => Dom.Storage.setItem(key, data, Dom.Storage.localStorage)
let loadFromLocalStorage = key => Dom.Storage.getItem(key, Dom.Storage.localStorage)

type scene =
  | Laser
  | Pentagon
  | Ball
  | Network

let selectScene = currentScene => {
  switch currentScene {
  | Laser => Pentagon
  | Pentagon => Ball
  | Ball => Network
  | Network => Laser
  }
}

let sceneToString = scene => {
  switch scene {
  | Laser => "Laser"
  | Pentagon => "Pentagon"
  | Ball => "Ball"
  | Network => "Network"
  }
}

let stringToScene = scene => {
  switch scene {
  | "Laser" => Laser
  | "Ball" => Ball
  | "Network" => Network
  | "Pentagon" | _ => Pentagon
  }
}

let rec animate = (currentScene, camera, scene, renderer) => {
  Document.setTimeout(() => {
    let idAnimationFrame = Three.requestAnimationFrame(() =>
      if validElementById("webgl-canvas") {
        animate(currentScene, camera, scene, renderer)
      }
    )
    switch loadFromLocalStorage("current-scene") {
    | Some(currentScene_localStorage) =>
      if currentScene_localStorage !== sceneToString(currentScene) {
        Three.cancelAnimationFrame(idAnimationFrame)
      }
    | None => ()
    }
  }, 1000 / 24) |> ignore
  switch currentScene {
  /* | Laser => LaserScene.animate() */
  | Laser
  | Pentagon =>
    PentagonScene.animate()
  | Ball => BallWorldScene.animate()
  | Network => NetworkScene.animate()
  }
  Three.render(renderer, scene, camera)
}

let renderScene = scene =>
  if !isNotSupportedWebGl() {
    Document.setTimeout(() => {
      let _ = three
      let element = Document.getElementById(Document.doc, "webgl-background")
      let camera = Three.getCamera(element)
      Three.set_z(camera["position"], 1000.)
      Three.set_x(camera["rotation"], 0.)
      Three.set_y(camera["rotation"], 0.)

      if !validElementById("webgl-canvas") {
        setIdToElement(Three.renderer["domElement"], "webgl-canvas")
        Three.onResize(element)
      }

      Document.clearMouseEvents(element)
      let currentSceneObject = switch scene {
      | Laser
      /* LaserScene.initScene(
              Document.offsetWidth(element),
              Document.offsetHeight(element),
            );
            LaserScene.scene[0]; */
      | Pentagon =>
        PentagonScene.initScene(element)
        PentagonScene.scene[0]
      | Ball =>
        BallWorldScene.initScene(Document.offsetWidth(element), Document.offsetHeight(element))
        Document.set_mousemove(element, e =>
          BallWorldScene.onMouseMove(
            e,
            Document.offsetWidth(element),
            Document.offsetHeight(element),
          ) |> ignore
        )
        BallWorldScene.scene[0]
      | Network =>
        NetworkScene.initScene(Document.offsetWidth(element), Document.offsetHeight(element))
        NetworkScene.setEventsMouse(
          element,
          Document.offsetWidth(element),
          Document.offsetHeight(element),
        )
        NetworkScene.scene[0]
      }

      if !validElementById("webgl-canvas") {
        Three.setSize(Three.renderer, Document.offsetWidth(element), Document.offsetHeight(element))
        Three.setPixelRatio(Three.renderer, Document.windowDevicePixelRatio)
        Document.appendChildToId(element, Three.renderer["domElement"])
        setCanvasStyle(Three.renderer["domElement"])
      } else {
        let canvasElement = Document.getElementById(Document.doc, "webgl-canvas")
        Document.setTimeout(() => changeClassName(canvasElement, "webgl-fade-in"), 500) |> ignore
      }

      animate(scene, Three.getCamera(element), currentSceneObject, Three.renderer)
    }, 500) |> ignore
  }

@react.component
let make = () => {
  let (isPopupOpen, setPopupOpen) = React.useState(() => false)
  let (scene, setScene) = React.useState(() => Pentagon)
  let sceneClassname = switch scene {
  | Laser => "laser"
  | Pentagon => "pentagon"
  | Ball => "ball"
  | Network => "network"
  }

  React.useEffect0(() => {
    renderScene(scene)
    None
  })

  <div id="webgl-background" className={"hero " ++ sceneClassname}>
    <div className="container">
      <h1> {string("Technical partner for startups in Asia")} </h1>
      <p>
        {string(
          "specializing in Artificial Intelligence, VR, and other cutting-edge technologies.",
        )}
      </p>
      <div className="btn" onClick={_ => setPopupOpen(_ => !isPopupOpen)}>
        {string("Build Your Idea")}
      </div>
      <Popup
        isOpen=isPopupOpen
        closeOnBgClick=false
        closeFunc={() => setPopupOpen(_ => false)}
        className="buildyouridea-popup">
        <div>
          <h3> {string("Build Your Ideas")} </h3>
          <p>
            {string("Tell us about what you need. We will get back to you within 1 working day")}
          </p>
        </div>
        <ContactForm />
      </Popup>
    </div>
  </div>
}
