open React

@react.component
let make = () => {
  <MainPage
    title="Careers at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Join our team">
    <PageHeader title="Careers" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row py-5 d-block text-center -text-uppercase">
        <h3> {string("Positions at Divertise Asia")} </h3>
        <div className="row pt-5">
          <InternshipProgram
            iconType=Icon.Code
            title="Developer"
            imageURL="/static/images/position-dev.jpg"
            href=Links.careersdeveloper
          />
          <InternshipProgram
            iconType=Icon.Pen
            title="Design Engineer"
            imageURL="/static/images/position-design.jpg"
            href=Links.careersdesigner
          />
        </div>
      </div>
      <div className="row d-block text-center">
        <h3 className="-text-uppercase"> {string("Internship Program")} </h3>
        <p className="col-md-10 col-sm-12 program-text-title">
          {string(
            "You will get a chance to get your hands on application development and work closely with our friendly team.",
          )}
        </p>
        <div className="row -text-uppercase">
          <InternshipProgram
            iconType=Icon.Code
            title="App & Ai Dev"
            imageURL="/static/images/position-game.jpg"
            href=Links.internshipdeveloper
            className="image-background"
          />
          <InternshipProgram
            iconType=Icon.Pen
            title="Art & Design"
            imageURL="/static/images/position-art.jpg"
            href=Links.internshipdesign
          />
        </div>
      </div>
    </div>
    <div className="-bg-grey mt-5">
      <div className="container pt-5 text-center">
        <h3 className="-text-uppercase"> {string("Who are we looking for ?")} </h3>
        <div className="row py-5 career_lookingfor">
          <div className="col-md-4 col-xs-12 pb-3">
            <ImageBackground className=" " src="/static/images/flexible.png" />
            <h4> {string("Flexible")} </h4>
            <p>
              {React.string(`Our core work hours make it easy for your schdule to fit your lifestyle. We're flexible so you can be too.`)}
            </p>
          </div>
          <div className="col-md-4 col-xs-12  pb-3">
            <ImageBackground className=" " src="/static/images/lovelearning.png" />
            <h4> {string("Open Minded")} </h4>
            <p>
              {React.string(`There's always more than one way to do something. We're always open to ideas.`)}
            </p>
          </div>
          <div className="col-md-4 col-xs-12  pb-3">
            <ImageBackground className=" " src="/static/images/openminded.png" />
            <h4> {string("Love Learning")} </h4>
            <p>
              {React.string(`Do you like learning? We do! Here at Divertise we like to keep up with the latest tech.`)}
            </p>
          </div>
        </div>
      </div>
    </div>
    <div className="-bg-color1 ">
      <div className="container pt-5 text-center looking-for">
        <h3 className="-text-uppercase"> {string("Team Benefits")} </h3>
        <div className="row py-5 justify-content-center">
          <div className="col-6 col-md pb-3 team-benefits">
            <Icon iconType=Icon.Laptop />
            <h6 className="icon-title"> {string("Personal Laptop")} </h6>
          </div>
          <div className="col-6 col-md pb-3 team-benefits">
            <Icon iconType=Icon.Clock />
            <h6 className="icon-title"> {string("Flexible Working Time")} </h6>
          </div>
          <div className="col-6 col-md pb-3 team-benefits">
            <Icon iconType=Icon.Drink />
            <h6 className="icon-title"> {string("Snacks & Drinks")} </h6>
          </div>
          <div className="col-6 col-md pb-3 team-benefits">
            <Icon iconType=Icon.Bag />
            <h6 className="icon-title"> {string("2 weeks vacation per year")} </h6>
          </div>
          <div className="col-6 col-md pb-3 team-benefits">
            <Icon iconType=Icon.Game />
            <h6 className="icon-title"> {string("PC, consoles, and VR games at office")} </h6>
          </div>
        </div>
      </div>
    </div>
    <div className="footer-title bg-gradient-color2">
      <p>
        {string("If you are interested in joining our team, just send your portfolio to")}
        <a target="_blank" href="mailto:contact@divertise.asia" className="text-contact">
          {string("careers@divertise.asia")}
        </a>
      </p>
    </div>
  </MainPage>
}
