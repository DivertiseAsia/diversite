open BaseSlider;
open ReasonReact;
open Belt;

type state = {slide: int};

type action =
  | NextSlide
  | GoToSlide(int)
  | PrevSlide;

let component = ReasonReact.reducerComponent("ControlledSlider");

let make =
    (~initialSlide: int, ~slides: list(slide), ~config: sliderConfig, ~className: option(string)=?, _children) => {
  ...component,
  initialState: () => {slide: initialSlide},
  reducer: (action, state) =>
    switch (action) {
    | NextSlide =>
      if (state.slide === List.length(slides) - 1) {
        config.loopSlides ? Update({slide: 0}) : NoUpdate;
      } else {
        Update({slide: state.slide + 1});
      }
    | PrevSlide =>
      if (state.slide === 0) {
        config.loopSlides ? Update({slide: List.length(slides) - 1}) : NoUpdate;
      } else {
        Update({slide: state.slide - 1});
      }
    | GoToSlide(slide) => Update({slide: slide})
    },
  render: self =>
    <BaseSlider
      slides
      currentSlide={self.state.slide}
      config
      className={"controlled-slider " ++ Js.Option.getWithDefault("controlled-slider-default", className)}>
      <div className="slider-controls">
        <div className="slide-left" onClick={_e => self.send(PrevSlide)} />
        <div className="slide-right" onClick={_e => self.send(NextSlide)} />
      </div>
      <div className="slider-bullets-container">
        <div className="slider-bullets">
          {
            array(
              List.toArray(
                List.mapWithIndex(slides, (index, slide) =>
                  <div
                    key={"bullet-" ++ string_of_int(index)}
                    className={
                      "slider-bullet" ++ (slide.slideNumber === self.state.slide ? " slider-bullet-current" : "")
                    }
                    onClick={_e => self.send(GoToSlide(index))}
                  />
                ),
              ),
            )
          }
        </div>
      </div>
    </BaseSlider>,
};
