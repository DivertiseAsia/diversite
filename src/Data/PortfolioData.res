open React
open DataTypes.PortfolioItem

let ketawadesktop: string = "/static/projects/website-ketawa-d.jpg"
let ketawaapp: string = "/static/projects/app-ketawa.png"
let alldaytattoo: string = "/static/projects/alldaytattoo.png"
let wilaamalindesktop: string = "/static/projects/website-wilaamalin.png"
let wilaamalinapp: string = "/static/projects/app-wilaamalin.png"
let eastwestdesktop: string = "/static/projects/website-eastwest.png"
let eastwestapp: string = "/static/projects/app-eastwest.png"
let adsoupapp: string = "/static/projects/app-adsoup.jpg"
let adsoudesktop: string = "/static/projects/website-adsoup.jpg"
let copanelapp: string = "/static/projects/app-copanel.jpg"
let copaneldesktop: string = "/static/projects/website-copanel.jpg"
let eventcometeventapp: string = "/static/projects/app-eventcomet-event.jpg"
let eventcometscheduleapp: string = "/static/projects/app-eventcomet-schedule.jpg"
let eventcometdateapp: string = "/static/projects/app-eventcomet-date.jpg"
let mintcrowddesktop: string = "/static/projects/mintcrowd.jpg"
let mintcrowdapp: string = "/static/projects/mintcrowd-app.jpg"
let safemode1: string = "/static/projects/safemode1.png"
let safemode2: string = "/static/projects/safemode2.png"
let safemode3: string = "/static/projects/safemode3.png"
let plateup1: string = "/static/projects/plateup1.png"
let plateup2: string = "/static/projects/plateup2.png"
let plateup3: string = "/static/projects/plateup3.png"
let traitsignalmobile: string = "/static/projects/traitsignalmobile.png"
let traitsignaldesktop: string = "/static/projects/traitsignaldesktop.png"
let boneageaidesktop: string = "/static/projects/nextcare3.png"
let boneageaiapp: string = "/static/projects/app-boneage.png"
let gameaione: string = "/static/projects/website-adsoup.jpg"
let gameaitwo: string = "/static/projects/website-adsoup.jpg"
let cvrl: string = "/static/projects/website-adsoup.jpg"
let kikiigamephone: string = "/static/projects/game-kikii2.jpg"
let kikiigametablet: string = "/static/projects/game-kikii1.png"
let microgames1: string = "/static/projects/game-microgames1.jpg"
let microgames2: string = "/static/projects/game-microgames2.jpg"
let microgames3: string = "/static/projects/game-microgames3.png"
let cvrld: string = "/static/projects/project-cvrl-desktop.jpg"
let cvrlp: string = "/static/projects/project-cvrl-phone.jpg"
let halalblockvideo: string = "/static/projects/halablockchain-video.png"
let traitsignalvideo: string = "/static/projects/traitsignal-video.png"
let adsoupvideo: string = "/static/projects/adsoup-video.png"

/* --------------------- Apps -------------------------- */

