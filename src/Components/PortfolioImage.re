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
[@bs.module] external desktopStandImage : string = "../../../../public/images/borders/port_desktop-stand.png";
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
      "portimg-container" ++
      " " ++ 
      Js.Option.getWithDefault("", className) ++
      " " ++
      Js.Option.getWithDefault("", item.className)}
    >
      <div className="portimg portimg-phone">
        <div className="portimg_frame">
          <div className="portimg_scroll-before" />
          <ImageBackground className="portimg_scroll scroll-long" src=item.src />
        </div>
        <div className="portimg_frame-after" />
      </div>
      <ImageBackground className="desktop-stand" src=desktopStandImage />
    </div>
  },
};
