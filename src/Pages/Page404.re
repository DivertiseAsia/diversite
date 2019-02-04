open ReasonReact;

let component = ReasonReact.statelessComponent("PageLogin");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <Logo />
      <h2 className="-text-space"> {string("404")} </h2>
    </MainPage>;
  },
};
