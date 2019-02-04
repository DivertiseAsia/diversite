open ReasonReact;
open Page;
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
            <div className="nav -text-right">
                <Logo />
                <input type_="checkbox" />
                <div className="nav-icon">
                    <div />
                    <div />
                    <div />
                </div>
                <div className="nav-container">
                    <Link href="">(string("Home"))</Link>
                    <Link href="">(string("Our Work"))</Link>
                    <Link href="">(string("Contact"))</Link>
                    <Link href="">(string("Careers"))</Link>
                </div> 
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
