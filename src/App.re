open ReasonReact;

type state = {route: ReasonReact.Router.url};

type action =
  | RouteTo(Router.url);

let component = reducerComponent("App");

let routeMatches = (x, link) => "/" ++ x == link;

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
    switch (route.path) {
    | ([x]) when routeMatches(x, Links.home) => <PageHome />
    | ([x]) when routeMatches(x, Links.careers) => <PageCareers />
    | ([x]) when routeMatches(x, Links.internshipdesign) => <PageInternshipDesign />
    | ([x]) when routeMatches(x, Links.internshipdeveloper) => <PageInternshipDev />
    | ([x]) when routeMatches(x, Links.careersdesigner) => <PageCareersDesigner />
    | ([x]) when routeMatches(x, Links.careersdeveloper) => <PageCareersDeveloper />
    | ([x]) when routeMatches(x, Links.ourwork) => <PageOurWork />
    | _ => <PageHome />
    };
  },
};
