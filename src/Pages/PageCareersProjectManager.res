open React

@react.component
let make = () => {
  <MainPage
    title="Software Project Manager at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Be a professional Software Project Manager at Divertise Asia">
    <PageHeader title="Careers" subtitle="Project Manager" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What are the requirements?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li>
            {string("Bachelors / University degree in related field")}
          </li>
          <li> {string("Having 1-3 years of relevant work experiences")} </li>
          <li> {string("Have a good working knowledge of project estimation techniques")} </li>
          <li> {string("Coordination and planning of project activities to ensure smooth execution")} </li>
          <li> {string("Must possess excellent communication skills in Thai and English")} </li>
          <li> {string("Strong communication skill, ability to perform formal communication and reporting, and lead meetings with creditability")} </li>
          <li> {string("Strong analytical skills and interpersonal skills, good in people management skill and team supervisory")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What will I be doing?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Ensure that project-lifecycle deliverables consistently completed to agreed budget and schedule constraints")} </li>
          <li>
            {string("Develop and manage a detailed project schedule and work plan")}
          </li>
          <li> {string("Work closely with your team to understand motivation drivers, morale and job contribution/satisfaction levels in order to enhance your team engagement")} </li>
          <li> {string("Coordination and planning of project activities to ensure smooth execution")} </li>
          <li> {string("Partner with leaders to evaluate tools, processes and workflows and introduce techniques and best practices to improve efficiency")} </li>
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
