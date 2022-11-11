open React

@react.component
let make = () => {
  <MainPage className="page404" title="404" description="Not found on Divertise Asia" keywords="">
    <h2 className="text-404"> {string("404")} </h2>
    <div className="desktop">
      <h2 className="text-404"> {string("Page Not found on Divertise Asia")} </h2>
    </div>
    <div className="mobile">
      <h2 className="text-404"> {string("Page Not found")} </h2>
      <h2 className="text-404"> {string("on Divertise Asia")} </h2>
    </div>
    <Logo is404=true />
  </MainPage>
}
