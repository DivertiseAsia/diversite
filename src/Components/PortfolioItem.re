open ReasonReact;

let component = ReasonReact.statelessComponent("PortfolioItemRe");

type portfolioImageBorder =
  | PhonePortrait
  | PhoneLandscape
  | Desktop
  | Tablet
;

type portfolioImage = {
  src: string,
  border: portfolioImageBorder,
  className: option(string),
};
type portfolioLinkType = 
  | Default
  | AppStore
  | GooglePlay
  | MiStore
;

type portfolioLink = {
  href: string,
  caption: string,
  _type: portfolioLinkType,
}
type portfolioItem = {
  title: string,
  className: option(string),
  images: list(portfolioImage),
  links: list(portfolioLink),
  technologies: list(string),
  body: array(ReasonReact.reactElement),
};
[@bs.module] external phoneportrait : string = "../../../../public/images/borders/port_phone-portrait.png";
[@bs.module] external desktop : string = "../../../../public/images/borders/port_desktop.png";

let make =
    (
      ~item:portfolioItem,
    ) => {
  ...component,
  render: _self => {
    <div className={"section-portfolio " ++ Js.Option.getWithDefault("section-portfolio-default", item.className)}>
      <div className="container">
        <div className="port_img-container row">
          <ImageBackground className="port_img img-phone-portrait col-4" src=phoneportrait />
          <ImageBackground className="port_img img-desktop col-8" src=desktop />
        </div>
        <h2>(string(item.title))</h2>
        <div className="port_text content"> ...item.body </div>
        <p className="port_link-seemore">(string("Read More >"))</p>
      </div>
    </div>;
  },
};
