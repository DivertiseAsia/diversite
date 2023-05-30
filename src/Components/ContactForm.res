@react.component
let make = (~className: option<string>=?, ~prefixId: string="") => {
  <div className="contactform-container">
    <form
      action="https://formspree.io/f/xdopdkdk"
      method="POST"
      className={"contactform " ++ Js.Option.getWithDefault("contactform-default", className)}>
      <InputText
        type_="text"
        placeholder="What should we call you?"
        inputLabel="Your Name"
        name="name"
        prefixId
        required=true
      />
      <InputText
        type_="email"
        placeholder="Your Email"
        inputLabel="Your Email"
        name="email"
        prefixId
        required=true
      />
      <InputText
        isTextarea=true
        inputLabel="What do you want to build?"
        placeholder="I really want .."
        name="content"
        prefixId
        required=true
      />
      <button type_="submit" className="btn btn-solid-color1"> {React.string("Submit")} </button>
    </form>
  </div>
}
