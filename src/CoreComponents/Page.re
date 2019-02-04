open ReasonReact;
open Belt;
open Css;

type pageEnd =
  | Text(string)
  | Children(array(ReasonReact.reactElement));

type pageEnds = {
  top: list(pageEnd),
  bottom: list(pageEnd),
};

let pageStyle = style([display(flexBox), flexDirection(column), maxHeight(vh(100.0)), height(`percent(100.0))]);

let pageContentsStyle = style([overflow(auto), flex(1)]);

let component = ReasonReact.statelessComponent("PageRe");

let mapPageEnd = (pageEndArray: list(pageEnd), extraClass: string) =>
  switch (List.length(pageEndArray)) {
  | 0 => ReasonReact.null
  | _ =>
    <div className={"page-end-container page-end-" ++ extraClass} key=extraClass>
      {
        array(
          List.toArray(
            List.mapWithIndex(pageEndArray, (i, info: pageEnd) =>
              <div className={"page-end page-end-" ++ string_of_int(i)} key={string_of_int(i)}>
                {
                  switch ((info: pageEnd)) {
                  | Text(s) => <div className="page-end-text"> {ReasonReact.string(s)} </div>
                  | Children(children) => <div className="page-end-children"> ...children </div>
                  }
                }
              </div>
            ),
          ),
        )
      }
    </div>
  };

let extraClasses = (pageEnds: pageEnds) => {
  let topClass =
    switch (List.length(pageEnds.top)) {
    | 0 => ""
    | _ => "page-has-top"
    };
  let bottomClass =
    switch (List.length(pageEnds.bottom)) {
    | 0 => ""
    | _ => "page-has-bottom"
    };
  topClass ++ " " ++ bottomClass;
};

let make = (~pageEnds: pageEnds, ~className: option(string)=?, children: array(ReasonReact.reactElement)) => {
  ...component,
  render: _self => {
    let extraClasses = extraClasses(pageEnds);
    <div
      className={
        "page " ++ extraClasses ++ " " ++ Js.Option.getWithDefault("page-default", className) ++ " " ++ pageStyle
      }>
      {mapPageEnd(pageEnds.top, "top")}
      <div className={"page-content-container " ++ pageContentsStyle} key="children">
        <div className="page-content"> ...children </div>
      </div>
      {mapPageEnd(pageEnds.bottom, "bottom")}
    </div>;
  },
};
