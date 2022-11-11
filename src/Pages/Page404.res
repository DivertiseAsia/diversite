open React

@react.component
let make = () => {
  <MainPage title="404" description="Not found on Divertise Asia" keywords="">
    <Logo /> <h2 className="-text-space"> {string("404")} </h2>
  </MainPage>
}
