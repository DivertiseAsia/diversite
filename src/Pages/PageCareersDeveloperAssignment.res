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
        <div id="assignment" className="d-flex flex-wrap">
          <div className="col-12 col-md-6">
            <h3> {string("Your Assignment")} </h3>
            <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
              <li> {string("Ask any questions within first 7 days of assignment ")} </li>
              <li> {string("Submit your GIT repository url within 14 days of assignment")} </li>
              <li> {string("Feel free to add any feature you want")} </li>
              <li> {string("Be ready to answer any question about your code and to edit it")} </li>
            </ul>
            <h3> {string("Requirements")} </h3>
            <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
              <li> {string("Host the project on a public git repository")} </li>
              <li> {string("Make the webpage and its components using Rescript")} </li>
              <li> {string("Show a header that contains \"Name: YourName\"")} </li>
              <li> {string("Show 9 random colored squares")} </li>
            </ul>
          </div>
          <div className="col-12 col-md-6">
            <h3> {string("Possible Output")} </h3>
            <ol className="ul-li-padding-none ul-li-dash p-4 pl-3 -lineheight-large">
              <img className="md-3" width="100%" src="/static/images/possible_output.png" />
            </ol>
          </div>
        </div>
      </div>
      <div className="text-center">
        <a href="mailto:careers@divertise.asia" className="btn"> {string("Submit")} </a>
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
