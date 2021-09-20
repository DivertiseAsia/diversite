type navigator
type clipboard

@val external navigator: navigator = "navigator"
module Navigator = {
  @get external getClipboard: navigator => clipboard = "clipboard"
  @send
  external writeText: (clipboard, string) => Js.Promise.t<unit> = "writeText"
}

let copyToClipboard: string => Js.Promise.t<unit> = s =>
  navigator->Navigator.getClipboard->Navigator.writeText(s)
