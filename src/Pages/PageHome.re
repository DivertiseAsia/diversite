open ReasonReact;

let component = ReasonReact.statelessComponent("PageHome");
[@bs.module] external ourgoal1 : string = "../../../../public/images/icon-platforms.png";
[@bs.module] external ourgoal2 : string = "../../../../public/images/icon-ai.png";
[@bs.module] external ourgoal3 : string = "../../../../public/images/icon-vr.png";
[@bs.module] external homeapp : string = "../../../../public/images/home-app.png";
[@bs.module] external homeweb : string = "../../../../public/images/home-website.png";
[@bs.module] external homeai : string = "../../../../public/images/home-ai-3.png";
[@bs.module] external homevr : string = "../../../../public/images/home-vr.png";
[@bs.module] external homegame : string = "../../../../public/images/home-game.png";
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
          <p className="pt-3 pb-5">(string("especially those wanting to specialize in Artificial Intelligence, Games & VR, and other cutting-edge technologies."))</p>
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
          <h3>(string("What We Create"))</h3>           
        </div>
      </div>
      <div>
        <FrontPageSection title="Application and Platforms" imageURL=homeapp href=Links.ourwork_appsandplatforms>
          (string("We create entire platforms and services from the ground up. These platforms typically live in a combination of places from app stores to the cloud."))
        </FrontPageSection>
        <FrontPageSection title="Artificial Intelligence" imageURL=homeai href=Links.ourwork_ai>
          (string("Newer applications and services should always be considering AI into their product. Everyone at Divertise Asia learns how to use AI and we make sure we offer it to everyone we work with."))
        </FrontPageSection>
        <FrontPageSection title="Websites" imageURL=homeweb href=Links.ourwork_websites>
          (string("The world runs on the web and we can produce any website needed for it. We aim to create a balance between user content management and speed of development.")) 
        </FrontPageSection>
        <FrontPageSection title="Virtual Reality" imageURL=homevr href=Links.ourwork_vr>
          (string("Creating applications in VR/AR will be one of the next big things. We are looking for ways to be at the forefront of the technology and have partnered with other companies in Asia to bring VR applications to life."))
        </FrontPageSection>
        <FrontPageSection title="Games" imageURL=homegame href=Links.ourwork_games>
          (string("We love bringing more fun into the world! We have made two of our own games and occasionally have internal game jams"))
        </FrontPageSection>
      </div>
      <div className="section-letushelp">
        <div className="container -text-center">
          <h3 className="-text-uppercase pb-5 pt-5">(string("Let Us Help You"))</h3>
          <div className="row"> 
            <div className="col-sm-12 col-md-4 letushelp_col"> 
              <div>
                <h5>(string("Tech Consultant"))</h5>
                <ImageBackground src=techcon />
                <p>(string("There are a lot of options with technology, we will work with you to help you choose the best way forward"))</p>
              </div>
            </div>
            <div className="col-sm-12 col-md-4 letushelp_col"> 
              <div>
                <h5>(string("Launch your idea"))</h5>
                <ImageBackground src=optimize />
                <p>(string("If you have a product idea but don't know where to begin, our team of developers will help make your idea come to live."))</p>
              </div>
            </div>
            <div className="col-sm-12 col-md-4 letushelp_col"> 
              <div>
                <h5>(string("Business Optimization"))</h5>
                <ImageBackground src=launch />
                <p>(string("We work with you to bring technology to the parts of your business that will have the most impact "))</p>
              </div>
            </div>
          </div>
        </div>
      </div>
    </MainPage>;
  },
};
