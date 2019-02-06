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
      <div className="row">
        <div className="col-sm-6">
          <ImageBackground src=(imageURL)/>
        </div>
        <div className="col-sm-6 frontpage-section-texts pt-5"> 
          <h4>(string(title))</h4>
          <div className="content"> ...children </div>
          <Link className="btn" href=(href)>(string("See All Project")) </Link>
        </div>
      </div>
    </div>;
  },
};
