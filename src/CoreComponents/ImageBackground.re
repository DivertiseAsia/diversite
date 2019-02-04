let component = ReasonReact.statelessComponent("ImageBackground");

let make = (~src: string, ~className: option(string)=?, children) => {
  ...component,
  render: _self =>
    <div
      className={"image-background " ++ Js.Option.getWithDefault("image-background-default", className)}
      style={ReactDOMRe.Style.make(~backgroundImage="url('" ++ src ++ "')", ())}>
      ...children
    </div>,
};
