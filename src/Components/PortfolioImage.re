type portfolioImageBorder =
  | PhonePortrait
  | PhonePortraitBlack
  | PhoneLandscape
  | PhoneLandscapeBlack
  | Desktop
  | Tablet;

type portfolioImage = {
  src: string,
  border: portfolioImageBorder,
  className: option(string),
};

let getImageBorderClass = (borderType: portfolioImageBorder) => {
  switch (borderType) {
  | PhonePortrait => "phone-portrait"
  | PhonePortraitBlack => "phone-portrait phone-black"
  | PhoneLandscape => "phone-landscape"
  | PhoneLandscapeBlack => "phone-landscape phone-black"
  | Desktop => "desktop"
  | Tablet => "tablet-landscape"
  };
};

[@react.component]
let make = (~className: option(string)=?, ~item: portfolioImage) => {
  <div
    className={
      " "
      ++ Js.Option.getWithDefault("", className)
      ++ " "
      ++ Js.Option.getWithDefault("", item.className)
      ++ " "
      ++ getImageBorderClass(item.border)
    }>
    <div className="portimg-container">
      <div className="portimg">
        <div className="portimg_frame">
          <div className="portimg_scroll-before" />
          <div
            className={"image-background portimg_scroll scroll-long " ++ item.src} >
            <div />
          </div>
        </div>
        <div className="portimg_frame-after" />
      </div>
    </div>
  </div>;
};