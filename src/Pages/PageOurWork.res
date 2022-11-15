open React
open DataTypes.PortfolioItem
open PortfolioData
open Utils
 
@react.component
let make = (~selectedCategory: category) => {
  let (isPopupOpen, setPopupOpen) = React.useState(() => false)

  let items = portfolioDataList->Belt.List.map(categoryList => {
    if selectedCategory != All {
      categoryList.category->Belt.List.some(category => category == selectedCategory)
        ? <PortfolioItem key={categoryList.title} item={categoryList} />
        : React.null
    } else {
      <PortfolioItem key={categoryList.title} item={categoryList} />
    }
  })

  let portfolioCategoryLink = (category: category, text: string, tooltip: string) => {
    let selectedClass = category === selectedCategory ? "selected" : ""
    <Next.Link key=text href={Links.ourwork_link(category)}>
      <a href="#container" className={"port-filter " ++ selectedClass} onClick={_ => scrollTop()}>
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
    description="AI, Apps & Platforms, and Design items created by us">
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
      <p> {React.string("Please add your email. We will send you our portfolio.")} </p>
      <form action="https://formspree.io/f/mbjpklyn" method="POST" className="downloadport-form">
        <input className="input-default" type_="email" placeholder="Your Email" name="email" />
        <button type_="submit" className="btn btn-solid-color1"> {React.string("Submit")} </button>
      </form>
    </Popup>
    <div className={additional_classname}>
      {Belt.List.toArray(items)->React.array}
    </div>
  </MainPage>
}
