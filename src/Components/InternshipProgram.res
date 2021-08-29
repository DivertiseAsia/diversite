open React;
open Next;

@react.component
let make =
    (
      ~className: option<string>=?,
      ~title: string,
      ~imageURL: string,
      ~href: string,
      ~iconType: Icon.iconType,
    ) => {
  <div
    className={
      "col-md-6 col-xs-12 internship-program "
      ++ Js.Option.getWithDefault("internship-program-default", className)
    }>
    <Link href>
      <div className="program-list-container -border-radius -bg-color1">
        <div className="content-program">
          <div className="d-flex justify-content-center align-items-center">
            <Icon iconType />
            <h4> {string(title)} </h4>
          </div>
          <p className="read-details"> {string("Read details >")} </p>
        </div>
        <ImageBackground src=imageURL />
      </div>
    </Link>
  </div>;
};