open ReasonReact;
open PortfolioData;
let component = ReasonReact.statelessComponent("PageOurWork");

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
      <PortfolioItem key="adsoup" item=(adsoupPortfolio) />
      <PortfolioItem key="copanel" item=(copanelPortfolio) />
      <PortfolioItem key="eventcomet" item=(eventcometPortfolio) />
      <PortfolioItem key="mintcrowd" item=(mintcrowdPortfolio) />
      <PortfolioItem key="boneage" item=(boneagePortfolio) />
      <PortfolioItem key="gameaione" item=(gameaionePortfolio) />
      <PortfolioItem key="gameaitwo" item=(gameaitwoPortfolio) />
      <PortfolioItem key="vr" item=(vrPortfolio) />
      <PortfolioItem key="ketawa" item=(ketawaPortfolio) />
      <PortfolioItem key="willamailn" item=(willamalinPortfolio) />
      <PortfolioItem key="eastwest" item=(eastwestPortfolio) />
      <PortfolioItem key="kikii" item=(kikiiPortfolio) />
      <PortfolioItem key="micro" item=(microgamesPortfolio) />
    </div>
    </MainPage>;
  },
};
