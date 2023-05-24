@react.component
let make = (
  ~className: option<string>=?,
  ~type_: option<string>=?,
  ~placeholder: option<string>=?,
  ~inputLabel: option<string>=?,
  ~isTextarea=false,
  ~name: option<string>=?,
  ~required: bool=false,
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
      ? <textarea className="input-default" id=inputId ?name ?placeholder required />
      : <input
          className="input-default"
          id=inputId
          ?name
          type_={Js.Option.getWithDefault("text", type_)}
          ?placeholder
          required
        />}
  </div>
}
