open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");
[@bs.module] external ourgoal1 : string = "../../../../public/images/flexible.png";
[@bs.module] external ourgoal2 : string = "../../../../public/images/flexible.png";
[@bs.module] external ourgoal3 : string = "../../../../public/images/flexible.png";
[@bs.module] external homeapp : string = "../../../../public/images/home-app.png";
[@bs.module] external homeweb : string = "../../../../public/images/home-website.png";
[@bs.module] external techcon : string = "../../../../public/images/letushelp-tech.png";
[@bs.module] external optimize : string = "../../../../public/images/letushelp-optimize.png";
[@bs.module] external launch : string = "../../../../public/images/letushelp-launch.png";

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
      <div className="homepage_menu-bg" />
      <div className="section-ourgoal -text-center">
        <div className="container">
          <h3 className="pt-5">(string("Our goal is to be the technical partner for startups in Asia"))</h3>
          <p className="pt-5 pb-5">(string("especially those wanting to specialize in Artificial Intelligence, Games & VR, and other cutting-edge technologies."))</p>
          <div className="row flex-wrap justify-content-center">
            <div className="col-sm-4 pb-5 -text-center"> 
              <ImageBackground className="mb-3" src=ourgoal1 />
              <h6>(string("Applications & Platforms")) </h6>
            </div>
            <div className="col-sm-4 pb-5 -text-center"> 
              <ImageBackground className="mb-3" src=ourgoal2 />
              <h6>(string("Artificial Intelligence")) </h6>
            </div>
            <div className="col-sm-4 pb-5 -text-center"> 
              <ImageBackground className="mb-3" src=ourgoal3 />
              <h6>(string("Virtual Reality")) </h6>
            </div>
          </div>
        </div>
      </div>
      <div className="section-ourwork-header">
        <div className="container -text-center -text-uppercase pb-5 pt-5">
          <h3>(string("What We Cand Do"))</h3>           
        </div>
      </div>
      <div>
        <FrontPageSection title="Application and Platforms" imageURL=homeapp href=Links.home>(string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla porttitor massa id neque aliquam vestibulum morbi blandit. Accumsan tortor posuere ac ut consequat semper viverra nam. Ultricies mi eget mauris pharetra et ultrices. Nisl suscipit adipiscing bibendu")) </FrontPageSection>
        <FrontPageSection title="Websites" imageURL=homeweb href=Links.home>(string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla porttitor massa id neque aliquam vestibulum morbi blandit. Accumsan tortor posuere ac ut consequat semper viverra nam. Ultricies mi eget mauris pharetra et ultrices. Nisl suscipit adipiscing bibendu")) </FrontPageSection>
        <FrontPageSection title="Artifiial Intelligence" imageURL=ourgoal1 href=Links.home>(string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla porttitor massa id neque aliquam vestibulum morbi blandit. Accumsan tortor posuere ac ut consequat semper viverra nam. Ultricies mi eget mauris pharetra et ultrices. Nisl suscipit adipiscing bibendu")) </FrontPageSection>
        <FrontPageSection title="Virtual Reality" imageURL=homeapp href=Links.home>(string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla porttitor massa id neque aliquam vestibulum morbi blandit. Accumsan tortor posuere ac ut consequat semper viverra nam. Ultricies mi eget mauris pharetra et ultrices. Nisl suscipit adipiscing bibendu")) </FrontPageSection>
        <FrontPageSection title="Games" imageURL=homeweb href=Links.home>(string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nulla porttitor massa id neque aliquam vestibulum morbi blandit. Accumsan tortor posuere ac ut consequat semper viverra nam. Ultricies mi eget mauris pharetra et ultrices. Nisl suscipit adipiscing bibendu")) </FrontPageSection>
      </div>
      <div className="section-letushelp">
        <div className="container -text-center">
          <h3 className="-text-uppercase pb-5 pt-5">(string("Let Us Help You"))</h3>
          <div className="row"> 
            <div className="col-sm-4 letushelp_col"> 
              <div>
                <h5>(string("Tech Consultant"))</h5>
                <ImageBackground src=techcon />
                <p>(string("Something about we have tech specialist....."))</p>
              </div>
            </div>
            <div className="col-sm-4 letushelp_col"> 
              <div>
                <h5>(string("Launch your idea"))</h5>
                <ImageBackground src=launch />
                <p>(string("If you have a product idea but don't know where to begin, our team of developers will help make your idea come to live."))</p>
              </div>
            </div>
            <div className="col-sm-4 letushelp_col"> 
              <div>
                <h5>(string("Bussimess Optimization"))</h5>
                <ImageBackground src=optimize />
                <p>(string("Something about moving your business online to optimize it"))</p>
              </div>
            </div>
          </div>
        </div>
      </div>
    </MainPage>;
  },
};
