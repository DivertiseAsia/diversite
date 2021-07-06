open ReasonReact;
open PortfolioItem;

[@bs.module]
external ketawadesktop: string =
  "../../../../public/projects/website-ketawa-d.jpg";
[@bs.module]
external ketawaapp: string = "../../../../public/projects/app-ketawa.png";
[@bs.module]
external wilaamalindesktop: string =
  "../../../../public/projects/website-wilaamalin.png";
[@bs.module]
external wilaamalinapp: string =
  "../../../../public/projects/app-wilaamalin.png";
[@bs.module]
external eastwestdesktop: string =
  "../../../../public/projects/website-eastwest.png";
[@bs.module]
external eastwestapp: string = "../../../../public/projects/app-eastwest.png";
[@bs.module]
external adsoupapp: string = "../../../../public/projects/app-adsoup.jpg";
[@bs.module]
external adsoudesktop: string =
  "../../../../public/projects/website-adsoup.jpg";
[@bs.module]
external copanelapp: string = "../../../../public/projects/app-copanel.jpg";
[@bs.module]
external copaneldesktop: string =
  "../../../../public/projects/website-copanel.jpg";
[@bs.module]
external eventcometeventapp: string =
  "../../../../public/projects/app-eventcomet-event.jpg";
[@bs.module]
external eventcometscheduleapp: string =
  "../../../../public/projects/app-eventcomet-schedule.jpg";
[@bs.module]
external eventcometdateapp: string =
  "../../../../public/projects/app-eventcomet-date.jpg";
[@bs.module]
external mintcrowddesktop: string =
  "../../../../public/projects/mintcrowd.jpg";
[@bs.module]
external mintcrowdapp: string =
  "../../../../public/projects/mintcrowd-app.jpg";
[@bs.module]
external boneageaidesktop: string =
  "../../../../public/projects/website-boneage.png";
[@bs.module]
external boneageaiapp: string = "../../../../public/projects/app-boneage.png";
[@bs.module]
external gameaione: string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module]
external gameaitwo: string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module]
external cvrl: string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module]
external kikiigamephone: string =
  "../../../../public/projects/game-kikii2.jpg";
[@bs.module]
external kikiigametablet: string =
  "../../../../public/projects/game-kikii1.png";
[@bs.module]
external microgames1: string =
  "../../../../public/projects/game-microgames1.jpg";
[@bs.module]
external microgames2: string =
  "../../../../public/projects/game-microgames2.jpg";
[@bs.module]
external microgames3: string =
  "../../../../public/projects/game-microgames3.png";
[@bs.module]
external cvrld: string =
  "../../../../public/projects/project-cvrl-desktop.jpg";
[@bs.module]
external cvrlp: string = "../../../../public/projects/project-cvrl-phone.jpg" /* --------------------- Apps --------------------------*/;

