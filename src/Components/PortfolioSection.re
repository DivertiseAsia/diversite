open ReasonReact;
open Page;
open Belt;

let component = ReasonReact.statelessComponent("FrontPageSection");
[@bs.module] external phoneportrait : string = "../../../../public/images/port_phone-portrait.png";
[@bs.module] external desktop : string = "../../../../public/images/port_desktop.png";

let make =
    (
      ~className: option(string)=?,
      ~title: string,
      /* ~imageURL: string, */
      ~href: string,
      ~linkText: string,
      children: array(ReasonReact.reactElement)
    ) => {
  ...component,
  render: _self => {
    <div className={"section-portfolio " ++ Js.Option.getWithDefault("section-portfolio-default", className)}>
      <div className="container">
        <div className="port_img-container row">
          <ImageBackground className="port_img img-phone-portrait col-4" src=phoneportrait />
          <ImageBackground className="port_img img-desktop col-8" src=desktop />
        </div>
        <h2>(string(title))</h2>
        <div className="port_text content"> ...children </div>
        <p className="port_link-seemore">(string("Read More >"))</p>
      </div>
    </div>;
  },
};
