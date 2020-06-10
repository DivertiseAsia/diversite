[@bs.module]
external loading: string = "../../../../public/images/loading.gif";
let component = ReasonReact.statelessComponent("Loading");

let make = (~className: option(string)=?, ~onClick=?, _children) => {
  ...component,
  render: _self =>
    <img
      className={
        "loading " ++ Js.Option.getWithDefault("loading-default", className)
      }
      ?onClick
      src=loading
    />,
};