@react.component
let make = (
  ~className: option<string>=?,
  ~type_: option<string>=?,
  ~placeholder: option<string>=?,
  ~inputLabel: option<string>=?,
  ~isTextarea=false,
  ~name: option<string>=?,
  ~prefixId: string="",
) => {
  let inputId = prefixId ++ "-" ++ Js.Option.getWithDefault("", name)
  <div
    className={"inputtext " ++
    Js.Option.getWithDefault("", className) ++ {
      isTextarea ? " inputtext-textarea" : ""
    }}>
    <label className="inputtext_label" htmlFor=inputId>
      {React.string(Js.Option.getWithDefault("", inputLabel))}
    </label>
    {isTextarea
      ? <textarea
          className="input-default"
          id=inputId
          defaultValue={Js.Option.getWithDefault("", placeholder)}
        />
      : <input
          className="input-default"
          id=inputId
          type_={Js.Option.getWithDefault("text", type_)}
          placeholder={Js.Option.getWithDefault("", placeholder)}
        />}
  </div>
}
