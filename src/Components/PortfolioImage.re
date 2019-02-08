open ReasonReact;
open Page;
open Belt;

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

[@bs.module] external phonePortraitImage : string = "../../../../public/images/port_phone-portrait.png";
[@bs.module] external desktopImage : string = "../../../../public/images/port_desktop.png";

let getImageBorderImage = (borderType: portfolioImageBorder) => {
  switch (borderType) {
  | PhonePortrait => phonePortraitImage
  | Desktop => desktopImage
  | _ => desktopImage
  };
}

let make =
    (
      ~item:portfolioImage,
      ~className:option(string),
    ) => {
  ...component,
  render: _self => {
    <div className={"section-portfolio " ++ Js.Option.getWithDefault("section-portfolio-default", className)}>
      <ImageBackground className="port_img img-phone-portrait col-4" src=getImageBorderImage(item.border) />
    </div>;
  },
};
