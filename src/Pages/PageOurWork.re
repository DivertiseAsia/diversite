open ReasonReact;

let component = ReasonReact.statelessComponent("PageOurWork");
[@bs.module] external phoneportrait : string = "../../../../public/images/port_phone-portrait.png";
[@bs.module] external desktop : string = "../../../../public/images/port_desktop.png";
[@bs.module] external iconhtml5 : string = "../../../../public/images/html5-logo.png";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-ourwork">
    <div className="section-header bg-gradient-color1"> 
      <div className="container py-5"> 
        <div className="row d-flex align-items-baseline">
          <h1 className="text-white pr-3 letter-spacing -text-uppercase -text-header-shadow"> {string("Our Work")}</h1>
        </div>
      </div>
    </div>
    <div>
      <PortfolioSection title="Ketawa Pet Friendly Hotel Website" href="http://www.ketawahotel.com/" linkText="Visit Website">(string("Some Texts")) </PortfolioSection>
      <div className="section-portfolio">
        <div className="container">
          <div className="port_img-container row">
            <ImageBackground className="port_img img-phone-portrait col-4" src=phoneportrait />
            <ImageBackground className="port_img img-desktop col-8" src=desktop />
          </div>
          <div className="row">
            <div className="col-md-8 port_icon-container">
              <div className="port_icon"> <Icon iconType=Code /> </div>
              <div className="port_icon"> <ImageBackground src=iconhtml5 /> </div>
              <div className="port_icon port_icon-color2"> <h6>(string("Graphic Designs"))</h6> </div>
            </div>
            <Link className="col-md-4 btn btn-line-color1" href="">(string("Read Our Paper"))</Link>
          </div>
          <h2>(string("Ketawa Pet Friendly Hotel Website"))</h2>
          <div className="port_texts">
            <p>(string("Divertise Asia website concept is simplicity with a drop of fun and friendliness. The website is currently aimed at prospective employees. As such, we highlight our values and projects. It is coded in pure HTML and Javascript, however the CSS is a result of a SCSS file. The full source code and hosting is located on Github."))</p>
          </div>
        </div>
      </div>
    </div>
    </MainPage>;
  },
};
