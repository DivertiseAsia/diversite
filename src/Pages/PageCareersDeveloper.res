open React

@react.component
let make = () => {
  <MainPage
    title="Developer at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Be a full-stack developer at Divertise Asia">
    <PageHeader title="Careers" subtitle="Developer" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What are the requirements?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Intermediate English (verbal)")} </li>
          <li> {string("Basic programming knowledge (Python/ReasonML is preferred)")} </li>
          <li> {string("Proficiency in one of modern programming languages")} </li>
          <li> {string("IDE familiarity")} </li>
          <li> {string("Basic problem solving skills")} </li>
          <li> {string("Git/SVN knowledge is a plus but not required")} </li>
          <li> {string("Can take criticism and responsive to feedback")} </li>
          <li> {string("Interest in latest trends")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What will I be doing?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Working in application/AI projects")} </li>
          <li>
            {string(
              "Working in fullstack development from deployment on AWS, frontend in Reason, and backend in Python/Django",
            )}
          </li>
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
        </div>
      </div>
    </div>
  </MainPage>
}
