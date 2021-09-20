@react.component
let make = (~className: option<string>=?, ~src: string) => {
  <div
    className={"image-background " ++
    Js.Option.getWithDefault("image-background-default", className)}
    style={ReactDOM.Style.make(~backgroundImage=`url("${src}")`, ())}
  />
}
