open ReasonReact;

let component = ReasonReact.statelessComponent("PageInternship");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <h2 className="-text-space"> {string("INTERNSHIP")} </h2>
    </MainPage>;
  },
};
