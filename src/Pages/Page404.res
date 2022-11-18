open React

@react.component
let make = () => {
  <MainPage className="page404" title="404" description="Not found on Divertise Asia" keywords="">
    <PageHeader title="" className="bg-gradient-color1 pt-5 page-contacts" />
    <div className="content">
      <h2 className="text-404"> {string("404")} </h2>
      <div className="desktop">
        <h2 className="text-404"> {string("Page Not found on Divertise Asia")} </h2>
      </div>
      <div className="mobile">
        <h2 className="text-404"> {string("Page Not found")} </h2>
        <h2 className="text-404"> {string("on Divertise Asia")} </h2>
      </div>
      <Logo is404=true />
    </div>
  </MainPage>
}
