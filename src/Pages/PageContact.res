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
          <h3> {string("Need help with your project?")} </h3>
          <ContactForm />
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
              {string("careers@divertise.asia")}
            </a>
          </p>
        </div>
      </div>
    </div>
  </MainPage>
}
