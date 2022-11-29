@react.component
let make = (
  ~className: option<string>=?,
  ~type_: option<string>=?,
  ~placeholder: option<string>=?,
  ~inputLabel: option<string>=?,
  ~isTextarea=false,
  ~name: option<string>=?,
) => {
  <div
    className={"inputtext " ++
    Js.Option.getWithDefault("", className) ++ {
      isTextarea ? " inputtext-textarea" : ""
    }}>
    <label className="inputtext_label" htmlFor={Js.Option.getWithDefault("", name)}>
      {React.string(Js.Option.getWithDefault("", inputLabel))}
    </label>
    {isTextarea
      ? <textarea
          className="input-default"
          id={Js.Option.getWithDefault("", name)}
          defaultValue={Js.Option.getWithDefault("", placeholder)}
        />
      : <input
          className="input-default"
          id={Js.Option.getWithDefault("", name)}
          type_={Js.Option.getWithDefault("text", type_)}
          placeholder={Js.Option.getWithDefault("", placeholder)}
        />}
  </div>
}
