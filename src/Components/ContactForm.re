[@react.component]
let make = (~className: option(string)=?) => {
  <div className="contactform-container">
    <form
      action="https://formspree.io/f/xdopdkdk"
      method="POST"
      className={
        "contactform "
        ++ Js.Option.getWithDefault("contactform-default", className)
      }>
      <InputText
        type_="text"
        placeholder="What should we call you?"
        inputLabel="Your Name"
        name="name"
        required=true
      />
      <InputText
        type_="email"
        placeholder="Your Email"
        inputLabel="Your Email"
        name="email"
        required=true
      />
      <InputText
        isTextarea=true
        inputLabel="Tell us a bit more"
        placeholder="Tell us a bit more about your project."
        name="content"
        required=true
      />
      <button type_="submit" className="btn btn-solid-color1">
        {ReasonReact.string("Submit")}
      </button>
    </form>
    <div className="contactform_email">
      <p> {ReasonReact.string("or email us at")} </p>
      <EmailPopover emailType=EmailPopover.EmailContact />
    </div>
  </div>;
};
