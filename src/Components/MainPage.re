open ReasonReact;
open Belt;

let component = ReasonReact.statelessComponent("MainPageRe");

let make =
    (
      ~className: option(string)=?,
      ~extraPageEnds=?,
      children: array(ReasonReact.reactElement),
    ) => {
  ...component,
  render: _self => {
    let extraPageEndsElement =
      switch (extraPageEnds) {
      | None => null
      | Some(el) => el
      };
    <Page
      pageEnds={
        top: [
          Children(List.toArray([
            <div className="header-bar">
              <Logo />
            </div>,
            extraPageEndsElement,
          ]))
        ],
        bottom: [],
      }
      className={Js.Option.getWithDefault("mainpage-default", className)}>
      <div className="main-content"> ...children </div>
    </Page>;
  },
};
