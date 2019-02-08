open ReasonReact;
[@bs.module] external iconhtml5 : string = "../../../../public/images/html5-logo.png";

type techIconType =
  | HTML5
  | Python
  | Other(string)
;

type techIcon = {
  techIconType,
  className: string,
  content: ReasonReact.reactElement,
};

let mapStringToTechIconType = (icon: string) =>
  switch (Js.String.toLowerCase(icon)) {
  | "python" => Python
  | "html5" => HTML5
  | x => Other(x)
};

let mapIcon = (icon) =>
  switch(icon){
  | HTML5 => {techIconType: icon, className: "html5", content:(
    <ImageBackground src=iconhtml5 />
  )}
  | Python => {techIconType: icon, className: "python", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 83.96 83.96">
        <defs><style>(string(".cls-1{fill:#fff;}.cls-2{fill:#eaeaea;}"))</style></defs>
        <g id="Layer_2"><g id="text">
            <path className="cls-1" d="M42,0A42,42,0,1,0,84,42,42,42,0,0,0,42,0Zm0,49.09A7.13,7.13,0,0,1,34.86,42a7,7,0,0,1,1.51-4.34,6.84,6.84,0,0,1,3-2.25V8.69a2.64,2.64,0,0,1,5.27,0V35.38a7.12,7.12,0,0,1,4,4H67.71a2.64,2.64,0,0,1,0,5.27H48.58A7.18,7.18,0,0,1,42,49.09Z"/>
            <path className="cls-2" d="M71,72.29A42,42,0,0,1,11.65,12.92L36.37,37.63A7,7,0,0,0,34.86,42,7.13,7.13,0,0,0,42,49.09a7,7,0,0,0,4.35-1.5Z"/>
        </g></g>
    </svg>
  )}
  | Other(x) => {techIconType: icon, className: x, content:(
    <h6>(string(x))</h6>
  )}
}

let component = ReasonReact.statelessComponent("IconRe");

let make = ( ~tech:string, ~className=?, _children) => {
  ...component,
  render: _self => {
    let techIconType = mapStringToTechIconType(tech);
    let icon = mapIcon(techIconType);

    <div className=("tech-icon tech-icon-" ++ icon.className ++ " " ++ Js.Option.getWithDefault("", className))>
      (icon.content)
    </div>
  }
};