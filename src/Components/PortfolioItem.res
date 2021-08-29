open React;
open DataTypes.PortfolioItem;

let additional_classname = (category:category) => {
    "item-" ++ switch(category) {
    | All => "all"
    | AI => "ai"
    | AppPlatforms => "appsandplatforms"
    | Design => "design"
    | Other => "other"
    }
};

@react.component
let make = (~id: option<string>=?, ~className="", ~item: t) => {
  <div
    ?id
    className={
      "section-portfolio "
      ++ className ++ " "
      ++ Js.Option.getWithDefault("section-portfolio-default", item.className)
      ++ " " ++ (item.category |> List.map(additional_classname) |> List.fold_left((acc, s) => acc ++ " " ++ s, ""))
    }>
    <div className="container">
      <div className="port_img-container row">
        {Belt.List.map(item.images, img =>
           <PortfolioImage key={img.src} item=img />
         )
         |> Belt.List.toArray
         |> React.array}
      </div>
      <h2> {string(item.title)} </h2>
      <div className="row py-4">
        <div className="col-md-6 port_icon-container">
          {Belt.List.map(item.technologies, tech => <TechIcon key=tech tech />)
           |> Belt.List.toArray
           |> React.array}
        </div>
        <div className="col-md-6 -text-right port_btn-container">
          {Belt.List.map(
             item.links,
             link => {
               let classNames =
                 switch (link.category) {
                 | Default => "btn-line-color1"
                 | DefaultInactive => "btn-line-color1 inactive"
                 | Text => "port_link_text"
                 | AppStore => "btn-app-store"
                 | GooglePlay => "btn-google-play"
                 | MiStore => "btn-mi-store"
                 };
               <a
                 target="_blank"
                 className={"port_btn btn " ++ classNames}
                 key={link.href}
                 href={link.href}>
                 {string(link.caption)}
               </a>;
             },
           )
           |> Belt.List.toArray
           |> React.array}
        </div>
      </div>
      <div className="port_texts"> {React.array(item.body)} </div>
    </div>
  </div>;
};