module PortfolioLink = {
  type category =
  | Default
  | DefaultInactive
  | Text
  | AppStore
  | GooglePlay
  | MiStore;

  type t = {
    href: string,
    caption: string,
    category: category,
  };
}

module PortfolioItem = {
  type category = 
  | All
  | AI
  | Other
  | Design
  | AppPlatforms;

  type imageBorder =
  | PhonePortrait
  | PhonePortraitBlack
  | PhoneLandscape
  | PhoneLandscapeBlack
  | Desktop
  | Tablet;

  type image = {
    src: string,
    border: imageBorder,
    className: option<string>,
  };

  type t = {
    title: string,
    category: list<category>,
    className: option<string>,
    images: list<image>,
    links: list<PortfolioLink.t>,
    technologies: list<string>,
    body: array<React.element>,
  };

  let getImageBorderClass = (borderType: imageBorder) => {
    switch (borderType) {
    | PhonePortrait => "phone-portrait"
    | PhonePortraitBlack => "phone-portrait phone-black"
    | PhoneLandscape => "phone-landscape"
    | PhoneLandscapeBlack => "phone-landscape phone-black"
    | Desktop => "desktop"
    | Tablet => "tablet-landscape"
    };
  };
}




