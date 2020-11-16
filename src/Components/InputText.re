[@react.component]
let make =
    (
      ~className: option(string)=?,
      ~type_: option(string)=?,
      ~placeholder: option(string)=?,
      ~inputLabel: option(string)=?,
      ~isTextarea=false,
      ~name="",
      ~required=false,
    ) => {
  <div
    className={
      "inputtext "
      ++ {
        Js.Option.getWithDefault("", className);
      }
      ++ {
        isTextarea ? " inputtext-textarea" : "";
      }
    }>
    <p className="inputtext_label">
      {ReasonReact.string(Js.Option.getWithDefault("", inputLabel))}
    </p>
    {switch (isTextarea) {
     | true =>
       <textarea
         className="input-default"
         placeholder={Js.Option.getWithDefault("", placeholder)}
         name
         required
       />
     | _ =>
       <input
         className="input-default"
         name
         required
         type_={Js.Option.getWithDefault("text", type_)}
         placeholder={Js.Option.getWithDefault("", placeholder)}
       />
     }}
  </div>;
};
