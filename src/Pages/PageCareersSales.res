open React

@react.component
let make = () => {
  <MainPage
    title="Designer at Divertise Asia"
    keywords="Artificial Intelligence, Design, Fullstack, API, Server"
    description="Be a professional Designer (3 months contract) at Divertise Asia">
    <PageHeader title="Careers" subtitle="Sales Executive (Software) " time="(3 months contract)" className="bg-gradient-color1 pt-5" />
    <div className="container">
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What are the requirements?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li>
            {string("1-2 years experiences in Sales IT Software")}
          </li>
          <li> {string("Bachelor's degree in any fields")} </li>
          <li> {string("Fluent in Thai and English communication is a plus")} </li>
          <li> {string("B2B Sales experiences")} </li>
          <li> {string("Strong Business Development is the must")} </li>
          <li> {string("Willing to try new challenge")} </li>
          <li> {string("Proactive personality and good communication skill")} </li>
          <li> {string("Plus, if you have knowledge in HTML/CSS/JavaScript")} </li>
          <li> {string("Plus, if you experience in Business Development or Sales management role in a software development services company or technology consulting")} </li>
        </ul>
      </div>
      <div className="row pt-5 d-block">
        <div className="d-flex flex-row">
          <Icon className="mr-4" iconType=Icon.Pen />
          <h3 className="align-self-center"> {string("What will I be doing?")} </h3>
        </div>
        <ul className="ul-li-padding-none ul-li-dash p-4 pl-5 -lineheight-large">
          <li> {string("Identify and analyze market for potential customers and find new customers to generate income for the company")} </li>
          <li>
            {string("Negotiating the terms of an agreement and closing sales")}
          </li>
          <li> {string("Gain a clear understanding of customer's businesses and requirements")} </li>
          <li> {string("Strong networking in sales or able to contact with potential customers to promote the services of the company")} </li>
          <li> {string("Perform business research and ideate the right approach to use for a multitude of business opportunities. ")} </li>
          <li> {string("Understand and speak to trends in startups and technology")} </li>
          <li> {string("Develop and implement sales strategies and plans to drive customer needs to achieve sales goals")} </li>
          <li> {string("Conduct business and foster relationships with prospects and customers")} </li>
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
