open React
open Next

@react.component
let make = (
  ~className: option<string>=?,
  ~title: string,
  ~keywords: string,
  ~description: string,
  ~children,
) => {
  let (isPopupOpen, setPopupOpen) = React.useState(() => false)
  <div>
    <Head>
      <title lang="en"> {string(title)} </title>
      <meta name="description" content=description />
      <meta name=keywords content=keywords />
    </Head>
    <div
      className={"page page-has-top " ++ {Js.Option.getWithDefault("mainpage-default", className)}}>
      <div className="page-end-container page-end-top">
        <div className="page-end page-end-0">
          <div className="page-children">
            <nav className="nav -text-right">
              <div className="container-lg">
                <Logo />
                <input type_="checkbox" />
                <div className="nav-icon"> <div /> <div /> <div /> </div>
                <div className="nav-container">
                  <Link href=Links.home> {string("Home")} </Link>
                  <Link href=Links.ourwork> {string("Our Work")} </Link>
                  <Link href=Links.careers> {string("Careers")} </Link>
                  <Link href=Links.contact> {string("Contact Us")} </Link>
                  <div
                    className="btn btn-line-white" onClick={_ => setPopupOpen(_ => !isPopupOpen)}>
                    {string("Build Your Ideas")}
                  </div>
                </div>
              </div>
            </nav>
            <Popup
              isOpen=isPopupOpen
              closeOnBgClick=false
              closeFunc={() => setPopupOpen(_ => false)}
              className="buildyouridea-popup">
              <div>
                <h3> {string("Build Your Ideas")} </h3>
                <p>
                  {string(
                    "Tell us about what you need. We will get back to you within 1 working day",
                  )}
                </p>
              </div>
              <ContactForm />
            </Popup>
          </div>
        </div>
      </div>
      <div className={"page-content-container"} key="children">
        <div className="page-content">
          <div className="main-content"> children </div>
          <div className="footer">
            <div className="social-media">
              <a
                target="_blank"
                href="https://www.facebook.com/DivertiseAsia/"
                className="icon-social social-fb">
                <img src="/static/images/facebook.svg" />
              </a>
              <a
                target="_blank"
                href="https://www.linkedin.com/company/divertiseasia"
                className="icon-social">
                <img src="/static/images/linkedin.svg" />
              </a>
              <a href="mailto:contact@divertise.asia" className="icon-social">
                <img src="/static/images/email.svg" />
              </a>
            </div>
            <p> {string(`ⓒ 2017-2021 Divertise Asia Co.,Ltd.`)} </p>
          </div>
        </div>
      </div>
    </div>
  </div>
}
