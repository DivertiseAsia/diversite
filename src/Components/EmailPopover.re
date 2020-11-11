[@react.component]
let make = (~className: option(string)=?) => {
  let (isPopoverOpen, setPopoverOpen) = React.useState(() => false);
  let (isCopied, setCopied) = React.useState(() => false);
  let (isCopySuccess, setCopySuccess) = React.useState(() => true);
  let openFunc = () => setPopoverOpen(_ => true);
  let closeFunc = () => setPopoverOpen(_ => false);
  let showCopySuccessMessage = () => ();
  let showCopyFailMessage = () => ();
  let copyClick = () => {
    setCopied(_ => true);
    Utils.copyToClipboard("contact@divertise.asia")
    |> Js.Promise.(then_(_ => showCopySuccessMessage() |> resolve))
    |> Js.Promise.(catch(_ => showCopyFailMessage() |> resolve))
    |> ignore;
  };

  <div
    className={
      "email email-contact " ++ Js.Option.getWithDefault("", className)
    }
    onMouseOver={_ => openFunc()}
    onMouseOut={_ => closeFunc()}>
    <Icon iconType=Icon.EmailContact />
    <div
      className={
        "email_popover popover-default "
        ++ (isPopoverOpen ? "popover-open" : "popover-close")
      }>
      <Link isExternal=true href="mailto:contact@divertise.asia">
        {ReasonReact.string("Open mail app")}
      </Link>
      <div onClick={_ => copyClick()}>
        <div> {ReasonReact.string("Copy")} </div>
      </div>
    </div>
  </div>;
};
