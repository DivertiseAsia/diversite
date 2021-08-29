open DataTypes.PortfolioItem;

@react.component
let make = (~className: option<string>=?, ~item: image) => {
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