let adsoupPortfolio: t = {
  title: "Adsoup",
  className: None,
  images: list{
    {
      src: adsoupapp,
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-adsoup-phone"),
    },
    {
      src: adsoudesktop,
      border: Desktop,
      className: Some("col-8 port-no-scroll portimg-adsoup-desktop"),
    },
  },
  category: list{AppPlatforms},
  links: list{} /* {
     category: GooglePlay,
     href: "https://play.google.com/store/apps/details?id=io.adsoup.sales.mobile",
     caption: "Google Play"
   },
   {
     category: AppStore,
     href: "https://itunes.apple.com/us/app/adsoup/id1415279019",
     caption: "iTunes"
   },
   {
     category: Default,
     href: "https://adsoup.com/?ref=divertise.asia",
     caption: "View Website >"
   } */,
  technologies: list{
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
  },
  body: <div>
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
}
let copanelPortfolio: t = {
  title: "Copanel",
  className: None,
  images: list{
    {
      src: copanelapp,
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-copanel-phone"),
    },
    {
      src: copaneldesktop,
      border: Desktop,
      className: Some("col-8 port-no-scroll portimg-copanel-desktop"),
    },
  },
  category: list{AppPlatforms},
  links: list{
    {
      category: Default,
      href: "http://copanel.io/?ref=divertise.asia",
      caption: "View Website >",
    },
  },
  technologies: list{
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
  },
  body: <div>
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
}
let eventcometPortfolio: t = {
  title: "Event Comet",
  className: None,
  images: list{
    {
      src: eventcometeventapp,
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
    {
      src: eventcometscheduleapp,
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
    {
      src: eventcometdateapp,
      border: PhonePortrait,
      className: Some("col-4 port-no-scroll portimg-eventcomet-phone"),
    },
  },
  category: list{AppPlatforms},
  links: list{} /* {
     category: Default,
     href: "https://eventcomet.com/?ref=divertise.asia",
     caption: "View Website >"
   } */,
  technologies: list{"iOS", "Android", "Reason", "Ruby", "Docker", "Aws", "Web design", "Ux", "Ui"},
  body: <div>
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
}
let mintcrowdPortfolio: t = {
  title: "Mint Crowd",
  className: None,
  images: list{
    {
      src: mintcrowdapp,
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: mintcrowddesktop, border: Desktop, className: Some("col-8")},
  },
  links: list{{category: Text, href: "", caption: "(Website Coming Soon)"}},
  category: list{AppPlatforms},
  technologies: list{"Reason", "Python", "Docker", "Aws", "Web design", "Ux", "Ui"},
  body: <div>
    <p>
      {string(
        "Mint Crowd allows anyone to invest in property located in Asia. The site takes a crowdfunding approach to investing and aims at a Western market.",
      )}
    </p>
    <p> {string("The site was built with Reason and the backend runs in Python.")} </p>
  </div>,
}
let safemodePortfolio: t = {
  title: "Safemode",
  className: None,
  images: list{
    {src: safemode1, border: PhonePortrait, className: Some("col-4")},
    {src: safemode2, border: PhonePortrait, className: Some("col-4")},
    {src: safemode3, border: PhonePortrait, className: Some("col-4")},
  },
  links: list{},
  category: list{AppPlatforms},
  technologies: list{"Reason", "Ux", "Ui"},
  body: <div>
    <p>
      {string(
        "Safe Mode is an application aimed to make the society a little safer for everyone. The application allows users to share their location with their close contacts. It also allows users to call their close contact or an emergency number. The app aims to give the users a peace of mind that there is someone watching their back. ",
      )}
    </p>
  </div>,
}
let plateupPortfolio: t = {
  title: "Plateup",
  className: None,
  images: list{
    {src: plateup1, border: PhonePortrait, className: Some("col-4")},
    {src: plateup2, border: PhonePortrait, className: Some("col-4")},
    {src: plateup3, border: PhonePortrait, className: Some("col-4")},
  },
  links: list{
    {
      category: Default,
      href: "https://www.plateup.app/",
      caption: "View Website >",
    },
  },
  category: list{AppPlatforms},
  technologies: list{},
  body: <div>
    <p>
      {string(
        "Plate Up is an application aimed at making healthy diets an easy, affordable option. The app allows users to select recipes, order ingredients, and count calories seamlessly.",
      )}
    </p>
  </div>,
}
/* --------------------- AI ----------------------------- */
let traitsignalPortfolio: t = {
  title: "Trait Signal",
  className: None,
  images: list{
    {
      src: traitsignalmobile,
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: traitsignaldesktop, border: Desktop, className: Some("col-8")},
  },
  links: list{
    {
      category: Default,
      href: "https://traitsignal.com/",
      caption: "View Website >",
    },
  },
  category: list{AI, AppPlatforms},
  technologies: list{},
  body: <div>
    <p>
      {string(
        "Trait Signal is a webapp that is built to help car dealers grasp their customer's opinions about cars they are trying to sell.",
      )}
    </p>
  </div>,
}
let boneagePortfolio: t = {
  title: "Bone Age",
  className: None,
  images: list{
    {
      src: boneageaiapp,
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-25 portimg-mintcrowd-phone"),
    },
    {src: boneageaidesktop, border: Desktop, className: Some("col-8")},
  },
  category: list{AI, AppPlatforms},
  links: list{
    {
      category: Default,
      href: "https://www.bangkokmedjournal.com/article/performance-of-convolutional-neural-networks-and-transfer-learning-for-skeletal-bone-age-ass/410/abstract",
      caption: "Academic Paper",
    },
    {
      category: Default,
      href: "https://www.nextcare.ai/",
      caption: "View Website >",
    },
  },
  technologies: list{"tensorflow", "numpy", "scikitlearn", "pandas", "AI", "Research"},
  body: <div>
    <p> {string("This project works to determine the age of a patient given their x-ray")} </p>
  </div>,
}
let gameaionePortfolio: t = {
  title: "Game Playing Ai",
  className: None,
  images: list{{src: gameaione, border: PhonePortrait, className: Some("col-12")}},
  category: list{AI},
  links: list{},
  technologies: list{"Game Design", "Graphic Design", "Ux", "Ui"},
  body: <div> <p> {string("Some body text")} </p> </div>,
}
let gameaitwoPortfolio: t = {
  title: "AI Game 2",
  className: None,
  category: list{AI},
  images: list{{src: gameaitwo, border: Desktop, className: Some("col-8")}},
  links: list{},
  technologies: list{"html5", "css", "Graphic Design", "web design"},
  body: <div> <p> {string("Some body text")} </p> </div>,
} /* ----------------------- Websites --------------------- */
let ketawaPortfolio: t = {
  title: "Ketawa Pet Friendly Hotel Website",
  className: None,
  category: list{Design},
  images: list{
    {
      src: ketawaapp,
      border: PhonePortrait,
      className: Some("col-4 scroll-25"),
    },
    {
      src: ketawadesktop,
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  },
  links: list{
    {
      category: Default,
      href: "http://www.ketawahotel.com/",
      caption: "View Website >",
    },
  },
  technologies: list{"html5", "css", "Js", "Graphic Design", "web design"},
  body: <div>
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
}
let alldaytattooPortfolio: t = {
  title: "All Day Tattoo Website",
  className: None,
  category: list{Design},
  images: list{
    {
      src: alldaytattoo,
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  },
  links: list{},
  technologies: list{"html5", "css", "wordpress", "Js", "Graphic Design", "web design"},
  body: <div>
    <p>
      {string("Alldaytattoo is a website redesign project. It is Built with Wordpress Visual Builder, Divi, and styled with additional CSS.
             ")}
    </p>
    <p>
      {string(
        "The site was built with HTML, Javascript, and styled with CSS in the framework of Bootstrap.",
      )}
    </p>
  </div>,
}
let wilaamalinPortfolio: t = {
  title: "WilaaMalin",
  className: None,
  category: list{Other},
  images: list{
    {
      src: wilaamalinapp,
      border: PhonePortraitBlack,
      className: Some("col-4 scroll-30"),
    },
    {src: wilaamalindesktop, border: Desktop, className: Some("col-8")},
  },
  links: list{
    {
      category: Default,
      href: "https://wilaamalin.com?ref=divertise.asia",
      caption: "View Website >",
    },
  },
  technologies: list{"wordpress", "Graphic Design", "web design"},
  body: <div>
    <p>
      {string(
        "WilaaMalin is a handmade pet toy store. They wanted to move their website to a platform they could more easily manage and have more control in.",
      )}
    </p>
    <p> {string("The site was created in WordPress.")} </p>
  </div>,
}
let eastwestPortfolio: t = {
  title: "East West Fitness",
  className: None,
  category: list{Other},
  images: list{
    {
      src: eastwestapp,
      border: PhonePortrait,
      className: Some("col-4 scroll-30"),
    },
    {src: eastwestdesktop, border: Desktop, className: Some("col-8")},
  },
  links: list{
    {
      category: Default,
      href: "https://eastwestfitness.com/?ref=divertise.asia",
      caption: "View Website >",
    },
  },
  technologies: list{"Wordpress", "Graphic Design", "web design"},
  body: <div>
    <p>
      {string(
        "East West Fitness is both a gym and fitness equipment provider located in Bangkok, Thailand. They wanted to a more professional website that they could manage on a daily basis.",
      )}
    </p>
    <p> {string("The website was created in WordPress.")} </p>
  </div>,
}
let halalblockvideoPortfolio: t = {
  title: "Halal Blockchain Promotional Video",
  className: None,
  category: list{Other},
  images: list{
    {
      src: halalblockvideo,
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  },
  links: list{},
  technologies: list{"Video Editing", "2D Animation", "Story Board"},
  body: <div>
    <p>
      {string(
        "Halal Blockchain has a grand vision of integrating the traditional Halal products with Blockchain Technology. We are honoured to be trusted to visualize and vocalize that vision in a 2-minute long video, on which we worked on all process, from storyboard to concept art to animating.",
      )}
    </p>
  </div>,
}
let traitsignalvideoPortfolio: t = {
  title: "Trait Signal Promotional Video",
  className: None,
  category: list{Other},
  images: list{
    {
      src: traitsignalvideo,
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  },
  links: list{},
  technologies: list{"Video Editing", "2D Animation", "Story Board"},
  body: <div>
    <p>
      {string("Traitsignal is a startup aimed to use technology for better communications between customers and car manufacturers.

             Working with them, we created a 90-second long animation to explain how their products work, and how it would change the car industry.
             ")}
    </p>
  </div>,
}
let adsoupvideoPortfolio: t = {
  title: "Adsoup Promotional Video",
  className: None,
  category: list{Other},
  images: list{
    {
      src: adsoupvideo,
      border: Desktop,
      className: Some("col-8 portimg-ketawa-desktop"),
    },
  },
  links: list{},
  technologies: list{"Video Editing", "2D Animation", "Story Board"},
  body: <div>
    <p>
      {string("Adsoup is a startup who uses technology to make smoother communications between creative agencies and their clients.

             In this video, we worked closely with Adsoup from storyboard to finish to tell the story of their product better.
             ")}
    </p>
  </div>,
} /* ----------------------- Virtual Reality ---------------------- */
let vrPortfolio: t = {
  title: "CXRL",
  className: None,
  category: list{Other},
  images: list{
    {
      src: cvrlp,
      border: PhoneLandscape,
      className: Some("col-6 port-no-scroll portimg-cvrl-phone"),
    },
    {src: cvrld, border: Desktop, className: Some("col-6 port-no-scroll")},
  },
  links: list{
    {
      category: Default,
      href: "https://cvrl.asia/?ref=divertise.asia",
      caption: "View Website >",
    },
  },
  technologies: list{"VR", "Unity", "Android", "NodeJS"},
  body: <div>
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
} /* ----------------------- Games --------------------------- */
let kikiiPortfolio: t = {
  title: "Kikii on the Run",
  className: Some("kikii-image"),
  category: list{Other},
  images: list{
    {
      src: kikiigamephone,
      border: PhoneLandscapeBlack,
      className: Some("portimg-kikii-phone col-5 port-no-scroll"),
    },
    {
      src: kikiigametablet,
      border: Tablet,
      className: Some("col-7 port-no-scroll"),
    },
  },
  links: list{
    /* {
         category: GooglePlay,
         href: "https://play.google.com/store/apps/details?id=asia.divertise.soidog",
         caption: "Google Play"
       }, */
    {
      category: AppStore,
      href: "https://itunes.apple.com/th/app/kikii-on-the-run/id1282269153?mt=8",
      caption: "iTunes",
    },
  },
  technologies: list{"android", "ios", "Unity", "Game Design", "2D Art", "2D Animation"},
  body: <div>
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
}
let microgamesPortfolio: t = {
  title: "Microgames",
  className: None,
  category: list{Other},
  images: list{
    {src: microgames1, border: PhonePortrait, className: Some("col-4")},
    {src: microgames2, border: PhonePortrait, className: Some("col-4")},
    {src: microgames3, border: PhonePortrait, className: Some("col-4")},
  },
  links: list{
    {
      category: GooglePlay,
      href: "https://play.google.com/store/apps/details?id=th.co.microgames",
      caption: "Google Play",
    },
  },
  technologies: list{
    "C++",
    "Cocos",
    "Android",
    "Game Design",
    "2D Art",
    "2D Animation",
    "ux",
    "ui",
  },
  body: <div>
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
}

let portfolioDataList: list<t> = list{adsoupPortfolio, copanelPortfolio, eventcometPortfolio, mintcrowdPortfolio, safemodePortfolio, plateupPortfolio, traitsignalPortfolio, boneagePortfolio, ketawaPortfolio, alldaytattooPortfolio, wilaamalinPortfolio, eastwestPortfolio, halalblockvideoPortfolio, traitsignalvideoPortfolio, adsoupvideoPortfolio, vrPortfolio, kikiiPortfolio, microgamesPortfolio}