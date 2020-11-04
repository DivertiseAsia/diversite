open ReasonReact;
open PortfolioData;
let component = ReasonReact.statelessComponent("PageOurWork");

let make = _children => {
  ...component,
  render: _self => {
    <MainPage className="page-ourwork">
      <div className="ourwork_section-header-content bg-gradient-color1">
        <div className="container align-items-baseline">
          <h1
            className="text-white letter-spacing -text-uppercase -text-header-shadow">
            {string("Our Work")}
          </h1>
        </div>
        <div className="container page-ourwork_nav nav">

            <input type_="checkbox" />
            <div className="nav-icon nav-icon-arrow">
              <h6> {string("Category")} </h6>
              <Icon iconType=ArrowDown />
            </div>
            <div className="nav-container">
              <a href=Links.ourwork_appsandplatforms>
                {string("All Project")}
              </a> /* TODO: onclick should change the class name of the div below to "port-all" */
              <a href=Links.ourwork_ai> {string("AI Projects")} </a> /* TODO: onclick should change the class name of the div below to "port-ai" */
              <a href=Links.ourwork_websites>
                {string("Apps & Platforms")}
              </a> /* TODO: onclick should change the class name of the div below to "port-app" */
              <a href=Links.ourwork_vr> {string("Design Projects")} </a> /* TODO: onclick should change the class name of the div below to "port-design" */
              <a href=Links.ourwork_games> {string("Others")} </a>
            </div>
          </div> /* TODO: onclick should change the class name of the div below to "port-others" */
      </div>
      <div
        className="ourwork_section-header section-header bg-gradient-color1"
      />
      <div className="buffer" />
      <div className="downloadport-btn"> {string("download portfolio")} </div> /* TODO: This should trigger a popup with an email field and a submit button. No need to add any other things or style it. I'll take care of those */
      <div>
        <PortfolioItem
          id="appsandplatforms"
          key="mintcrowd"
          item=mintcrowdPortfolio
        />
        <PortfolioItem key="adsoup" item=adsoupPortfolio />
        <PortfolioItem key="copanel" item=copanelPortfolio />
        <PortfolioItem key="eventcomet" item=eventcometPortfolio />
        <PortfolioItem id="ai" key="boneage" item=boneagePortfolio />
        <PortfolioItem id="vr" key="vr" item=vrPortfolio />
        <PortfolioItem id="websites" key="ketawa" item=ketawaPortfolio />
        <PortfolioItem key="willamailn" item=wilaamalinPortfolio />
        <PortfolioItem key="eastwest" item=eastwestPortfolio />
        <PortfolioItem id="games" key="kikii" item=kikiiPortfolio />
        <PortfolioItem key="micro" item=microgamesPortfolio />
      </div>
    </MainPage>;
  },
};
