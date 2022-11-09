@react.component
let make = (~className: option<string>=?, ~title: string, ~subtitle: option<string>=?) => {
  <div className={"section-header " ++ Js.Option.getWithDefault("", className)}>
    <div className="container">
      <div className="row d-flex align-items-baseline -text-uppercase">
        <h1 className="text-white letter-spacing -text-header-shadow"> {React.string(title)} </h1>
        {switch subtitle {
        | None
        | Some("") => React.null
        | Some(x) =>
          <h2 className="text-white letter-spacing -text-header-shadow">
            {React.string("-  " ++ x)}
          </h2>
        }}
      </div>
    </div>
  </div>
}
