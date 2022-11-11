open React

%%raw(`
import dynamic from "next/dynamic";

const Carousel = dynamic(() => import("../Components/Carousel.mjs").then(mod => mod.make), {
  ssr: false,
});
;
`)

@react.component
let make = () => {
  let carousel = %raw(`Carousel`)

  <MainPage
    className="page-home"
    title="Get Launched with Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Realize your technical project with Divertise Asia as your partner"
    isPageHome=true>
    {React.createElement(carousel, Js.Dict.empty())}
    <div className="homepage_menu-bg" />
    <div className="section-ourgoal -text-center">
      <div className="container">
        <h3 className="pt-5">
          {string("Our goal is to be the technical partner for startups in Asia")}
        </h3>
        <p className="pt-3 pb-5">
          {string(
            "especially those wanting to specialize in Artificial Intelligence, Games & VR, and other cutting-edge technologies.",
          )}
        </p>
        <div className="row flex-wrap justify-content-center">
          <div className="col-sm-4 pb-5 -text-center">
            <ImageBackground className="mb-3" src="/static/images/icon-platforms.png" />
            <h6> {string("Applications & Platforms")} </h6>
          </div>
          <div className="col-sm-4 pb-5 -text-center">
            <ImageBackground className="mb-3" src="/static/images/icon-ai.png" />
            <h6> {string("Artificial Intelligence")} </h6>
          </div>
          <div className="col-sm-4 pb-5 -text-center">
            <ImageBackground className="mb-3" src="/static/images/icon-vr.png" />
            <h6> {string("Virtual Reality")} </h6>
          </div>
        </div>
      </div>
    </div>
    <div className="section-ourwork-header">
      <div className="container -text-center -text-uppercase pb-5 pt-5">
        <h3> {string("What We Create")} </h3>
      </div>
    </div>
    <div>
      <FrontPageSection
        title="Application and Platforms"
        imageURL="/static/images/home-app.png"
        href={Links.ourwork_link(DataTypes.PortfolioItem.AppPlatforms)}>
        {string(
          "We create entire platforms and services from the ground up. These platforms typically live in a combination of places from app stores to the cloud.",
        )}
      </FrontPageSection>
      <FrontPageSection
        title="Artificial Intelligence"
        imageURL="/static/images/home-ai-3.png"
        href={Links.ourwork_link(DataTypes.PortfolioItem.AI)}>
        {string(
          "Newer applications and services should always be considering AI into their product. Everyone at Divertise Asia learns how to use AI and we make sure we offer it to everyone we work with.",
        )}
      </FrontPageSection>
      <FrontPageSection
        title="Websites"
        imageURL="/static/images/home-website.png"
        href={Links.ourwork_link(DataTypes.PortfolioItem.Other)}>
        {string(
          "The world runs on the web and we can produce any website needed for it. We aim to create a balance between user content management and speed of development.",
        )}
      </FrontPageSection>
      <FrontPageSection
        title="Virtual Reality"
        imageURL="/static/images/home-vr.png"
        href={Links.ourwork_link(DataTypes.PortfolioItem.Other)}>
        {string(
          "Creating applications in VR/AR will be one of the next big things. We are looking for ways to be at the forefront of the technology and have partnered with other companies in Asia to bring VR applications to life.",
        )}
      </FrontPageSection>
      <FrontPageSection
        title="Games"
        imageURL="/static/images/home-game.png"
        href={Links.ourwork_link(DataTypes.PortfolioItem.Other)}>
        {string(
          "We love bringing more fun into the world! We have made two of our own games and occasionally have internal game jams",
        )}
      </FrontPageSection>
    </div>
    <div className="section-letushelp">
      <div className="container -text-center">
        <h3 className="-text-uppercase pb-5 pt-5"> {string("Let Us Help You")} </h3>
        <div className="row">
          <div className="col-sm-12 col-md-4 letushelp_col">
            <div>
              <h5> {string("Tech Consultant")} </h5>
              <ImageBackground src="/static/images/letushelp-tech.png" />
              <p>
                {string(
                  "There are a lot of options with technology, we will work with you to help you choose the best way forward",
                )}
              </p>
            </div>
          </div>
          <div className="col-sm-12 col-md-4 letushelp_col">
            <div>
              <h5> {string("Launch your idea")} </h5>
              <ImageBackground src="/static/images/letushelp-optimize.png" />
              <p>
                {string(
                  "If you have a product idea but don't know where to begin, our team of developers will help make your idea come to live.",
                )}
              </p>
            </div>
          </div>
          <div className="col-sm-12 col-md-4 letushelp_col">
            <div>
              <h5> {string("Business Optimization")} </h5>
              <ImageBackground src="/static/images/letushelp-launch.png" />
              <p>
                {string(
                  "We work with you to bring technology to the parts of your business that will have the most impact ",
                )}
              </p>
            </div>
          </div>
        </div>
      </div>
    </div>
  </MainPage>
}
