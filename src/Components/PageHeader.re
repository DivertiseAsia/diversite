open ReasonReact;

let component = ReasonReact.statelessComponent("PageHeader");

let make =
    (
      ~className: option(string)=?,
      ~title: string,
      ~subtitle: option(string)=?,
      _children
    ) => {
  ...component,
  render: _self => {
    <div className={"section-header " ++ Js.Option.getWithDefault("", className)}> 
      <div className="container py-5"> 
        <div className="row d-flex align-items-baseline -text-uppercase">
          <h1 className="text-white pr-3 letter-spacing -text-header-shadow"> {string(title)}</h1>
          {
            switch(subtitle) {
              | None | Some("") => ReasonReact.null
              | Some(x) => <h2 className="text-white letter-spacing -text-header-shadow">{string("-  " ++ x)}</h2>
            }
          }
        </div>
      </div>
    </div>;
  },
};
