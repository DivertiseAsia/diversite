@react.component
let make = (~className: option<string>=?) => {
  let (isPopoverOpen, setPopoverOpen) = React.useState(() => false)
  let (isCopySuccess, setCopySuccess) = React.useState(() => false)
  let openFunc = () => setPopoverOpen(_ => true)
  let closeFunc = () => {
    setCopySuccess(_ => false)
    setPopoverOpen(_ => false)
  }
  let showCopySuccessMessage = () => setCopySuccess(_ => true)
  let showCopyFailMessage = () => ()
  let copyClick = () => {
    open Js.Promise
    Utils.copyToClipboard("contact@divertise.asia")
    |> then_(_ => showCopySuccessMessage() |> resolve)
    |> catch(_ => showCopyFailMessage() |> resolve)
    |> ignore
  }

  <div
    className={"email email-contact " ++ Js.Option.getWithDefault("", className)}
    onMouseOver={_ => openFunc()}
    onMouseOut={_ => closeFunc()}>
    <Icon iconType=Icon.EmailContact />
    <div
      className={"email_popover popover-default " ++ (
        isPopoverOpen ? "popover-open" : "popover-close"
      )}>
      <a target="_blank" href="mailto:contact@divertise.asia"> {React.string("Open mail app")} </a>
      <div onClick={_ => copyClick()}>
        <div className={"copybtn_content copybtn_content-" ++ (isCopySuccess ? "hide" : "show")}>
          {React.string("Copy")}
        </div>
        <div className={"copybtn_content copybtn_content-" ++ (isCopySuccess ? "show" : "hide")}>
          <Icon iconType=Icon.Check />
        </div>
      </div>
    </div>
  </div>
}
