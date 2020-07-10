open ReasonReact;
open WebGL;
open Laser;
open Pentagon;
open BallWorld;
open Network;

let saveToLocalStorage = (key, data) =>
  Dom.Storage.setItem(key, data, Dom.Storage.localStorage);
let loadFromLocalStorage = key =>
  Dom.Storage.getItem(key, Dom.Storage.localStorage);

type scene =
  | Laser
  | Pentagon
  | Ball
  | Network;

let selectScene = currentScene => {
  switch (currentScene) {
  | Laser => Pentagon
  | Pentagon => Ball
  | Ball => Network
  | Network => Laser
  };
};

let sceneToString = scene => {
  switch (scene) {
  | Laser => "Laser"
  | Pentagon => "Pentagon"
  | Ball => "Ball"
  | Network => "Network"
  };
};

let stringToScene = scene => {
  switch (scene) {
  | "Laser" => Laser
  | "Pentagon" => Pentagon
  | "Ball" => Ball
  | _ => Network
  };
};

type state = {
  loading: bool,
  scene,
};

type action =
  | ChangeScene(scene);

let rec animate = (currentScene, camera, scene, renderer) => {
  Document.setTimeout(
    () => {
      let idAnimationFrame =
        Three.requestAnimationFrame(() =>
          if (validElementById("webgl-canvas")) {
            animate(currentScene, camera, scene, renderer);
          }
        );
      switch (loadFromLocalStorage("current-scene")) {
      | Some(currentScene_localStorage) =>
        if (currentScene_localStorage !== sceneToString(currentScene)) {
          Three.cancelAnimationFrame(idAnimationFrame);
        }
      | None => ()
      };
    },
    1000 / 24,
  )
  |> ignore;
  switch (currentScene) {
  | Laser => LaserScene.animate()
  | Pentagon => PentagonScene.animate()
  | Ball => BallWorldScene.animate()
  | Network => NetworkScene.animate()
  };
  Three.render(renderer, scene, camera);
};

let renderScene = scene =>
  if (!isNotSupportedWebGl()) {
    Document.setTimeout(
      () => {
        let _ = three;
        let element =
          Document.getElementById(Document.doc, "webgl-background");
        let camera = Three.getCamera(element);
        Three.set_z(camera##position, 1000.);
        Three.set_x(camera##rotation, 0.);
        Three.set_y(camera##rotation, 0.);

        if (!validElementById("webgl-canvas")) {
          setIdToElement(Three.renderer##domElement, "webgl-canvas");
          Three.onResize(element);
        };

        Document.clearMouseEvents(element);
        let currentSceneObject =
          switch (scene) {
          | Laser =>
            LaserScene.initScene(
              Document.offsetWidth(element),
              Document.offsetHeight(element),
            );
            LaserScene.scene[0];
          | Pentagon =>
            PentagonScene.initScene(element);
            PentagonScene.scene[0];
          | Ball =>
            BallWorldScene.initScene(
              Document.offsetWidth(element),
              Document.offsetHeight(element),
            );
            Document.set_mousemove(element, e =>
              BallWorldScene.onMouseMove(
                e,
                Document.offsetWidth(element),
                Document.offsetHeight(element),
              )
              |> ignore
            );
            BallWorldScene.scene[0];
          | Network =>
            NetworkScene.initScene(
              Document.offsetWidth(element),
              Document.offsetHeight(element),
            );
            NetworkScene.setEventsMouse(
              element,
              Document.offsetWidth(element),
              Document.offsetHeight(element),
            );
            NetworkScene.scene[0];
          };

        if (!validElementById("webgl-canvas")) {
          Three.setSize(
            Three.renderer,
            Document.offsetWidth(element),
            Document.offsetHeight(element),
          );
          Three.setPixelRatio(
            Three.renderer,
            Document.windowDevicePixelRatio,
          );
          Document.appendChildToId(element, Three.renderer##domElement);
          setCanvasStyle(Three.renderer##domElement);
        } else {
          let canvasElement =
            Document.getElementById(Document.doc, "webgl-canvas");
          Document.setTimeout(
            () => changeClassName(canvasElement, "webgl-fade-in"),
            500,
          )
          |> ignore;
        };

        animate(
          scene,
          Three.getCamera(element),
          currentSceneObject,
          Three.renderer,
        );
      },
      500,
    )
    |> ignore;
  };

let autoChangeScene = send => {
  Document.setInterval(
    () =>
      switch (loadFromLocalStorage("current-scene")) {
      | Some(currentScene) =>
        let canvasElement =
          Document.getElementById(Document.doc, "webgl-canvas");
        changeClassName(canvasElement, "webgl-fade-out");
        send(ChangeScene(selectScene(currentScene |> stringToScene)));
      | None => ()
      },
    10000,
  );
};

let component = ReasonReact.reducerComponent("Carousel");

let make = (_children: array(ReasonReact.reactElement)) => {
  ...component,
  initialState: () => {loading: false, scene: Laser},
  didMount: ({send, onUnmount}) => {
    saveToLocalStorage("current-scene", sceneToString(Laser));
    let intervalId = autoChangeScene(send);
    onUnmount(() => Document.clearInterval(intervalId));
  },
  reducer: (action, state) =>
    switch (action) {
    | ChangeScene(scene) =>
      UpdateWithSideEffects(
        {...state, scene},
        _ => saveToLocalStorage("current-scene", sceneToString(scene)),
      )
    },
  render: self => {
    let sceneClassname =
      switch (self.state.scene) {
      | Laser => "laser"
      | Pentagon => "pentagon"
      | Ball => "ball"
      | Network => "network"
      };
    renderScene(self.state.scene);
    <div id="webgl-background" className={"hero " ++ sceneClassname}>
      <div className="container">
        <h1> {string("Technical partner for startups in Asia")} </h1>
        <p>
          {string(
             "specializing in Artificial Intelligence, VR, and other cutting-edge technologies.",
           )}
        </p>
        <Link className="btn" href=Links.contacts>
          {string("Contact Us")}
        </Link>
      </div>
      <div className="dots">
        {[Laser, Pentagon, Ball, Network]
         |> List.map(sceneType => {
              let className =
                self.state.scene === sceneType ? "dot active" : "dot";
              let key =
                switch (sceneType) {
                | Laser => "laser"
                | Pentagon => "pentagon"
                | Ball => "ball"
                | Network => "network"
                };
              <div
                className
                key
                onClick={_ =>
                  if (self.state.scene !== sceneType) {
                    let canvasElement =
                      Document.getElementById(Document.doc, "webgl-canvas");
                    changeClassName(canvasElement, "webgl-fade-out");
                    self.send(ChangeScene(sceneType));
                  }
                }
              />;
            })
         |> Array.of_list
         |> array}
      </div>
    </div>;
  },
};
