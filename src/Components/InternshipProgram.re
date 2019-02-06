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
      ~iconType: iconType,
      children: array(ReasonReact.reactElement)
    ) => {
  ...component,
  render: _self => {
    <div className={"col-md-6 col-xs-12 internship-program " ++ Js.Option.getWithDefault("internship-program-default", className)}>
        <Link className="internship-list" href=(href)>
            <div className="program-list-container -border-radius -bg-color1">
                <div className="content-program">
                    <div className="d-flex justify-content-center align-items-center">
                        <Icon iconType=(iconType) />
                        <h4>(string(title))</h4>
                    </div>
                    <p className="read-details">(string("Read details >"))</p>
                </div>
                <ImageBackground src=(imageURL)>
                </ImageBackground>
            </div>
        </Link>
    </div>;
  },
};
