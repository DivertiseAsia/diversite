open React;

@react.component
let make = () => {
  <MainPage
    title="Designer at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Be a professional Designer at Divertise Asia"
  >
    <PageHeader
      title="Careers" subtitle="Designer" className="bg-gradient-color1 pt-5"
    />
    <div className="container">
      <div className="row pt-5 d-block">
        <h3>
          <Icon className="mr-4" iconType=Icon.Pen />
          {string("What are the requirements?")}
        </h3>
        <ul
          className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li>
            {string(
               "1-3 years experienced with visual designs (Preferably web/UI designs)",
             )}
          </li>
          <li> {string("Proficient with Photoshop and Illustrator")} </li>
          <li> {string("Keeping up with latest design trends")} </li>
          <li>
            {string("Enjoy learning and willing to take on challenging tasks")}
          </li>
          <li> {string("Good problem-solving skills")} </li>
          <li> {string("Presentation skill")} </li>
          <li> {string("Intermediate level of English or higher")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <h3>
          <Icon className="mr-4" iconType=Icon.Pen />
          {string("What will I be doing?")}
        </h3>
        <ul
          className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("UX/UI design for website and applications")} </li>
          <li>
            {string(
               "Wireframe development and create prototypes (Using Adobe XD, InVision etc.)",
             )}
          </li>
          <li> {string("Work closely with developers")} </li>
          <li> {string("Graphic design")} </li>
          <li> {string("Helping implement designs in HTML/CSS")} </li>
          <li>
            {string("Attend client meeting in both Thai and English")}
          </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <h3>
          <Icon className="mr-4" iconType=Icon.Pen />
          {string("When can I start?")}
        </h3>
        <div className="ul-li-padding-none p-4 pl-5">
          <p>
            {string(
               "It is recommended to apply 1-2 months prior to start date.",
             )}
          </p>
        </div>
      </div>
    </div>
    <div className="footer-intern bg-gradient-color2">
      <div className="container pt-5 pb-4">
        <div className="row d-block text-center text-white">
          <h2 className="text-white -text-uppercase">
            {string("Ready To Apply?")}
          </h2>
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
  </MainPage>;
};