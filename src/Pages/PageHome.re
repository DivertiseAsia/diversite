open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-home">
      <Logo />
      <h2 className="-text-space"> {string("Divertise Asia")} </h2>

      <FrontPageSection title="test" imageURL="logo.png" href=Links.home>(string("hello")) </FrontPageSection>
    </MainPage>;
  },
};
