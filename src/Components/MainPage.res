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
                <div className="nav-container">
                  <Link href=Links.home> {string("Home")} </Link>
                  <Link href=Links.ourwork> {string("Our Work")} </Link>
                  <Link href=Links.careers> {string("Careers")} </Link>
                  <Link href=Links.contact>
                    <span className="btn btn-line-white"> {string("Let's Talk ")} </span>
                  </Link>
                </div>
              </div>
            </nav>
          </div>
        </div>
      </div>
      <div className={"page-content-container"} id="content-container" key="children">
        <div className="page-content">
          <div className="main-content"> children </div>
          <div className="footer">
            <div className="social-media">
              <a
                target="_blank"
                href="https://www.facebook.com/DivertiseAsia/"
                className="icon-social social-fb">
                <img src="/static/images/facebook.svg" alt="Facebook's logo" />
              </a>
              <a
                target="_blank"
                href="https://www.linkedin.com/company/divertiseasia"
                className="icon-social">
                <img src="/static/images/linkedin.svg" alt="LinkedIn's logo" />
              </a>
              <a href="mailto:contact@divertise.asia" className="icon-social">
                <img src="/static/images/email.svg" alt="Mail logo" />
              </a>
            </div>
            <p> {string(`ⓒ 2017-2023 Divertise Asia Co.,Ltd.`)} </p>
          </div>
        </div>
      </div>
    </div>
  </div>
}
