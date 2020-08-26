open ReasonReact;

[@react.component]
let make = () => {
  <MainPage>
    <Logo />
    <h2 className="-text-space"> {string("404")} </h2>
  </MainPage>;
};