[@react.component]
let make = (~className: option(string)=?) => {
  let (isPopoverOpen, setPopoverOpen) = React.useState(() => false);
  let openFunc = () => setPopoverOpen(_ => true);
  let closeFunc = () => setPopoverOpen(_ => false);
  let copyToClipboard = () => {
    ();
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
      <div onClick={_ => copyToClipboard()}>
        <div> {ReasonReact.string("Copy")} </div>
        <textarea id="tobecopied">
          {ReasonReact.string("contact@divertise.asia")}
        </textarea>
      </div>
    </div>
  </div>;
};
