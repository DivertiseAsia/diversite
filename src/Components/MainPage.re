open ReasonReact;
open Belt;

[@bs.module]
external social_fb: string = "../../../../public/images/facebook.svg";
[@bs.module]
external social_in: string = "../../../../public/images/linkedin.svg";
[@bs.module]
external social_mail: string = "../../../../public/images/email.svg";

[@react.component]
let make = (~className: option(string)=?, ~title:string, ~keywords:string, ~description:string, ~extraPageEnds=?, ~children) => {
  let (isPopupOpen, setPopupOpen) = React.useState(() => false);
  let extraPageEndsElement =
    switch (extraPageEnds) {
    | None => null
    | Some(el) => el
    };
  <>
    <BsReactHelmet>
      <title lang="en">{ReasonReact.string(title)}</title>
      <meta name="description" content=description />
      <meta name=keywords content=keywords />
    </BsReactHelmet>
    <Page
      pageEnds={
        top: [
          Children(
            React.array(
              List.toArray([
                <nav className="nav -text-right">
                  <Logo />
                  <input type_="checkbox" />
                  <div className="nav-icon"> <div /> <div /> <div /> </div>
                  <div className="nav-container">
                    <Link href=Links.home> {string("Home")} </Link>
                    <Link href=Links.ourwork> {string("Our Work")} </Link>
                    <Link href=Links.careers> {string("Careers")} </Link>
                    /* <Link href=Links.contacts> {string("Contact Us")} </Link> */
                    <div
                      className="btn btn-line-white"
                      onClick={_ => setPopupOpen(_ => !isPopupOpen)}>
                      {string("Build Your Ideas")}
                    </div>
                  </div>
                </nav>,
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
                </Popup>,
                extraPageEndsElement,
              ]),
            ),
          ),
        ],
        bottom: [Children(extraPageEndsElement)],
      }
      className={Js.Option.getWithDefault("mainpage-default", className)}>
      <div className="main-content"> children </div>
      <div className="footer">
        <div className="social-media">
          <Link
            isExternal=true
            target="_blank"
            href="https://www.facebook.com/DivertiseAsia/"
            className="icon-social social-fb">
            <img src=social_fb />
          </Link>
          <Link
            isExternal=true
            target="_blank"
            href="https://www.linkedin.com/company/divertiseasia"
            className="icon-social">
            <img src=social_in />
          </Link>
          <Link
            isExternal=true
            href="mailto:contact@divertise.asia"
            className="icon-social">
            <img src=social_mail />
          </Link>
        </div>
        <p>
          {ReasonReact.string({j| ⓒ 2017-2021 Divertise Asia Co.,Ltd. |j})}
        </p>
      </div>
    </Page>
  </>;
};
