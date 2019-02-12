open ReasonReact;
open PortfolioItem;

let component = ReasonReact.statelessComponent("PageOurWork");
[@bs.module] external ketawadesktop : string = "../../../../public/projects/website-ketawa-d.jpg";

let ketawaPortfolio:portfolioItem = {
  title: "Ketawa Pet Friendly Hotel Website",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Graphic Design", "html5", "python"],
  body: ([<div>(string("Some body text"))</div>] |> Belt.List.toArray),
}
let kikiiPortfolio:portfolioItem = {
  title: "Kikii on the Run",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhoneLandscape,
      className: Some("col-5")
    },
    {
      src: ketawadesktop,
      border:Tablet,
      className: Some("col-7")
    }
  ],
  links: [],
  technologies: ["Graphic Design"],
  body: ([<div>(string("Some body text"))</div>] |> Belt.List.toArray),
}
let microgamesPortfolio:portfolioItem = {
  title: "Microgames",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    }
  ],
  links: [],
  technologies: ["Graphic Design"],
  body: ([<div>(string("Some body text"))</div>] |> Belt.List.toArray),
}
let aiPortfolio:portfolioItem = {
  title: "Chess Playing AI",
  className: None,
  images: [],
  links: [],
  technologies: ["Graphic Design"],
  body: ([<div>(string("Some body text"))</div>] |> Belt.List.toArray),
}

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-ourwork">
    <PageHeader title="Our Works" className="bg-gradient-color1">
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
    </ PageHeader>
    <div className="buffer" />
    <div>
    <PortfolioItem item=(ketawaPortfolio) />
    <PortfolioItem item=(kikiiPortfolio) />
    <PortfolioItem item=(microgamesPortfolio) />
    <PortfolioItem item=(aiPortfolio) />
    </div>
    </MainPage>;
  },
};
