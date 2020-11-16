open ReasonReact;
type emailType =
  | EmailContact
  | EmailCareers;
type email = {
  emailType,
  emailIconType: Icon.iconType,
  emailAdress: string,
};
let mapEmail = email =>
  switch (email) {
  | EmailContact => {
      emailType: EmailContact,
      emailIconType: Icon.EmailContact,
      emailAdress: "contact@divertise.asia",
    }
  | EmailCareers => {
      emailType: EmailCareers,
      emailIconType: Icon.EmailCareers,
      emailAdress: "careers@divertise.asia",
    }
  };
[@react.component]
let make = (~className: option(string)=?, ~emailType) => {
  let thisEmail = mapEmail(emailType);
  let (isPopoverOpen, setPopoverOpen) = React.useState(() => false);
  let (isCopySuccess, setCopySuccess) = React.useState(() => false);
  let openFunc = () => setPopoverOpen(_ => true);
  let closeFunc = () => {
    setCopySuccess(_ => false);
    setPopoverOpen(_ => false);
  };
  let showCopySuccessMessage = () => setCopySuccess(_ => true);
  let showCopyFailMessage = () => ();
  let copyClick = toBeCopied => {
    Utils.copyToClipboard(toBeCopied)
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
    <Icon iconType={thisEmail.emailIconType} />
    <div
      className={
        "email_popover popover-default "
        ++ (isPopoverOpen ? "popover-open" : "popover-close")
      }>
      <Link isExternal=true href={"mailto:" ++ thisEmail.emailAdress}>
        {ReasonReact.string("Open mail app")}
      </Link>
      <div onClick={_ => copyClick(thisEmail.emailAdress)}>
        <div
          className={
            "copybtn_content copybtn_content-"
            ++ (isCopySuccess ? "hide" : "show")
          }>
          {ReasonReact.string("Copy")}
        </div>
        <div
          className={
            "copybtn_content copybtn_content-"
            ++ (isCopySuccess ? "show" : "hide")
          }>
          <Icon iconType=Icon.Check />
        </div>
      </div>
    </div>
  </div>;
};
