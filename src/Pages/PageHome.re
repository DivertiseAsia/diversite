open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-home">
      <div className="hero">
        <div className="container">
          <h1>(string("Technical partner for startups in Asia"))</h1>
          <p>(string("specialize in Artificial Intelligence, VR, and other cutting-edge technologies.")) </p>
        </div>
      </div>
      <div className="section-ourgoal -text-center">
        <div className="container">
          <h3 className="pt-5">(string("Our goal is to be the technical partner for startups in Asia"))</h3>
          <p className="pt-5 pb-5">(string("especially those wanting to specialize in Artificial Intelligence, Games & VR, and other cutting-edge technologies."))</p>
          <div className="row"> 
            <div className="container"> 
            </div>
          </div>
        </div>
      </div>
      <FrontPageSection title="test" imageURL="logo.png" href=Links.home>(string("hello")) </FrontPageSection>
    </MainPage>;
  },
};
