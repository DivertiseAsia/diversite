open ReasonReact;
open Page;
open Belt;

let component = ReasonReact.statelessComponent("FrontPageSection");

let make =
    (
      ~className: option(string)=?,
      ~title: string,
      ~imageURL: string,
      ~href: string,
      children: array(ReasonReact.reactElement)
    ) => {
  ...component,
  render: _self => {
    <div className={"frontpage-section " ++ Js.Option.getWithDefault("frontpage-section-default", className)}>
      <ImageBackground src=(imageURL)/>
      <h3>(string(title))</h3>
      <div className="content"> ...children </div>
      <Link className="btn" href=(href)>(string("See More")) </Link>
    </div>;
  },
};
