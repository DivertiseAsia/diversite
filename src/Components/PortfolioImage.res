open DataTypes.PortfolioItem

@react.component
let make = (~className: option<string>=?, ~item: image) => {
  <div
    className={" " ++
    Js.Option.getWithDefault("", className) ++
    " " ++
    Js.Option.getWithDefault("", item.className) ++
    " " ++
    getImageBorderClass(item.border)}>
    <div className="portimg-container">
      <div className="portimg">
        <div className="portimg_frame">
          <div className="portimg_scroll-before" />
          <ImageBackground src=item.src className={"portimg_scroll scroll-long "} />
        </div>
        <div className="portimg_frame-after" />
      </div>
    </div>
  </div>
}
