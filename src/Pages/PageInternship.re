open ReasonReact;

let component = ReasonReact.statelessComponent("PageInternship");

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage>
      <div className="bg-gradient-header"> 
        <div className="container pt-5 pb-4"> 
          <div className="row d-flex align-items-baseline">
            <h1 className="text-white"> {string("INTERNSHIP")}</h1>
            <h3 className="text-white">{string("- ART & DESIGN")}</h3>
          </div>
        </div>
      </div>
      <div className="container"> 
          <div className="row pt-5 d-block">
            <h3>{string("What are the requirements?")}</h3>
              <ul>
                <li> {ReasonReact.string({j| Thai citizen |j})}</li>
                <li> {ReasonReact.string({j| Strong communication skills |j})}</li>
                <li> {ReasonReact.string({j| Minimum 2.50 GPA |j})}</li>
                <li> {ReasonReact.string({j| Design-related major / Art and design background |j})}</li>
                <li> {ReasonReact.string({j| Experience with computer graphic software (ex. Adobe Photoshop, Adobe illustrator etc.) |j})}</li>
                <li> {ReasonReact.string({j| Some experience with 3D or 2D art |j})}</li>
                <li> {ReasonReact.string({j| Skills in digital illustration is prefered, but not required |j})}</li>
                <li> {ReasonReact.string({j| Portfolio is required |j})}</li>
              </ul>
          </div>
      </div>
    </MainPage>;
  },
};
