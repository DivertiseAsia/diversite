open ReasonReact;
open Page;
open Belt;
open Icon;

let component = ReasonReact.statelessComponent("InternshipProgram");

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
    <div className={"col-md-6 col-xs-12 intership-program " ++ Js.Option.getWithDefault("intership-program-default", className)}>
        <Link className="intership-list" href=(href)>
            <ImageBackground src=(imageURL)>
                <h4>(string(title))</h4>
                <div className="content"> ...children </div>
                <p className="read-details">(string("Read details >"))</p>
            </ImageBackground>
        </Link>
    </div>;
  },
};
