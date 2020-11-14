open ReasonReact;
open PortfolioData;

[@react.component]
let make = (~selectedCategory: PortfolioDataType.t) => {
  let (isPopupOpen, setPopupOpen) = React.useState(() => false);

  let portfolioCategoryLink =
      (category: PortfolioDataType.t, text: string, tooltip: string) => {
    <a
      href={Links.ourwork_link(category)}
      className={
        "port-filter " ++ (category === selectedCategory ? "selected" : "")
      }>
      <span className="hidden-md-down"> {string(text)} </span>
      <span className="hidden-lg-up"> {string(tooltip)} </span>
    </a>;
  };

  let additional_classname =
    "port-"
    ++ (
      switch (selectedCategory) {
      | All => "all"
      | AI => "ai"
      | AppPlatforms => "appsandplatforms"
      | Design => "design"
      | Other => "other"
      }
    );

  <MainPage className={"page-ourwork " ++ additional_classname}>
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
          {portfolioCategoryLink(PortfolioDataType.All, "All Projects", "All")}
          {portfolioCategoryLink(PortfolioDataType.AI, "AI Project", "AI")}
          {portfolioCategoryLink(
             PortfolioDataType.AppPlatforms,
             "Apps & Platforms",
             "Apps",
           )}
          {portfolioCategoryLink(
             PortfolioDataType.Design,
             "Design Projects",
             "Design",
           )}
          {portfolioCategoryLink(
             PortfolioDataType.Other,
             "Other Projects",
             "Others",
           )}
        </div>
    </div>
    /* </div> */
    <div
      className="ourwork_section-header section-header bg-gradient-color1"
    />
    <div className="buffer" />
    <div
      className="downloadport-btn btn btn-line-color1"
      onClick={_ => setPopupOpen(_ => !isPopupOpen)}>
      {string("Download Port")}
    </div> /* TODO: This should trigger a popup with an email field and a submit button. No need to add any other things or style it. I'll take care of those */
    <Popup
      isOpen=isPopupOpen
      className="downloadport-popup"
      hasCloseBtn=true
      closeBtnText="Not Now"
      closeOnBgClick=true
      showX=false
      closeFunc={() => setPopupOpen(_ => false)}>
      <p>
        {ReasonReact.string(
           "Please add your email. We will send you our portfolio.",
         )}
      </p>
      <form
        action="https://formspree.io/f/mbjpklyn"
        method="POST"
        className="downloadport-form">
        <input
          className="input-default"
          type_="email"
          placeholder="Your Email"
          name="email"
        />
        <button type_="submit" className="btn btn-solid-color1">
          {ReasonReact.string("Submit")}
        </button>
      </form>
    </Popup>
    <div>
      <PortfolioItem
        id="appsandplatforms"
        key="mintcrowd"
        item=mintcrowdPortfolio
      />
      <PortfolioItem key="safemode" item=safemodePortfolio />
      <PortfolioItem key="safemode" item=plateupPortfolio />
      <PortfolioItem key="safemode" item=ihapmPortfolio />
      <PortfolioItem key="adsoup" item=adsoupPortfolio />
      <PortfolioItem key="copanel" item=copanelPortfolio />
      <PortfolioItem key="eventcomet" item=eventcometPortfolio />
      <PortfolioItem key="boneage" item=boneagePortfolio />
      <PortfolioItem key="traitsignal" item=traitsignalPortfolio />
      <PortfolioItem key="vr" item=vrPortfolio />
      <PortfolioItem key="ketawa" item=ketawaPortfolio />
      <PortfolioItem key="alldaytattoo" item=alldaytattooPortfolio />
      <PortfolioItem key="halalblockvideo" item=halalblockvideoPortfolio />
      <PortfolioItem key="traitsignalvideo" item=traitsignalvideoPortfolio />
      <PortfolioItem key="adsoupvideo" item=adsoupvideoPortfolio />
      <PortfolioItem key="willamailn" item=wilaamalinPortfolio />
      <PortfolioItem key="eastwest" item=eastwestPortfolio />
      <PortfolioItem key="kikii" item=kikiiPortfolio />
      <PortfolioItem key="micro" item=microgamesPortfolio />
    </div>
  </MainPage>; /* TODO: This div's classname should change according to the links above */
};
