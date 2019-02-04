open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <Logo />
      <h2 className="-text-space"> {string("Divertise Asia")} </h2>
    </MainPage>;
  },
};
