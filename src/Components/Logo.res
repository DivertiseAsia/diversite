open React

@react.component
let make = (~className: option<string>=?, ~onClick=?, ~is404: option<bool>=?) => {
  <Next.Link href=Links.home>
    <a className="link logo-link">
      <img
        className={"logo " ++ Js.Option.getWithDefault("logo-default", className)}
        ?onClick
        src="/static/images/logo.png" />
      {Js.Option.getWithDefault(false, is404) ? <h2 className="go-home"> {string("Go Home")} </h2> : React.null}
    </a>
  </Next.Link>
}
