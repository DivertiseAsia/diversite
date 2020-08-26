[@bs.module]
external loading: string = "../../../../public/images/loading.gif";

[@react.component]
let make = (~className: option(string)=?, ~onClick=?) => {
  <img
    className={
      "loading " ++ Js.Option.getWithDefault("loading-default", className)
    }
    ?onClick
    src=loading
  />;
};