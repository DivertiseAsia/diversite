open React

@react.component
let make = () => {
  let (isPopupBuildOpen, setPopupBuildOpen) = React.useState(() => false)

  <MainPage title="404" description="Not found on Divertise Asia" keywords="">
    <div
      className="buildyourideas-btn btn btn-line-color1 d-inline-block d-sm-none"
      onClick={_ => setPopupBuildOpen(_ => !isPopupBuildOpen)}>
      {string("Build Your Ideas")}
    </div>
    <Popup
      isOpen=isPopupBuildOpen
      closeOnBgClick=false
      closeFunc={() => setPopupBuildOpen(_ => false)}
      className="buildyouridea-popup">
      <div>
        <h3> {string("Build Your Ideas")} </h3>
        <p>
          {string(
            "Tell us about what you need. We will get back to you within 1 working day",
          )}
        </p>
      </div>
      <ContactForm />
    </Popup>
    <Logo /> <h2 className="-text-space"> {string("404")} </h2>
  </MainPage>
}
