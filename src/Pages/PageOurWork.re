open ReasonReact;
open PortfolioData;

[@react.component]
let make = () => {
  <MainPage className="page-ourwork">

      <div className="ourwork_section-header-content bg-gradient-color1">

          <div className="container page-ourwork_nav nav">
            /* <input type_="checkbox" />
               <div className="nav-icon nav-icon-arrow">
                 <h6> {string("Category")} </h6>
                 <Icon iconType=Icon.ArrowDown />
               </div>
               <div className="nav-container">
                 <h6> {string("Category")} </h6> */

              <h3
                className="text-white letter-spacing -text-uppercase -text-header-shadow">
                {string("Portfolio")}
              </h3>
              <a href=Links.ourwork_appsandplatforms>
                <span className="hidden-md-down">
                  {string("All Projects")}
                </span>
                <span className="hidden-lg-up"> {string("All")} </span>
              </a> /* TODO: onclick should change the class name of the div below to "port-all" */
              <a href=Links.ourwork_ai>
                <span className="hidden-md-down">
                  {string("AI Project")}
                </span>
                <span className="hidden-lg-up"> {string("AI")} </span>
              </a> /* TODO: onclick should change the class name of the div below to "port-ai" */
              <a href=Links.ourwork_websites>
                <span className="hidden-md-down">
                  {string("Apps & Platforms")}
                </span>
                <span className="hidden-lg-up"> {string("Apps")} </span>
              </a> /* TODO: onclick should change the class name of the div below to "port-app" */
              <a href=Links.ourwork_vr>
                <span className="hidden-md-down">
                  {string("Design Projects")}
                </span>
                <span className="hidden-lg-up"> {string("Design")} </span>
              </a> /* TODO: onclick should change the class name of the div below to "port-design" */
              <a href=Links.ourwork_games> {string("Others")} </a>
            </div>
        </div> /* TODO: onclick should change the class name of the div below to "port-others" */
        /* </div> */
      <div
        className="ourwork_section-header section-header bg-gradient-color1"
      />
      <div className="buffer" />
      <div className="downloadport-btn btn btn-line-color1">
        {string("Download Port")}
      </div> /* TODO: This should trigger a popup with an email field and a submit button. No need to add any other things or style it. I'll take care of those */
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
    </MainPage>; /* TODO: This div's classname should change according to the links above */
};
