@react.component
let make = (~className: option<string>=?, ~prefixId: string="") => {
  <div className="contactform-container">
    <form
      action="https://formspree.io/f/xdopdkdk"
      method="POST"
      className={"contactform " ++ Js.Option.getWithDefault("contactform-default", className)}>
      <InputText
        type_="text" placeholder="What should we call you?" inputLabel="Your Name" name="name" prefixId=prefixId
      />
      <InputText type_="email" placeholder="Your Email" inputLabel="Your Email" name="email" prefixId=prefixId />
      <InputText
        isTextarea=true
        inputLabel="Tell us a bit more"
        placeholder="Hi! I have a project I'd like you to help with."
        name="content"
        prefixId=prefixId
      />
      <button type_="submit" className="btn btn-solid-color1"> {React.string("Submit")} </button>
    </form>
    <div className="contactform_email">
      <p> {React.string("or email us at")} </p> <EmailPopover />
    </div>
  </div>
}
