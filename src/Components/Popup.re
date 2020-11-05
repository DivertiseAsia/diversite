[@react.component]
let make = (~isOpen:bool = true, ~closeOnBgClick=false, ~showX=true, ~closeFunc=()=>(), ~children) => {
  let popupClass = isOpen ? "popup-open" : "popup-closed";
  <div className=("popup-holder " ++ popupClass)>
    <div className="popup-backing" onClick=(closeOnBgClick ? (_) => closeFunc() : (_) => ()) />
    <div className="popup">
      {showX ? <div className="popup-x" onClick=(_ => closeFunc())>{ReasonReact.string("X")}</div> : ReasonReact.null}
      {children}
    </div>
  </div>
}