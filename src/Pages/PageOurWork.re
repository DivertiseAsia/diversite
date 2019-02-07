open ReasonReact;

let component = ReasonReact.statelessComponent("PageOurWork");
[@bs.module] external type1 : string = "../../../../public/images/position-dev.jpg";
[@bs.module] external type2 : string = "../../../../public/images/position-design.jpg";
[@bs.module] external type3 : string = "../../../../public/images/position-game.jpg";
[@bs.module] external type4 : string = "../../../../public/images/position-art.jpg";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
    <div className="section-header bg-gradient-color2"> 
      <div className="container py-5"> 
        <div className="row d-flex align-items-baseline">
          <h1 className="text-white pr-3 letter-spacing -text-uppercase -text-header-shadow"> {string("Our Work")}</h1>
        </div>
      </div>
    </div>
    
    </MainPage>;
  },
};
