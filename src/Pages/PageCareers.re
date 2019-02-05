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
      <div className="row py-5 d-block text-center">
        <h3>{string("POSITIONS AT DIVERTISE ASIA")}</h3>
        <div className="row pt-5">
          <InternshipProgram title="DELVELOPER" imageURL="../images/position-dev.jpg" href=Links.careers> </InternshipProgram>
          <InternshipProgram title="DESIGN ENGINEER" imageURL="../images/position-design.jpg" href=Links.careers> </InternshipProgram>
        </div> 
      </div>
      <div className="row d-block text-center">
        <h3>{string("INTERSHIP PROGRAM")}</h3>
        <p>{string("We focus on finding creative ways to work with games and AI. You will get a chance to get")}</p>
        <p>{string("your hands on game development and work closely with our friendly team of developers and designers.")}</p>
        <div className="row">
          <InternshipProgram title="GAMES & AI DEV" imageURL="../images/position-dev.jpg" href=Links.careers> </InternshipProgram>
          <InternshipProgram title="ART & DESIGN" imageURL="../images/position-design.jpg" href=Links.careers> </InternshipProgram>
        </div> 
      </div>
    </div>
    <div className="-bg-grey mt-5">
      <div className="container pt-5 text-center">
        <h3 className="-text-uppercase">{string("Who are we looking for ?")}</h3>
        <div className="row py-5">
          <div className="col-md-4 col-xs-12 pb-3"> 
            <h4>{string("Flexible")}</h4>
            <p>{ReasonReact.string({j| Our core work hours make it easy for your schdule to fit your lifestyle. We’re flexible so you can be too. |j})}</p>
          </div>
          <div className="col-md-4 col-xs-12  pb-3"> 
            <h4>{string("Open Minded")}</h4>
            <p>{ReasonReact.string({j| There’s always more than one way to do something. We’re always open to ideas. |j})}</p>
          </div>
          <div className="col-md-4 col-xs-12  pb-3"> 
            <h4>{string("Love Learning")}</h4>
            <p>{ReasonReact.string({j| Do you like learning? We do! Here at Divertise we like to keep up with the latest tech. |j})}</p>
          </div>
        </div>
      </div>
    </div>
    <div className="-bg-color1 ">
    <div className="container pt-5 text-center looking-for">
      <h3 className="-text-uppercase">{string("TEAM BENEFITS")}</h3>
      <div className="row py-5">
        <div className="col pb-3 col-xs-6"> 
          <Icon iconType=Laptop />
          <h6 className="pt-3">{string("Personal Laptop")}</h6>
        </div>
        <div className="col pb-3 col-xs-6">
          <Icon iconType=Clock />
          <h6 className="pt-3">{string("Flexible")}</h6>
          <h6 className="">{string("Working Time")}</h6>
        </div>
        <div className="col pb-3 col-xs-6"> 
          <Icon iconType=Drink />
          <h6 className="pt-3">{string("Snacks & Drinks")}</h6>
        </div>
        <div className="col pb-3 col-xs-6"> 
          <Icon iconType=Bag />
          <h6 className="pt-3">{string("2 weeks vacation")}</h6>
          <h6 className="">{string("per year")}</h6>
        </div>
        <div className="col pb-3 col-xs-6"> 
          <Icon iconType=Game />
          <h6 className="pt-3">{string("PC, consoles, and")}</h6>
          <h6 className="">{string("VR games at office")}</h6>
        </div>
      </div>
    </div>
  </div>
  <div className="footer-title bg-gradient-color2">
    <p>{string("If you are interested in joining our team, just send your portfolio to")}</p>
    <p className="text-contact"><Link isExternal=(true) href="mailto:contact@divertise.asia">{string("careers@divertise.asia")}</Link> </p>
  </div>
    </MainPage>;
  },
};
