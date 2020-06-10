open ReasonReact;
open PortfolioImage;

let component = ReasonReact.statelessComponent("PortfolioItemRe");

type portfolioLinkType =
  | Default
  | DefaultInactive
  | Text
  | AppStore
  | GooglePlay
  | MiStore;

type portfolioLink = {
  href: string,
  caption: string,
  _type: portfolioLinkType,
};
type portfolioItem = {
  title: string,
  className: option(string),
  images: list(portfolioImage),
  links: list(portfolioLink),
  technologies: list(string),
  body: array(ReasonReact.reactElement),
};
[@bs.module]
external phoneportrait: string =
  "../../../../public/images/borders/port_phone-portrait.png";
[@bs.module]
external desktop: string =
  "../../../../public/images/borders/port_desktop.png";

[@react.component]
let make = (~id: option(string)=?, ~item: portfolioItem, _children) => {
  <div
    ?id
    className={
      "section-portfolio "
      ++ Js.Option.getWithDefault("section-portfolio-default", item.className)
    }>
    <div className="container">
      <div className="port_img-container row">
        {Belt.List.map(item.images, img =>
           <PortfolioImage key={img.src} item=img />
         )
         |> Belt.List.toArray
         |> ReasonReact.array}
      </div>
      <h2> {string(item.title)} </h2>
      <div className="row py-4">
        <div className="col-md-6 port_icon-container">
          {Belt.List.map(item.technologies, tech => <TechIcon key=tech tech />)
           |> Belt.List.toArray
           |> ReasonReact.array}
        </div>
        <div className="col-md-6 -text-right port_btn-container">
          {Belt.List.map(
             item.links,
             link => {
               let classNames =
                 switch (link._type) {
                 | Default => "btn-line-color1"
                 | DefaultInactive => "btn-line-color1 inactive"
                 | Text => "port_link_text"
                 | AppStore => "btn-app-store"
                 | GooglePlay => "btn-google-play"
                 | MiStore => "btn-mi-store"
                 };
               <Link
                 isExternal=true
                 target="_blank"
                 className={"port_btn btn " ++ classNames}
                 key={link.href}
                 href={link.href}>
                 {string(link.caption)}
               </Link>;
             },
           )
           |> Belt.List.toArray
           |> ReasonReact.array}
        </div>
      </div>
      <div className="port_texts"> ...{item.body} </div>
    </div>
  </div>;
};