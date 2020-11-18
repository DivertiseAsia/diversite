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
      /* Begin Mailchimp Signup Form */
      <div id="mc_embed_signup">
        <form
          action="https://divertise.us7.list-manage.com/subscribe/post?u=d87120d8b19a52a88623f1d7e&amp;id=bbc24adf32"
          method="post"
          id="mc-embedded-subscribe-form"
          name="mc-embedded-subscribe-form"
          className="validate"
          target="_blank">
          <div id="mc_embed_signup_scroll">
            <div className="indicates-required">
              <span className="asterisk"> {ReasonReact.string("*")} </span>
              {ReasonReact.string("indicates required")}
            </div>
            <div className="mc-field-group">
              <label>
                {ReasonReact.string("Email Address")}
                <span className="asterisk"> {ReasonReact.string("*")} </span>
              </label>
              <input
                type_="email"
                name="EMAIL"
                className="required email"
                id="mce-EMAIL"
              />
            </div>
            <div id="mce-responses" className="clear">
              <div
                className="response hidden-md-down hidden-lg-up"
                id="mce-error-response"
              />
              <div
                className="response hidden-md-down hidden-lg-up"
                id="mce-success-response"
              />
            </div>
            /* real people should not fill this in and expect good things - do not remove this or risk form bot signups */
            <div>
              <input
                type_="text"
                name="b_d87120d8b19a52a88623f1d7e_bbc24adf32"
              />
            </div>
            <div className="clear">
              <input
                type_="submit"
                value="Subscribe"
                name="subscribe"
                id="mc-embedded-subscribe"
                className="button"
              />
            </div>
          </div>
        </form>
      </div>
    </Popup>
    /* End mc_embed_signup */
    /* <form
         action="https://divertise.us7.list-manage.com/subscribe/post?u=d87120d8b19a52a88623f1d7e&amp;id=bbc24adf32"
         method="POST"
         className="downloadport-form">
         <input
           className="input-default"
           type_="email"
           placeholder="Your Email"
           name="EMAIL"
         />
         <button type_="submit" className="btn btn-solid-color1">
           {ReasonReact.string("Submit")}
         </button>
       </form> */
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
