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


let getImageBorderClass = (borderType: portfolioImageBorder) => {
  switch (borderType) {
  | PhonePortrait => "phone-portrait"
  | PhoneLandscape => "phone-landscape"
  | Desktop => "desktop"
  | Tablet => "tablet-landscape"
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
      " " ++ 
      Js.Option.getWithDefault("", className) ++
      " " ++
      Js.Option.getWithDefault("", item.className) ++
      " " ++
      getImageBorderClass(item.border)}
      >  
      <div className="portimg-container">
        <div className="portimg">
          <div className="portimg_frame">
            <div className="portimg_scroll-before" />
            <ImageBackground className="portimg_scroll scroll-long" src=item.src />
          </div>
          <div className="portimg_frame-after" />
        </div>
      </div>
    </div>
  },
};