let adsoupPortfolio: portfolioItem = {
  title: "Adsoup",
  className: None,
  images: [
    {
      src: "adsoupapp",
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-adsoup-phone"),
    },
    {
      src: "adsoudesktop",
      border: Desktop,
      className: Some("col-8 port-no-scroll portimg-adsoup-desktop"),
    },
  ],
  category: [PortfolioDataType.AppPlatforms],
  links: [] /* {
     _type: GooglePlay,
     href: "https://play.google.com/store/apps/details?id=io.adsoup.sales.mobile",
     caption: "Google Play"
   },
   {
     _type: AppStore,
     href: "https://itunes.apple.com/us/app/adsoup/id1415279019",
     caption: "iTunes"
   },
   {
     _type: Default,
     href: "https://adsoup.com/?ref=divertise.asia",
     caption: "View Website >"
   } */,

  technologies: [
    "React",
    "Python",
    "Reason",
    "Firebase",
    "Postgresql",
    "Android",
    "iOS",
    "Docker",
    "aws",
    "Web design",
    "Graphic Design",
    "Ux",
    "Ui",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "Adsoup Sales is an all-in-one platform where sales can communicate with thier leads from different comunication channels in one place, including Facebook and email. They also provide pipeline management and CRM functionality to manage customers account.",
           )}
        </p>
        <p>
          {string(
             "Adsoup's main application is created in React and Firebase. The live chat component is built soley upon Firebase/Reason. The backend API and mailing fetching services are written in Python.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let copanelPortfolio: portfolioItem = {
  title: "Copanel",
  className: None,
  images: [
    {
      src: "copanelapp",
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-copanel-phone"),
    },
    {
      src: "copaneldesktop",
      border: Desktop,
      className: Some("col-8 port-no-scroll portimg-copanel-desktop"),
    },
  ],
  category: [PortfolioDataType.AppPlatforms],
  links: [
    {
      _type: Default,
      href: "http://copanel.io/?ref=divertise.asia",
      caption: "View Website >",
    },
  ],
  technologies: [
    "React",
    "Js",
    "Ruby",
    "Docker",
    "aws",
    "Postgresql",
    "Web design",
    "Graphic Design",
    "Ux",
    "Ui",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "CoPanel is a time tracking application with the the ability to plan tasks ahead of time. This platform is designed for a small to medium size team to track working time and create reports based on category and projects. ",
           )}
        </p>
        <p>
          {string(
             "The frontend is written in ReactJS and the backend is in Ruby. It is currently a free platform that supports both Thai and English",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let eventcometPortfolio: portfolioItem = {
  title: "Event Comet",
  className: None,
  images: [
    {
      src: "eventcometeventapp",
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
    {
      src: "eventcometscheduleapp",
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
    {
      src: "eventcometdateapp",
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
  ],
  category: [PortfolioDataType.AppPlatforms],
  links: [] /* {
     _type: Default,
     href: "https://eventcomet.com/?ref=divertise.asia",
     caption: "View Website >"
   } */,

  technologies: [
    "iOS",
    "Android",
    "Reason",
    "Ruby",
    "Docker",
    "Aws",
    "Web design",
    "Ux",
    "Ui",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "EventComet is an all-in-one event app solution. It was created to allow any event to have their own application. It allows event data to be updated even during the event.",
           )}
        </p>
        <p>
          {string(
             "It's written using ReasonML with the server in Ruby. The platform supports running on both Android and iOS.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let mintcrowdPortfolio: portfolioItem = {
  title: "Mint Crowd",
  className: None,
  images: [
    {
      src: "mintcrowdapp",
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: "mintcrowddesktop", border: Desktop, className: Some("col-8")},
  ],
  links: [{_type: Text, href: "", caption: "(Website Coming Soon)"}],
  category: [PortfolioDataType.AppPlatforms],
  technologies: [
    "Reason",
    "Python",
    "Docker",
    "Aws",
    "Web design",
    "Ux",
    "Ui",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "Mint Crowd allows anyone to invest in property located in Asia. The site takes a crowdfunding approach to investing and aims at a Western market.",
           )}
        </p>
        <p>
          {string(
             "The site was built with Reason and the backend runs in Python.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let safemodePortfolio: portfolioItem = {
  title: "Safemode",
  className: None,
  images: [
    {src: "safemode1", border: PhonePortrait, className: Some("col-4")},
    {src: "safemode2", border: PhonePortrait, className: Some("col-4")},
    {src: "safemode3", border: PhonePortrait, className: Some("col-4")},
  ],
  links: [],
  category: [PortfolioDataType.AppPlatforms],
  technologies: ["Reason", "Ux", "Ui"],
  body:
    [
      <div>
        <p>
          {string(
             "Safe Mode is an application aimed to make the society a little safer for everyone. The application allows users to share their location with their close contacts. It also allows users to call their close contact or an emergency number. The app aims to give the users a peace of mind that there is someone watching their back. ",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let plateupPortfolio: portfolioItem = {
  title: "Plateup",
  className: None,
  images: [
    {src: "plateup1", border: PhonePortrait, className: Some("col-4")},
    {src: "plateup2", border: PhonePortrait, className: Some("col-4")},
    {src: "plateup3", border: PhonePortrait, className: Some("col-4")},
  ],
  links: [
    {
      _type: Default,
      href: "https://www.plateup.app/",
      caption: "View Website >",
    },
  ],
  category: [PortfolioDataType.AppPlatforms],
  technologies: [],
  body:
    [
      <div>
        <p>
          {string(
             "Plate Up is an application aimed at making healthy diets an easy, affordable option. The app allows users to select recipes, order ingredients, and count calories seamlessly.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
/* --------------------- AI -----------------------------*/
let traitsignalPortfolio: portfolioItem = {
  title: "Trait Signal",
  className: None,
  images: [
    {
      src: "traitsignalmobile",
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: "traitsignaldesktop", border: Desktop, className: Some("col-8")},
  ],
  links: [
    {
      _type: Default,
      href: "https://traitsignal.com/",
      caption: "View Website >",
    },
  ],
  category: [PortfolioDataType.AI, PortfolioDataType.AppPlatforms],
  technologies: [],
  body:
    [
      <div>
        <p>
          {string(
             "Trait Signal is a webapp that is built to help car dealers grasp their customer's opinions about cars they are trying to sell.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let boneagePortfolio: portfolioItem = {
  title: "Bone Age",
  className: None,
  images: [
    {
      src: "boneageaiapp",
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: "boneageaidesktop", border: Desktop, className: Some("col-8")},
  ],
  category: [PortfolioDataType.AI, PortfolioDataType.AppPlatforms],
  links: [
    {
      _type: Default,
      href: "https://www.bangkokmedjournal.com/article/performance-of-convolutional-neural-networks-and-transfer-learning-for-skeletal-bone-age-ass/410/abstract",
      caption: "Academic Paper",
    },
    {
      _type: Default,
      href: "https://www.nextcare.ai/",
      caption: "View Website >",
    },
  ],
  technologies: [
    "tensorflow",
    "numpy",
    "scikitlearn",
    "pandas",
    "AI",
    "Research",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "This project works to determine the age of a patient given their x-ray",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let gameaionePortfolio: portfolioItem = {
  title: "Game Playing Ai",
  className: None,
  images: [
    {src: "gameaione", border: PhonePortrait, className: Some("col-12")},
  ],
  category: [PortfolioDataType.AI],
  links: [],
  technologies: ["Game Design", "Graphic Design", "Ux", "Ui"],
  body:
    [<div> <p> {string("Some body text")} </p> </div>] |> Belt.List.toArray,
};
let gameaitwoPortfolio: portfolioItem = {
  title: "AI Game 2",
  className: None,
  category: [PortfolioDataType.AI],
  images: [{src: gameaitwo, border: Desktop, className: Some("col-8")}],
  links: [],
  technologies: ["html5", "css", "Graphic Design", "web design"],
  body:
    [<div> <p> {string("Some body text")} </p> </div>] |> Belt.List.toArray,
} /* ----------------------- Websites ---------------------*/;
let ketawaPortfolio: portfolioItem = {
  title: "Ketawa Pet Friendly Hotel Website",
  className: None,
  category: [PortfolioDataType.Design],
  images: [
    {
      src: "ketawaapp",
      border: PhonePortrait,
      className: Some("col-4 scroll-25"),
    },
    {
      src: "ketawadesktop",
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  ],
  links: [
    {
      _type: Default,
      href: "http://www.ketawahotel.com/",
      caption: "View Website >",
    },
  ],
  technologies: ["html5", "css", "Js", "Graphic Design", "web design"],
  body:
    [
      <div>
        <p>
          {string(
             "Ketawa Hotel is a pet friendly hotel and cafe. Ketawa is rebranding and it needs its website to change to match with the new Cooperate Identity. So we redesigned the website. It has a warm, cozy, friendly, but simple look and feel to represent the hotel's characteristic.",
           )}
        </p>
        <p>
          {string(
             "The site was built with HTML, Javascript, and styled with CSS in the framework of Bootstrap.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let alldaytattooPortfolio: portfolioItem = {
  title: "All Day Tattoo Website",
  className: None,
  category: [PortfolioDataType.Design],
  images: [
    {
      src: "alldaytattoo",
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  ],
  links: [],
  technologies: [
    "html5",
    "css",
    "wordpress",
    "Js",
    "Graphic Design",
    "web design",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "Alldaytattoo is a website redesign project. It is Built with Wordpress Visual Builder, Divi, and styled with additional CSS.
             ",
           )}
        </p>
        <p>
          {string(
             "The site was built with HTML, Javascript, and styled with CSS in the framework of Bootstrap.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let wilaamalinPortfolio: portfolioItem = {
  title: "WilaaMalin",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "wilaamalinapp",
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-30"),
    },
    {src: "wilaamalindesktop", border: Desktop, className: Some("col-8")},
  ],
  links: [
    {
      _type: Default,
      href: "https://wilaamalin.com?ref=divertise.asia",
      caption: "View Website >",
    },
  ],
  technologies: ["wordpress", "Graphic Design", "web design"],
  body:
    [
      <div>
        <p>
          {string(
             "WilaaMalin is a handmade pet toy store. They wanted to move their website to a platform they could more easily manage and have more control in.",
           )}
        </p>
        <p> {string("The site was created in WordPress.")} </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let eastwestPortfolio: portfolioItem = {
  title: "East West Fitness",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "eastwestapp",
      border: PhonePortrait,
      className: Some("col-4 scroll-30"),
    },
    {src: "eastwestdesktop", border: Desktop, className: Some("col-8")},
  ],
  links: [
    {
      _type: Default,
      href: "https://eastwestfitness.com/?ref=divertise.asia",
      caption: "View Website >",
    },
  ],
  technologies: ["Wordpress", "Graphic Design", "web design"],
  body:
    [
      <div>
        <p>
          {string(
             "East West Fitness is both a gym and fitness equipment provider located in Bangkok, Thailand. They wanted to a more professional website that they could manage on a daily basis.",
           )}
        </p>
        <p> {string("The website was created in WordPress.")} </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let halalblockvideoPortfolio: portfolioItem = {
  title: "Halal Blockchain Promotional Video",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "halalblockvideo",
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  ],
  links: [],
  technologies: ["Video Editing", "2D Animation", "Story Board"],
  body:
    [
      <div>
        <p>
          {string(
             "Halal Blockchain has a grand vision of integrating the traditional Halal products with Blockchain Technology. We are honoured to be trusted to visualize and vocalize that vision in a 2-minute long video, on which we worked on all process, from storyboard to concept art to animating.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let traitsignalvideoPortfolio: portfolioItem = {
  title: "Trait Signal Promotional Video",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "traitsignalvideo",
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  ],
  links: [],
  technologies: ["Video Editing", "2D Animation", "Story Board"],
  body:
    [
      <div>
        <p>
          {string(
             "Traitsignal is a startup aimed to use technology for better communications between customers and car manufacturers.

             Working with them, we created a 90-second long animation to explain how their products work, and how it would change the car industry.
             ",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let adsoupvideoPortfolio: portfolioItem = {
  title: "Adsoup Promotional Video",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "adsoupvideo",
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  ],
  links: [],
  technologies: ["Video Editing", "2D Animation", "Story Board"],
  body:
    [
      <div>
        <p>
          {string(
             "Adsoup is a startup who uses technology to make smoother communications between creative agencies and their clients.

             In this video, we worked closely with Adsoup from storyboard to finish to tell the story of their product better.
             ",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
} /* ----------------------- Virtual Reality ---------------------- */;
let vrPortfolio: portfolioItem = {
  title: "CXRL",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "cvrlp",
      border: PhoneLandscape,
      className: Some("col-6 port-no-scroll portimg-cvrl-phone"),
    },
    {src: "cvrld", border: Desktop, className: Some("col-6 port-no-scroll")},
  ],
  links: [
    {
      _type: Default,
      href: "https://cvrl.asia/?ref=divertise.asia",
      caption: "View Website >",
    },
  ],
  technologies: ["VR", "Unity", "Android", "NodeJS"],
  body:
    [
      <div>
        <p>
          {string(
             "We have been working together as a partner with CXRL to help develop their VR catalog. We have worked with them to help create their property viewing platform. ",
           )}
        </p>
        <p>
          {string(
             "The products are mostly written in C# using the Unity engine. To see their platform in action please contact CXRL or Divertise Asia",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
} /* ----------------------- Games ---------------------------*/;
let kikiiPortfolio: portfolioItem = {
  title: "Kikii on the Run",
  className: Some("kikii-image"),
  category: [PortfolioDataType.Other],
  images: [
    {
      src: "kikiigamephone",
      border: PhoneLandscapeBlack,
      className: Some("portimg-kikii-phone col-5 port-no-scroll"),
    },
    {
      src: "kikiigametablet",
      border: Tablet,
      className: Some("col-7 port-no-scroll"),
    },
  ],
  links: [
    /* {
         _type: GooglePlay,
         href: "https://play.google.com/store/apps/details?id=asia.divertise.soidog",
         caption: "Google Play"
       }, */
    {
      _type: AppStore,
      href: "https://itunes.apple.com/th/app/kikii-on-the-run/id1282269153?mt=8",
      caption: "iTunes",
    },
  ],
  technologies: [
    "android",
    "ios",
    "Unity",
    "Game Design",
    "2D Art",
    "2D Animation",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "A game with the ridiculous concept of a dog running, eating, and pooping in the streets of Bangkok. Inspired by the walk to our old office.",
           )}
        </p>
        <p>
          {string(
             "It's written in C# using the Unity engine. The game is currently out on Android and IOS. It supports both Thai and English",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
let microgamesPortfolio: portfolioItem = {
  title: "Microgames",
  className: None,
  category: [PortfolioDataType.Other],
  images: [
    {src: "microgames1", border: PhonePortrait, className: Some("col-4")},
    {src: "microgames2", border: PhonePortrait, className: Some("col-4")},
    {src: "microgames3", border: PhonePortrait, className: Some("col-4")},
  ],
  links: [
    {
      _type: GooglePlay,
      href: "https://play.google.com/store/apps/details?id=th.co.microgames",
      caption: "Google Play",
    },
  ],
  technologies: [
    "C++",
    "Cocos",
    "Android",
    "Game Design",
    "2D Art",
    "2D Animation",
    "ux",
    "ui",
  ],
  body:
    [
      <div>
        <p>
          {string(
             "A 4-player game that takes place all on the same screen. It's made to be frantic for some quick downtime fun.",
           )}
        </p>
        <p>
          {string(
             "Microgames was orignally written in Javascript using Phaser but was later ported to C++ with Cocos. It's currently available on Android.",
           )}
        </p>
      </div>,
    ]
    |> Belt.List.toArray,
};
