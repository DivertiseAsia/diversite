@react.component
let make = (~className: option<string>=?, ~title: string, ~subtitle: option<string>=?, ~time: option<string>=?) => {
  <div className={"section-header " ++ Js.Option.getWithDefault("", className)}>
    <div className="container">
      <div className="row d-flex align-items-baseline -text-uppercase">
        {title != "" ? <h1 className="text-white letter-spacing -text-header-shadow"> {React.string(title)} </h1> : <div className="empty"></div>}
        {switch subtitle {
        | None
        | Some("") => React.null
        | Some(x) =>
          <h2 className="text-white letter-spacing -text-header-shadow">
            {React.string(" - " ++ x)}
          </h2>
        }}
        {switch time {
        | None
        | Some("") => React.null
        | Some(x) =>
          <h3 className="text-white letter-spacing -text-header-shadow">
            {React.string(x)}
          </h3>
        }}
      </div>
    </div>
  </div>
}
