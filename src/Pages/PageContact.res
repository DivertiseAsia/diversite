open React

@react.component
let make = () => {
  <MainPage
    title="Contact Us"
    keywords="divertise asia, thailand"
    description="Get in contact with Divertise Asia">
    <PageHeader title="Contact Us" className="bg-gradient-color1 pt-5 page-contacts" />
    <div className="container">
      <div className="contact-content">
        <div className="row py-5 d-block">
          <h3> {string("Looking for technological experts to help you with your product?")} </h3>
          <input id="emailInput" className="contact-page_invisible-input" />
          <p>
            {string("Please contact us via ")}
            <a
              className="contact-link text-color-2"
              href="mailto:contact@divertise.asia"
              target="_blank">
              {string("this email")}
            </a>
          </p>
          <h3 className="pt-5"> {string("Looking to join our team?")} </h3>
          <p>
            {string("Please read our job descriptions ")}
            <Next.Link href=Links.careers>
              <a className="contact-link"> {string("here")} </a>
            </Next.Link>
            {string(", and send your resume to ")}
            <a
              className="contact-link text-color-2"
              href="mailto:careers@divertise.asia"
              target="_blank">
              {string("this email")}
            </a>
          </p>
        </div>
      </div>
    </div>
    <div className="footer-title bg-gradient-color2">
      <p>
        {string("If you are interested in joining our team, just send your portfolio to")}
        <a target="_blank" href="mailto:careers@divertise.asia" className="text-contact">
          {string("careers@divertise.asia")}
        </a>
      </p>
    </div>
  </MainPage>
}
