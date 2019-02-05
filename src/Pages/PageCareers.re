open ReasonReact;
/* [@bs.module] external type1 : string = "../../../public/images/position-dev.png"; */
let component = ReasonReact.statelessComponent("PageCareers");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
    <div className="bg-gradient-color1"> 
      <div className="container pt-5 pb-4"> 
        <div className="row d-flex align-items-baseline">
          <h1 className="text-white pr-3"> {string("CAREERS")}</h1>
        </div>
      </div>
    </div>
    <div className="container"> 
      <div className="row pt-5 d-block text-center">
        <h3>{string("POSITIONS AT DIVERTISE ASIA")}</h3>
        <div className="row pt-5">
          <InternshipProgram title="DELVELOPER" imageURL="../images/position-dev.jpg" href=Links.careers> </InternshipProgram>
          <InternshipProgram title="DESIGN ENGINEER" imageURL="../images/position-design.jpg" href=Links.careers> </InternshipProgram>
        </div> 
      </div>
      <div className="row pt-5 d-block text-center">
      <h3>{string("INTERSHIP PROGRAM")}</h3>
      <p>{string("We focus on finding creative ways to work with games and AI. You will get a chance to get")}</p>
      <p>{string("your hands on game development and work closely with our friendly team of developers and designers.")}</p>
      <div className="row pt-5">
        <InternshipProgram title="DELVELOPER" imageURL="../images/position-dev.jpg" href=Links.careers> </InternshipProgram>
        <InternshipProgram title="DESIGN ENGINEER" imageURL="../images/position-design.jpg" href=Links.careers> </InternshipProgram>
      </div> 
    </div>
    </div>
    </MainPage>;
  },
};
