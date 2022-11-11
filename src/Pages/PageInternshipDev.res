open React

@react.component
let make = () => {
  let (isPopupBuildOpen, setPopupBuildOpen) = React.useState(() => false)

  <MainPage
    title="Developer Internship at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Have your internship with Divertise Asia">
    <PageHeader title="Internship" subtitle="Developer" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row pt-5 d-block">
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
              {string("Tell us about what you need. We will get back to you within 1 working day")}
            </p>
          </div>
          <ContactForm />
        </Popup>
        <h3>
          <Icon className="mr-4" iconType=Icon.Pen /> {string("What are the requirements?")}
        </h3>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Strong communication skills")} </li>
          <li> {string("Minimum 2.50 GPA")} </li>
          <li> {string("Programming-related major / Logic background")} </li>
          <li> {string("Some experience with Python, OCaml, or other language")} </li>
          <li> {string("Skills in GIT would be helpful, but not required")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <h3> <Icon className="mr-4" iconType=Icon.Pen /> {string("What will I be doing?")} </h3>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Working in application/ai projects")} </li>
          <li> {string("Full Stack Development")} </li>
          <li> {string("Functional Programming")} </li>
          <li> {string("AWS")} </li>
          <li> {string("Learn new skills and implement them into your projects.")} </li>
          <li> {string("Work at our office at BTS Chidlom station Monday-Friday 10:00-18:00")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <h3> <Icon className="mr-4" iconType=Icon.Pen /> {string("When can I start?")} </h3>
        <div className="ul-li-padding-none p-4 pl-5">
          <p> {string("It is recommended to apply 1-2 months prior to start date.")} </p>
          <p> {string("You are required to intern for minimum of 2 months")} </p>
        </div>
      </div>
    </div>
    <div className="footer-intern bg-gradient-color2">
      <div className="container pt-5 pb-4">
        <div className="row d-block text-center text-white">
          <h2 className="text-white -text-uppercase"> {string("Ready To Apply?")} </h2>
          <div className="d-flex justify-content-center flex-wrap">
            <p> {string("Send us your resume and porfolio to ")} </p>
            <p>
              <a
                className="pr-1 pl-1 -font-weight-bold text-color1 -text-underline-none"
                target="_blank"
                href="mailto:careers@divertise.asia">
                {string("careers@divertise.asia")}
              </a>
            </p>
            <p> {string("and we'll get back to you soon!")} </p>
          </div>
          <p className="-text-small-title text-color1">
            {string(
              "*Please include your prefered start and end date of the internship in the email",
            )}
          </p>
        </div>
      </div>
    </div>
  </MainPage>
}
