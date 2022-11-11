open React

@react.component
let make = () => {
  <MainPage className="page404" title="404" description="Not found on Divertise Asia" keywords="">
    <h2 className="text-404"> {string("404")} </h2>
    <h2 className="-text-space"> {string("Page Not found on Divertise Asia")} </h2>
    <Logo is404=true />
  </MainPage>
}
