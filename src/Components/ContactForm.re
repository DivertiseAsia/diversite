[@react.component]
let make = (~className: option(string)=?) => {
  <div
    className={
      "contactform "
      ++ Js.Option.getWithDefault("contactform-default", className)
    }>
    <InputText
      type_="text"
      placeholder="What should we call you?"
      inputLabel="Your Name"
    />
    <InputText
      type_="email"
      placeholder="Your Email"
      inputLabel="Your Email"
    />
    <InputText
      isTextarea=true
      inputLabel="Tell us a bit more"
      placeholder="Hi! I have a project I'd you to help with. (tell us a bit more)"
    />
  </div>;
};
