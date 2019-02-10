open ReasonReact;

let component = ReasonReact.statelessComponent("PortfolioImage");

type portfolioImageBorder =
  | PhonePortrait
  | PhoneLandscape
  | Desktop
  | Tablet
;

type portfolioImage = {
  src: string,
  border: portfolioImageBorder,
  className: option(string),
};

[@bs.module] external phonePortraitImage : string = "../../../../public/images/borders/port_phone-portrait.png";
[@bs.module] external phoneLandscapeImage : string = "../../../../public/images/borders/port_phone-horizontal.png";
[@bs.module] external desktopImage : string = "../../../../public/images/borders/port_desktop.png";
[@bs.module] external tabletHorizontalImage : string = "../../../../public/images/borders/port_tablet-hotizontal.png";

let getImageBorderImage = (borderType: portfolioImageBorder) => {
  switch (borderType) {
  | PhonePortrait => phonePortraitImage
  | PhoneLandscape => phoneLandscapeImage
  | Desktop => desktopImage
  | Tablet => tabletHorizontalImage
  };
}

let make =
    (
      ~className:option(string)=?,
      ~item:portfolioImage,
      _children
    ) => {
  ...component,
  render: _self => {
    <div className={
      "desktop-container" ++
      " " ++ 
      Js.Option.getWithDefault("", className) ++
      " " ++
      Js.Option.getWithDefault("", item.className)}
    >
      <div className="desktop">
        <div className="desktop-frame">
          <ImageBackground className="port_desktop-scroll scroll-long" src=item.src />
        </div>
        <div className="desktop-bottom-frame" />
      </div>
      <ImageBackground className="desktop-stand" src=getImageBorderImage(item.border) />
    </div>
  },
};
