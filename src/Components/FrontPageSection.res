open React
@react.component
let make = (
  ~className: option<string>=?,
  ~title: string,
  ~imageURL: string,
  ~href: string,
  ~prefixTitle: option<string>=?,
  ~children,
) => {
  let titleText = Js.Option.getWithDefault("", prefixTitle) ++ " see all projects"
  <div
    className={"frontpage-section " ++
    Js.Option.getWithDefault("frontpage-section-default", className)}>
    <div>
      <div className="row pb-5">
        <div className="col-sm-6"> <ImageBackground src=imageURL /> </div>
        <div className="col-sm-6 frontpage-section-texts pt-5">
          <h4> {string(title)} </h4>
          <div className="content"> children </div>
          <Next.Link href> <a className="btn" title=titleText> {string("See All Projects")} </a> </Next.Link>
        </div>
      </div>
    </div>
  </div>
}
