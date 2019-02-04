let component = ReasonReact.statelessComponent("Link");

let handleClick = (href, target, event, isExternal) =>
  switch (isExternal) {
  | Some(true) => ()
  | _ =>
    switch (target) {
    | None
    | Some("") =>
      if (!ReactEvent.Mouse.defaultPrevented(event)) {
        ReactEvent.Mouse.preventDefault(event);
        ReasonReact.Router.push(href);
      }
    | _ => ()
    }
  };

let safeguardRelIfExternalLink = (isExternal: option(bool), rel: option(string)) =>
  switch (isExternal, rel) {
  | (Some(true), None) => "noopener noreferrer"
  | (_, Some(x)) => x
  | (_, None) => ""
  };

let make =
    (
      ~href: string,
      ~className: option(string)=?,
      ~target: option(string)=?,
      ~isExternal: option(bool)=?,
      ~rel: option(string)=?,
      children,
    ) => {
  ...component,
  render: self =>
    <a
      href
      className={"link " ++ Js.Option.getWithDefault("link-default", className)}
      ?target
      rel={safeguardRelIfExternalLink(isExternal, rel)}
      onClick={self.handle((event, _) => handleClick(href, target, event, isExternal))}>
      ...children
    </a>,
};
