[@bs.module] external logo: string = "../../../../public/images/logo.png";
[@bs.module]
external logoSmall: string = "../../../../public/images/logo-small.png";

[@react.component]
let make = (~className: option(string)=?, ~onClick=?) => {
  <Link href=Links.home className="logo-link">
    <img
      className={
        "logo "
        ++ Js.Option.getWithDefault("logo-default logo-auth", className)
      }
      ?onClick
      src=logo
    />
    <img
      className={
        "logo-small " ++ Js.Option.getWithDefault("logo-default", className)
      }
      ?onClick
      src=logoSmall
    />
  </Link>;
};