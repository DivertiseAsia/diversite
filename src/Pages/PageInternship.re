open ReasonReact;

let component = ReasonReact.statelessComponent("PageInternship");
[@bs.module] external pen : string = "../../../../public/images/pen.png";

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <div className="bg-gradient-color1"> 
        <div className="container pt-5 pb-4"> 
          <div className="row d-flex align-items-baseline">
            <h1 className="text-white pr-3"> {string("INTERNSHIP")}</h1>
            <h2 className="text-white">{string("-  ART & DESIGN")}</h2>
          </div>
        </div>
      </div>
      <div className="container"> 
          <div className="row pt-5 d-block">
            <h3><Icon className="mr-2" iconType=Pen />{string("What are the requirements?")}</h3>
              <ul className="p-4 -lineheight-large">
                <li> {string("- Thai citizen")}</li>
                <li> {string("- Strong communication skills")}</li>
                <li> {string("- Minimum 2.50 GPA")}</li>
                <li> {string("- Design-related major / Art and design background")}</li>
                <li> {string("- Experience with computer graphic software (ex. Adobe Photoshop, Adobe illustrator etc.)")}</li>
                <li> {string("- Some experience with 3D or 2D art")}</li>
                <li> {string("- Skills in digital illustration is prefered, but not required")}</li>
                <li> {string("- Portfolio is required")}</li>
              </ul>
          </div>
          <div className="row pt-5 d-block">
            <h3><Icon className="mr-2" iconType=Pen />{string("What will I be doing?")}</h3>
              <ul className="p-4 -lineheight-large">
                <li> {string("- Working in game/ai projects")}</li>
                <li> {string("- Learn new skills and implement them into your projects.")}</li>
                <li> {string("- Work at our office at BTS Chidlom station Monday-Friday 10:00-8:00")}</li>
                <li> {string("- Hangout or play games together!")}</li>
                <li> {string("- Experience with computer graphic software (ex. Adobe Photoshop, Adobe illustrator etc.)")}</li>
                <li> {string("- Some experience with 3D or 2D art")}</li>
                <li> {string("- Skills in digital illustration is prefered, but not required")}</li>
                <li> {string("- Portfolio is required")}</li>
              </ul>
          </div>
          <div className="row pt-5 d-block">
          <h3><Icon className="mr-2" iconType=Pen />{string("When can I start?")}</h3>
            <ul className="p-4">
              <p> {string("It is recomended to apply 1-2 months prior to start date.")}</p>
              <p> {string("You are required to apply for minimum of 2 months")}</p>
            </ul>
        </div>
      </div>
      <div className="bg-gradient-color2"> 
        <div className="container pt-5 pb-4"> 
          <div className="row d-block text-center text-white">
            <h2 className="text-white">{string("READY TO APPLY?")}</h2>
            <div className="d-flex justify-content-center flex-wrap">
              <p>{string("Send us your resume and porfolio to ")}</p>
              <p><a className="pr-1 pl-1 -font-weight-bold text-color1 -text-underline-none" href="contact@divertise.asia"> {string("careers@divertise.asia")} </a></p>
              <p>{string("and we'll get back to you soon!")}</p>
            </div>
            <p className="-text-small-title text-color1">{string("*Please include your prefered start - end date of the internship in the email")}</p>
          </div>
        </div>
      </div>
    </MainPage>;
  },
};
