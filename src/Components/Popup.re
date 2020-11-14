[@react.component]
let make =
    (
      ~isOpen: bool=true,
      ~className: option(string)=?,
      ~hasCloseBtn=false,
      ~closeBtnText: option(string)=?,
      ~closeOnBgClick=false,
      ~showX=true,
      ~closeFunc=() => (),
      ~children,
    ) => {
  let popupClass = isOpen ? "popup-open" : "popup-closed";
  <div
    className={
      "popup-holder "
      ++ popupClass
      ++ " "
      ++ Js.Option.getWithDefault("popup-default", className)
    }>
    <div
      className="popup-backing"
      onClick={closeOnBgClick ? _ => closeFunc() : (_ => ())}
    />
    <div className="popup">
      {showX
         ? <div className="popup-x" onClick={_ => closeFunc()}>
             {ReasonReact.string({j|×|j})}
           </div>
         : ReasonReact.null}
      <div className="popup-content"> children </div>
      {hasCloseBtn
         ? <div className="btn popup-close-btn" onClick={_ => closeFunc()}>
             {ReasonReact.string(
                Js.Option.getWithDefault("Close Popup", closeBtnText),
              )}
           </div>
         : ReasonReact.null}
    </div>
  </div>;
};
