open ReasonReact;
open WebGL;
open Pentagon;

type state = {route: ReasonReact.Router.url};

type action =
  | RouteTo(Router.url);

let component = reducerComponent("App");

let routeMatches = (x:list(string), link:string) => {
  let currentPath = List.fold_left((acc, s) => acc ++ "/" ++ s, "", x);
  {
    currentPath == link
  };
};

let rec animate = (camera, scene, renderer) => {
  Document.setTimeout(() => {
    Three.requestAnimationFrame(() => {
      if (validElementById("webgl-canvas")) {
        animate(camera, scene, renderer)
      };
    });
  }, 1000 / 24) |> ignore;
  PentagonScene.animate();
  PentagonScene.updateParticle();
  Three.render(renderer, scene, camera);
};


let make = _children => {
  ...component,
  initialState: () => {route: Router.dangerouslyGetInitialUrl()},
  reducer: (action, _) =>
    switch (action) {
    | RouteTo(route) => Update({route: route})
    },
  didMount: ({send, onUnmount}) => {
    let watcherID = Router.watchUrl(url => send(RouteTo(url)));
    onUnmount(() => Router.unwatchUrl(watcherID));
  },
  render: ({state: {route}}) => {

    if (!validElementById("webgl-canvas") && !isNotSupportedWebGl()) { 
      Document.setTimeout(() => {
        let _ = three;
        let element = Document.getElementById(Document.doc, "webgl-background");
        setIdToElement(Three.renderer##domElement, "webgl-canvas");
        Three.onResize(element);
        PentagonScene.initScene(Three.getCamera(element), Three.renderer, element);
        animate(Three.getCamera(element), PentagonScene.scene[0], Three.renderer);
        ()
      }, 100) |> ignore;
    };
    
    switch (route.path) {
    | (x) when routeMatches(x, Links.home) => <PageHome />
    | (x) when routeMatches(x, Links.careers) => <PageCareers />
    | (x) when routeMatches(x, Links.internshipdesign) => <PageInternshipDesign />
    | (x) when routeMatches(x, Links.internshipdeveloper) => <PageInternshipDev />
    | (x) when routeMatches(x, "/career-designer") || routeMatches(x, Links.careersdesigner) => <PageCareersDesigner />
    | (x) when routeMatches(x, "/career-developer") || routeMatches(x, Links.careersdeveloper) => <PageCareersDeveloper />
    | (x) when routeMatches(x, Links.ourwork) => <PageOurWork />
    | _ => <PageHome />
    };
  },
};
