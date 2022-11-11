open React
open DataTypes.PortfolioItem
open PortfolioData

@react.component
let make = (~selectedCategory: category) => {
  let (isPopupPortOpen, setPopupPortOpen) = React.useState(() => false)
  let (isPopupBuildOpen, setPopupBuildOpen) = React.useState(() => false)

  let portfolioCategoryLink = (category: category, text: string, tooltip: string) => {
    let selectedClass = category === selectedCategory ? "selected" : ""
    <Next.Link key=text href={Links.ourwork_link(category)}>
      <a className={"port-filter " ++ selectedClass}>
        <span className="hidden-md-down"> {string(text)} </span>
        <span className="hidden-lg-up"> {string(tooltip)} </span>
      </a>
    </Next.Link>
  }

  let additional_classname =
    "port-" ++
    switch selectedCategory {
    | All => "all"
    | AI => "ai"
    | AppPlatforms => "appsandplatforms"
    | Design => "design"
    | Other => "other"
    }

  <MainPage
    className={"page-ourwork " ++ additional_classname}
    title="Work of Divertise Asia"
    keywords="portfolio, Artificial Intelligence, Design, Fullstack, API, Server"
    description="AI, Apps & Platforms, and Design items created by us"
    isPageOurWork=true>
    <div className="ourwork_section-header-content bg-gradient-color1">
      <div className="container page-ourwork_nav nav">
        /* <input type_="checkbox" />
           <div className="nav-icon nav-icon-arrow">
             <h6> {string("Category")} </h6>
             <Icon iconType=Icon.ArrowDown />
           </div>
           <div className="nav-container">
             <h6> {string("Category")} </h6> */
        <h3 className="text-white letter-spacing -text-uppercase -text-header-shadow">
          {string("Portfolio")}
        </h3>
        {portfolioCategoryLink(All, "All Projects", "All")}
        {portfolioCategoryLink(AI, "AI Project", "AI")}
        {portfolioCategoryLink(AppPlatforms, "Apps & Platforms", "Apps")}
        {portfolioCategoryLink(Design, "Design Projects", "Design")}
        {portfolioCategoryLink(Other, "Other Projects", "Others")}
      </div>
    </div>
    <div className="ourwork_section-header section-header bg-gradient-color1" />
    <div className="buffer" />
    <div
      className="downloadport-btn btn btn-line-color1"
      onClick={_ => setPopupPortOpen(_ => !isPopupPortOpen)}>
      {string("Download Port")}
    </div>
    <div
      className="buildyourideas-btn btn btn-line-color1 d-inline-block d-sm-none"
      onClick={_ => setPopupBuildOpen(_ => !isPopupBuildOpen)}>
      {string("Build Your Ideas")}
    </div>
    /* TODO: This should trigger a popup with an email field and a submit button. No need to add any other things or style it. I'll take care of those */
    <Popup
      isOpen=isPopupPortOpen
      className="downloadport-popup"
      hasCloseBtn=true
      closeBtnText="Not Now"
      closeOnBgClick=true
      showX=false
      closeFunc={() => setPopupPortOpen(_ => false)}>
      <p> {React.string("Please add your email. We will send you our portfolio.")} </p>
      <form action="https://formspree.io/f/mbjpklyn" method="POST" className="downloadport-form">
        <input className="input-default" type_="email" placeholder="Your Email" name="email" />
        <button type_="submit" className="btn btn-solid-color1"> {React.string("Submit")} </button>
      </form>
    </Popup>
    <Popup
      isOpen=isPopupBuildOpen
      closeOnBgClick=false
      closeFunc={() => setPopupBuildOpen(_ => false)}
      className="buildyouridea-popup">
      <div>
        <h3> {string("Build Your Ideas")} </h3>
        <p>
          {string(
            "Tell us about what you need. We will get back to you within 1 working day",
          )}
        </p>
      </div>
      <ContactForm />
    </Popup>
    <div>
      <PortfolioItem key="plateup" item=plateupPortfolio />
      <PortfolioItem key="mintcrowd" item=mintcrowdPortfolio />
      <PortfolioItem key="safemode" item=safemodePortfolio />
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
  </MainPage>
}
