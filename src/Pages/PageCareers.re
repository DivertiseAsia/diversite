open ReasonReact;

let component = ReasonReact.statelessComponent("PageCareers");
[@bs.module] external type1 : string = "../../../../public/images/position-dev.jpg";
[@bs.module] external type2 : string = "../../../../public/images/position-design.jpg";
[@bs.module] external type3 : string = "../../../../public/images/position-game.jpg";
[@bs.module] external type4 : string = "../../../../public/images/position-art.jpg";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
    <div className="section-header bg-gradient-color1"> 
      <div className="container py-5"> 
        <div className="row d-flex align-items-baseline">
          <h1 className="text-white pr-3 letter-spacing -text-uppercase -text-header-shadow"> {string("Creers")}</h1>
        </div>
      </div>
    </div>
    <div className="container"> 
      <div className="row py-5 d-block text-center -text-uppercase">
        <h3>{string("Positions at Divertise Asia")}</h3>
        <div className="row pt-5">
          <InternshipProgram iconType=Code title="DEVELOPER" imageURL=type1 href=Links.careers> </InternshipProgram>
          <InternshipProgram iconType=Pen title="DESIGN ENGINEER" imageURL=type2 href=Links.careers> </InternshipProgram>
        </div> 
      </div>
      <div className="row d-block text-center">
        <h3 className="-text-uppercase">{string("Internship Program")}</h3>
        <p className="col-md-10 col-sm-12 program-text-title">{string("We focus on finding creative ways to work with games and AI. You will get a chance to get your hands on game development and work closely with our friendly team of developers and designers.")}</p>
        <div className="row">
          <InternshipProgram iconType=Code title="GAMES & AI DEV" imageURL=type3 href=Links.careers className="image-background"> </InternshipProgram>
          <InternshipProgram iconType=Pen title="ART & DESIGN" imageURL=type4 href=Links.careers> </InternshipProgram>
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
      <h3 className="-text-uppercase">{string("Team Benefits")}</h3>
      <div className="row py-5 justify-content-center">
        <div className="col-6 col-md pb-3 team-benefits"> 
          <Icon iconType=Laptop />
          <h6 className="icon-title">{string("Personal Laptop")}</h6>
        </div>
        <div className="col-6 col-md pb-3 team-benefits">
          <Icon iconType=Clock />
          <h6 className="icon-title">{string("Flexible Working Time")}</h6>
        </div>
        <div className="col-6 col-md pb-3 team-benefits"> 
          <Icon iconType=Drink />
          <h6 className="icon-title">{string("Snacks & Drinks")}</h6>
        </div>
        <div className="col-6 col-md pb-3 team-benefits"> 
          <Icon iconType=Bag />
          <h6 className="icon-title">{string("2 weeks vacation per year")}</h6>
        </div>
        <div className="col-6 col-md pb-3 team-benefits"> 
          <Icon iconType=Game />
          <h6 className="icon-title">{string("PC, consoles, and VR games at office")}</h6>
          /* <h6 className="">{string("VR games at office")}</h6> */
        </div>
      </div>
    </div>
  </div>
  <div className="footer-title bg-gradient-color2">
    <p>{string("If you are interested in joining our team, just send your portfolio to")}
      <Link isExternal=(true) href="mailto:contact@divertise.asia" className="text-contact">{string("careers@divertise.asia")}</Link>
    </p>
    </div>
    </MainPage>;
  },
};
