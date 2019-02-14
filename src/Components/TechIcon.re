open ReasonReact;
[@bs.module] external iconhtml5 : string = "../../../../public/images/html5-logo.png";
[@bs.module] external iconpython : string = "../../../../public/images/tech-icon/tech-icon_python.png";
[@bs.module] external iconandroid : string = "../../../../public/images/tech-icon/tech-icon_android.png";
[@bs.module] external iconcircleci : string = "../../../../public/images/tech-icon/tech-icon_circleci.png";
[@bs.module] external iconcocos : string = "../../../../public/images/tech-icon/tech-icon_cocos.png";
[@bs.module] external iconcss : string = "../../../../public/images/tech-icon/tech-icon_css.png";
[@bs.module] external icondjango : string = "../../../../public/images/tech-icon/tech-icon_django.png";
[@bs.module] external iconfirebase : string = "../../../../public/images/tech-icon/tech-icon_firebase.png";
[@bs.module] external icongit : string = "../../../../public/images/tech-icon/tech-icon_git.png";
[@bs.module] external iconios : string = "../../../../public/images/tech-icon/tech-icon_ios.png";
[@bs.module] external iconjs : string = "../../../../public/images/tech-icon/tech-icon_js.png";
[@bs.module] external iconunity : string = "../../../../public/images/tech-icon/tech-icon_unity.png";

type techIconType =
  | HTML5
  | Python
  | Android
  | Circleci
  | Cocos
  | CSS
  | Django
  | Firebase
  | Git
  | Ios
  | Js
  | Unity
  | Other(string, string)
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
  | "android" => Android
  | "circleci" => Circleci
  | "cocos" => Cocos
  | "css" => CSS
  | "django" => Django
  | "firebase" => Firebase
  | "git" => Git
  | "ios" => Ios
  | "js" => Js
  | "unity" => Unity
  | "graphic design" | "2d animation" | "web design" | "game design" | "ux" | "ui" | "c++" | "c#" | "aws" => Other(icon, "color2")
  | x => Other(x, x)
};

let mapIcon = (icon) =>
  switch(icon){
  | HTML5 => {techIconType: icon, className: "html5", content:(
    <ImageBackground src=iconhtml5 />
  )}
  | Python => {techIconType: icon, className: "python", content:(
    <ImageBackground src=iconpython />
  )}
  | Android => {techIconType: icon, className: "android", content:(
    <ImageBackground src=iconandroid />
  )}
  | Circleci => {techIconType: icon, className: "circleci", content:(
    <ImageBackground src=iconcircleci />
  )}
  | Cocos => {techIconType: icon, className: "cocos", content:(
    <ImageBackground src=iconcocos />
  )}
  | CSS => {techIconType: icon, className: "css", content:(
    <ImageBackground src=iconcss />
  )}
  | Django => {techIconType: icon, className: "django", content:(
    <ImageBackground src=icondjango />
  )}
  | Firebase => {techIconType: icon, className: "firebase", content:(
    <ImageBackground src=iconfirebase />
  )}
  | Git => {techIconType: icon, className: "git", content:(
    <ImageBackground src=icongit />
  )}
  | Ios => {techIconType: icon, className: "ios", content:(
    <ImageBackground src=iconios />
  )}
  | Js => {techIconType: icon, className: "js", content:(
    <ImageBackground src=iconjs />
  )}
  | Unity => {techIconType: icon, className: "unity", content:(
    <ImageBackground src=iconunity />
  )}
  
  | Other(x, className) => {techIconType: icon, className: className, content:(
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