open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-home">
      <div className="hero">
        <h2>(string("Technical partner for startups in Asia"))</h2>
        <p>(string("specialize in Artificial Intelligence, VR, and other cutting-edge technologies.")) </p>
      </div>
      <FrontPageSection title="test" imageURL="logo.png" href=Links.home>(string("hello")) </FrontPageSection>
    </MainPage>;
  },
};
