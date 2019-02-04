open Css;

let popupBackground =
  style([
    display(`flex),
    height(vh(100.)),
    width(vw(100.)),
    position(fixed),
    top(px(0)),
    left(px(0)),
    zIndex(-1000),
    visibility(hidden),
    flexDirection(column),
    justifyContent(center),
    alignItems(center),
    backgroundColor(rgba(0, 0, 0, 0.)),
    transition("background-color", ~duration=500),
  ]);

let popupBackgroundVisible = style([visibility(visible), zIndex(1000), backgroundColor(rgba(0, 0, 0, 0.25))]);

let popupContainer = style([backgroundColor(white)]);

let component = ReasonReact.statelessComponent("PopupRe");

let make = (~visible: bool, ~pressClose: ReactEvent.Mouse.t => unit, ~className: option(string)=?, children) => {
  ...component,
  render: _self =>
    <div
      className={
        "pop-up-background "
        ++ popupBackground
        ++ " "
        ++ (visible ? "pop-up-visible" : "pop-up-hidden")
        ++ " "
        ++ (visible ? popupBackgroundVisible : "")
        ++ " "
        ++ Js.Option.getWithDefault("popup-default", className)
      }
      onClick=pressClose>
      <div className={"pop-up-container popup-delete-offer " ++ popupContainer} onClick={e => ReactEvent.Mouse.stopPropagation(e)}>
        <div className="pop-up-body"> ...children </div>
      </div>
    </div>,
};
