open ReasonReact;

let component = ReasonReact.statelessComponent("PageCareersDeveloper");
[@bs.module] external pen : string = "../../../../public/images/pen.png";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <PageHeader title="Careers" subtitle="Developer" className="bg-gradient-color1" />
      <div className="container"> 
          <div className="row pt-5 d-block">
            <h3><Icon className="mr-4" iconType=Pen />{string("What are the requirements?")}</h3>
              <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
                <li> {string("Intermediate English (verbal)")}</li>
                <li> {string("Basic programming knowledge (Python/C++ is preferred)")}</li>
                <li> {string("Proficiency in one of modern programming languages")}</li>
                <li> {string("IDE familiarity")}</li>
                <li> {string("Basic problem solving skills")}</li>
                <li> {string("Git/SVN knowledge is a plus but not required")}</li>
                <li> {string("Experiences with game engine is a plus, but not required")}</li>
                <li> {string("Can take criticism and responsive to feedback")}</li>
                <li> {string("Interest in latest trends")}</li>
              </ul>
          </div>
          <div className="row pt-5 d-block">
            <h3><Icon className="mr-4" iconType=Pen />{string("What will I be doing?")}</h3>
              <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
                <li> {string("Working in application/AI projects")}</li>
                <li> {string("Working in fullstack development from deployment on AWS, frontend in Reason, and backend in Python/Django")}</li>
                <li> {string("Work at our office at BTS Chidlom station Monday-Friday 10:00-18:00")}</li>
              </ul>
          </div>
          <div className="row pt-5 d-block">
          <h3><Icon className="mr-4" iconType=Pen />{string("When can I start?")}</h3>
            <div className="ul-li-padding-none p-4 pl-5">
              <p> {string("It is recommended to apply 1-2 months prior to start date.")}</p>
            </div>
        </div>
      </div>
      <div className="footer-intern bg-gradient-color2"> 
        <div className="container pt-5 pb-4"> 
          <div className="row d-block text-center text-white">
            <h2 className="text-white -text-uppercase">{string("Ready To Apply?")}</h2>
            <div className="d-flex justify-content-center flex-wrap">
              <p>{string("Send us your resume and porfolio to ")}</p>
              <p><Link className="pr-1 pl-1 -font-weight-bold text-color1 -text-underline-none" href="mailto:contact@divertise.asia"> {string("careers@divertise.asia")} </Link></p>
              <p>{string("and we'll get back to you soon!")}</p>
            </div>
          </div>
        </div>
      </div>
    </MainPage>;
  },
};
