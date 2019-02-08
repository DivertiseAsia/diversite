open ReasonReact;

let component = ReasonReact.statelessComponent("PageOurWork");
[@bs.module] external phoneportrait : string = "../../../../public/images/port_phone-portrait.png";
[@bs.module] external desktop : string = "../../../../public/images/port_desktop.png";
[@bs.module] external phonehorizon : string = "../../../../public/images/port_phone-horizontal.png";
[@bs.module] external tablet : string = "../../../../public/images/port_tablet-hotizontal.png";
[@bs.module] external ketawadesktop : string = "../../../../public/images/website-ketawa-d.jpg";
[@bs.module] external desktopstand : string = "../../../../public/images/port_desktop-stand.png";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-ourwork">
    <div className="ourwork_section-header-content bg-gradient-color1"> 
      <div className="container align-items-baseline">
        <h1 className="text-white letter-spacing -text-uppercase -text-header-shadow"> {string("Our Work")}</h1>
      </div>
      <div className="container page-ourwork_nav nav">
        <input type_="checkbox" />
        <div className="nav-icon nav-icon-arrow"> 
          <h6>(string("Applications & Platforms")) </h6>
          <Icon iconType=Code />
        </div>
        <div className="nav-container">
            <Link className="current" href="">(string("Applications & Platforms"))</Link>
            <Link href="">(string("Artificial Intelligence"))</Link>
            <Link href="">(string("Websites"))</Link>
            <Link href="">(string("Virtual Reality"))</Link>
            <Link href="">(string("Games"))</Link>
        </div> 
      </div>
    </div>
    <div className="ourwork_section-header section-header bg-gradient-color1">
    </div>
    <div className="buffer" />
    <div>
    <div className="section-portfolio">
    <div className="container">
      <div className="port_img-container row">
        <ImageBackground className="port_img img-phone-portrait col-4" src=phoneportrait />
        <div className="col-8">
          <div className="desktop-container">
            <div className="desktop">
              <div className="desktop-frame">
                <ImageBackground className="port_desktop-scroll scroll-long" src=ketawadesktop />
              </div>
              <div className="desktop-bottom-frame" />
            </div>
            <ImageBackground className="desktop-stand" src=desktopstand />
          </div>
        </div>
      </div>
      <h2>(string("Ketawa Pet Friendly Hotel Website"))</h2>
      <div className="row">
        <div className="col-md-8 port_icon-container">
          <TechIcon tech="python" />
          <TechIcon tech="html5" />
          <TechIcon tech="graphic design" />
          <div className="port_icon port_icon-color2"> <h6>(string("Graphic Designs"))</h6> </div>
        </div>
        <div className="col-md-4 -text-right">
          <Link className="" href="">(string("Visit Website >"))</Link>
        </div>
      </div>
      <div className="port_texts">
        <p>(string("Divertise Asia website concept is simplicity with a drop of fun and friendliness. The website is currently aimed at prospective employees. As such, we highlight our values and projects. It is coded in pure HTML and Javascript, however the CSS is a result of a SCSS file. The full source code and hosting is located on Github."))</p>
      </div>
    </div>
  </div>
      <div className="section-portfolio">
        <div className="container">
          <div className="port_img-container row">
            <ImageBackground className="port_img img-phone-portrait col-5 mr-5" src=phonehorizon />
            <ImageBackground className="port_img img-desktop col-6" src=tablet />
          </div>
          <h2>(string("Kiki On the Run"))</h2>
          <div className="row">
            <div className="col-md-8 port_icon-container">
              <div className="port_icon"> <Icon iconType=Code /> </div>
              <div className="port_icon port_icon-color2"> <h6>(string("Graphic Designs"))</h6> </div>
            </div>
            <div className="col-md-4 -text-right">
              <Link className=" btn btn-line-color1" href="">(string("Get the Game Now"))</Link>
            </div>
          </div>
          <div className="port_texts">
            <p>(string("Divertise Asia website concept is simplicity with a drop of fun and friendliness. The website is currently aimed at prospective employees. As such, we highlight our values and projects. It is coded in pure HTML and Javascript, however the CSS is a result of a SCSS file. The full source code and hosting is located on Github."))</p>
          </div>
        </div>
      </div>
      <div className="section-portfolio">
        <div className="container">
          <h2>(string("Chess Playing AI Project"))</h2>
          <div className="row">
            <div className="col-md-8 port_icon-container">
              <div className="port_icon"> <Icon iconType=Code /> </div>
              <div className="port_icon port_icon-color2"> <h6>(string("Graphic Designs"))</h6> </div>
            </div>
            <div className="col-md-4 -text-right">
              <Link className=" btn btn-line-color1" href="">(string("Read Our Paper"))</Link>
            </div>
          </div>
          <div className="port_texts">
            <p>(string("Divertise Asia website concept is simplicity with a drop of fun and friendliness. The website is currently aimed at prospective employees. As such, we highlight our values and projects. It is coded in pure HTML and Javascript, however the CSS is a result of a SCSS file. The full source code and hosting is located on Github."))</p>
          </div>
        </div>
      </div>
    </div>
    </MainPage>;
  },
};
