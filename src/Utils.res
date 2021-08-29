type navigator;
type clipboard;

@bs.val external navigator: navigator = "navigator";
module Navigator = {
  @bs.get external getClipboard: navigator => clipboard = "clipboard";
  @bs.send
  external writeText: (clipboard, string) => Js.Promise.t<unit> = "writeText";
};

let copyToClipboard: string => Js.Promise.t<unit> =
  s => navigator->Navigator.getClipboard->Navigator.writeText(s);
