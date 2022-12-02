open React

@react.component
let make = () => {
  <MainPage
    title="Designer Internship at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Have your internship with Divertise Asia">
    <PageHeader title="Internship" subtitle="Art & Design" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What are the requirements?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Strong communication skills")} </li>
          <li> {string("Minimum 2.50 GPA")} </li>
          <li> {string("Design-related major / Art and design background")} </li>
          <li>
            {string(
              "Experience with computer graphic software (ex. Adobe Photoshop, Adobe illustrator etc.)",
            )}
          </li>
          <li> {string("Some experience with 3D or 2D art")} </li>
          <li> {string("Skills in digital illustration is preferred, but not required")} </li>
          <li> {string("Portfolio is required")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What will I be doing?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Working on application/AI projects for UI/UX")} </li>
          <li> {string("Working in Adobe XD, Photoshop, and Illustrator.")} </li>
          <li> {string("Implementing designs in HTML/CSS")} </li>
          <li> {string("Hybrid work at BTS Chidlom station once/two times a week 10:00-18:00")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("When can I start?")} </h3>
        </div>
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
                href="mailto:careers@divertise.asia">
                {string("careers@divertise.asia")}
              </a>
            </p>
            <p> {string("and we'll get back to you soon!")} </p>
          </div>
          <p className="-text-small-title text-color1">
            {string(
              "*Please include your preferred start and end date of the internship in the email",
            )}
          </p>
        </div>
      </div>
    </div>
  </MainPage>
}
