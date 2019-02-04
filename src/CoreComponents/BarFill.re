open ReasonReact;

let component = ReasonReact.statelessComponent("BarFill");

let optElement = (className, opt) =>
  switch (opt) {
  | None => null
  | Some(el) => <div className> el </div>
  };

let fillTextElement = opt =>
  switch (opt) {
  | None => null
  | Some(text) => <span className="fill-text"> {text |> string} </span>
  };
let make =
    (
      ~percent: int,
      ~className: option(string)=?,
      ~onClick=?,
      ~title: option(string)=?,
      ~fillText: option(string)=?,
      ~dropElement: option(ReasonReact.reactElement)=?,
      ~topLeft: option(ReasonReact.reactElement)=?,
      ~topRight: option(ReasonReact.reactElement)=?,
      ~belowLeft: option(ReasonReact.reactElement)=?,
      ~belowRight: option(ReasonReact.reactElement)=?,
      _children,
    ) => {
  ...component,
  render: _self =>
    <div ?className>
    <div className="d-flex justify-content-between">
      {topLeft |> optElement("top-left text-left -font-light-grey")}
      {topRight |> optElement("top-right -text-right font-weight-bold")}
    </div>
      <div
        ?title
        ?onClick
        className={
          "progress "
          ++ Js.Option.getWithDefault("progress-default", className)
        }>
        <div
          className="fillbar"
          style={
            ReactDOMRe.Style.make(~width=string_of_int(percent) ++ "%", ())
          }>
          {fillTextElement(fillText)}
          {dropElement |> optElement("drop-fill")}
        </div>
      </div>
      {belowLeft |> optElement("below-left text-left")}
      {belowRight |> optElement("below-right text-right")}
    </div>,
};