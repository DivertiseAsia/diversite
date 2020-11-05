open ReasonReact;

type state = {route: ReasonReact.Router.url};

type action =
  | RouteTo(Router.url);

let routeMatches = (x: list(string), link: string) => {
  let currentPath = List.fold_left((acc, s) => acc ++ "/" ++ s, "", x);
  currentPath == link;
};

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (_, action) =>
        switch (action) {
        | RouteTo(route) => {route: route}
        },
      {route: Router.dangerouslyGetInitialUrl()},
    );
  React.useEffect0(() => {
    let watcherID = Router.watchUrl(url => dispatch(RouteTo(url)));
    Some(() => Router.unwatchUrl(watcherID));
  });

  switch (state.route.path) {
  | x when routeMatches(x, Links.home) => <PageHome />
  | x when routeMatches(x, Links.careers) => <PageCareers />
  | x when routeMatches(x, Links.internshipdesign) => <PageInternshipDesign />
  | x when routeMatches(x, Links.internshipdeveloper) => <PageInternshipDev />
  | x
      when
        routeMatches(x, "/career-designer")
        || routeMatches(x, Links.careersdesigner) =>
    <PageCareersDesigner />
  | x
      when
        routeMatches(x, "/career-developer")
        || routeMatches(x, Links.careersdeveloper) =>
    <PageCareersDeveloper />
  | x when routeMatches(x, Links.ourwork) => <PageOurWork selectedCategory=Links.ourwork_link_category(state.route.hash) />
  | _ => <PageHome />
  };
};