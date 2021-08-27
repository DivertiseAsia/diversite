@react.component
let make = (~className: option<string>=?, ~onClick=?) => {
  <Next.Link href=Links.home>
    {React.string("Home")}
      <img
      className={
        "logo "
        ++ Js.Option.getWithDefault("logo-default logo-auth", className)
      }
      ?onClick
      src="public/static/images/logo.png"
    />
    <img
      className={
        "logo-small " ++ Js.Option.getWithDefault("logo-default", className)
      }
      ?onClick
      src="public/static/images/logo-small.png"
    />
  </Next.Link>;
};