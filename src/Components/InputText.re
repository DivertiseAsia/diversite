[@react.component]
let make =
    (
      ~className: option(string)=?,
      ~type_: option(string)=?,
      ~placeholder: option(string)=?,
      ~inputLabel: option(string)=?,
      ~isTextarea=false,
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
    {isTextarea
       ? <textarea className="input-default">
           {ReasonReact.string(Js.Option.getWithDefault("", placeholder))}
         </textarea>
       : <input
           className="input-default"
           type_={Js.Option.getWithDefault("text", type_)}
           placeholder={Js.Option.getWithDefault("", placeholder)}
         />}
  </div>;
};
