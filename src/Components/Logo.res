@react.component
let make = (~className: option<string>=?, ~onClick=?) => {
  <Next.Link href=Links.home>
    <img
      className={
        "logo "
        ++ Js.Option.getWithDefault("logo-default", className)
      }
      ?onClick
      src="static/images/logo.png"
    />
  </Next.Link>;
};