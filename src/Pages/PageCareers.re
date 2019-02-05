open ReasonReact;

let component = ReasonReact.statelessComponent("PageCareers");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <Logo />
      <h2 className="-text-space"> {string("Careers")} </h2>
    </MainPage>;
  },
};
