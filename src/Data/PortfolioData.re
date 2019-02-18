open ReasonReact;
open PortfolioItem;

[@bs.module] external ketawadesktop : string = "../../../../public/projects/website-ketawa-d.jpg";
[@bs.module] external ketawaapp : string = "../../../../public/projects/app-ketawa.png";
[@bs.module] external wilaamalindesktop : string = "../../../../public/projects/website-wilaamalin.png";
[@bs.module] external wilaamalinapp : string = "../../../../public/projects/app-wilaamalin.png";
[@bs.module] external eastwestdesktop : string = "../../../../public/projects/website-eastwest.png";
[@bs.module] external eastwestapp : string = "../../../../public/projects/app-eastwest.png";
[@bs.module] external adsoupapp : string = "../../../../public/projects/app-adsoup.jpg";
[@bs.module] external adsoudesktop : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external copanelapp : string = "../../../../public/projects/app-copanel.jpg";
[@bs.module] external copaneldesktop : string = "../../../../public/projects/website-copanel.jpg";
[@bs.module] external eventcometapp : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external mintcrowddesktop : string = "../../../../public/projects/mintcrowd.jpg";
[@bs.module] external mintcrowdapp : string = "../../../../public/projects/mintcrowd-app.jpg";
[@bs.module] external boneageai : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external gameaione : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external gameaitwo : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external cvrl : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external kikiigamephone: string = "../../../../public/projects/game-kikii2.jpg";
[@bs.module] external kikiigametablet: string = "../../../../public/projects/game-kikii1.png";
[@bs.module] external microgames1 : string = "../../../../public/projects/game-microgames1.jpg";
[@bs.module] external microgames2 : string = "../../../../public/projects/game-microgames2.jpg";
[@bs.module] external microgames3 : string = "../../../../public/projects/game-microgames3.png";

/* --------------------- Apps --------------------------*/
let adsoupPortfolio:portfolioItem = {
  title: "Adsoup",
  className: None,
  images: [
    {
      src: adsoupapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: adsoudesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Firebase", "Docker", "aws", "Postgresql", "Js", "Python", "Web design", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Adsoup Sales is an all-in-one platform where sales can communicate with thier leads from different comunication channels in one place, including Facebook and email. They also provide pipeline management and CRM functionality to manage customers account."))</p>
    </div>
  ] |> Belt.List.toArray),
}
let copanelPortfolio:portfolioItem = {
  title: "Copanel",
  className: None,
  images: [
    {
      src: copanelapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: copaneldesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Firebase", "Docker", "aws", "Postgresql", "Js", "Python", "Web design", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
    <p>(string("CoPanel is time tracking application with the the ability to plan task ahead of time. This platform is design for a small to medium size team to track working time and create reports based on category and projects. "))</p>
    </div>
  ] |> Belt.List.toArray),
}
let eventcometPortfolio:portfolioItem = {
  title: "Event Comet",
  className: None,
  images: [
    {
      src: eventcometapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: eventcometapp,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Aws", "Js", "Python", "Web design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Let us build the perfect app for your event"))</p>
    </div>
  ] |> Belt.List.toArray),
}
let mintcrowdPortfolio:portfolioItem = {
  title: "Mint Crowd",
  className: None,
  images: [
    {
      src: mintcrowdapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: mintcrowddesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Html", "Css", "Python", "Web design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Let us build the perfect app for your event"))</p>
    </div>
  ] |> Belt.List.toArray),
}
/* --------------------- AI -----------------------------*/
let boneagePortfolio:portfolioItem = {
  title: "Bone Age",
  className: None,
  images: [
    {
      src: boneageai,
      border:PhonePortrait,
      className: Some("col-12")
    }
  ],
  links: [],
  technologies: ["Aws", "Js", "Python", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
let gameaionePortfolio:portfolioItem = {
  title: "Game Playing Ai",
  className: None,
  images: [
    {
      src: gameaione,
      border:PhonePortrait,
      className: Some("col-12")
    }
  ],
  links: [],
  technologies: ["Game Design", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
let gameaitwoPortfolio:portfolioItem = {
  title: "AI Game 2",
  className: None,
  images: [
    {
      src: gameaitwo,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["html5", "css", "Graphic Design", "web design" ],
  body: ([
    <div>
      <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
/* ----------------------- Websites ---------------------*/
let ketawaPortfolio:portfolioItem = {
  title: "Ketawa Pet Friendly Hotel Website",
  className: None,
  images: [
    {
      src: ketawaapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [
    {
      _type: Default,
      href: "http://www.ketawahotel.com/",
      caption: "View Website"
    }
  ],
  technologies: ["html5", "css", "Js", "Graphic Design", "web design" ],
  body: ([
    <div>
      <p>(string("Ketawa Hotel is a pet friendly hotel and cafe. Ketawa is rebranding and it needs its website to change to match with the new Cooperate Identity. So we redesigned the website. It has a warm, cozy, friendly, but simple look and feel to represent the hotel's characteristic."))</p>
      <p>(string("The site was built with HTML, Javascript, and styled with CSS in the framework of Bootstrap."))</p>
    </div>
  ] |> Belt.List.toArray),
}
let wilaamalinPortfolio:portfolioItem = {
  title: "Wilaa Malin",
  className: None,
  images: [
    {
      src: wilaamalinapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: wilaamalindesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["html5", "css", "Graphic Design", "web design" ],
  body: ([
    <div>
    <p>(string("Ketawa Hotel is a pet friendly hotel and cafe. Ketawa is rebranding and it needs its website to change to match with the new Cooperate Identity. So we redesigned the website. It has a warm, cozy, friendly, but simple look and feel to represent the hotel's characteristic."))</p>
    <p>(string("The site was built with HTML, Javascript, and styled with CSS in the framework of Bootstrap."))</p>
    </div>
  ] |> Belt.List.toArray),
}
let eastwestPortfolio:portfolioItem = {
  title: "East Wes",
  className: None,
  images: [
    {
      src: eastwestapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: eastwestdesktop,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["html5", "css", "Graphic Design", "web design" ],
  body: ([
    <div>
       <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
/* ----------------------- Virtual Reality ---------------------- */
let vrPortfolio:portfolioItem = {
  title: "CVRL",
  className: None,
  images: [
    {
      src: cvrl,
      border:PhonePortrait,
      className: Some("col-12")
    }
  ],
  links: [],
  technologies: [ "Graphic Design" ],
  body: ([
    <div>
      <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
/* ----------------------- Games ---------------------------*/
let kikiiPortfolio:portfolioItem = {
  title: "Kikii on the Run",
  className: Some("kikii-image"),
  images: [
    {
      src: kikiigamephone,
      border:PhoneLandscape,
      className: Some("col-5")
    },
    {
      src: kikiigametablet,
      border:Tablet,
      className: Some("col-7")
    }
  ],
  links: [],
  technologies: ["Unity", "android", "ios" ,"Game Design", "2D Art", "2D Animation"],
  body: ([
    <div>
      <p>(string("A game with the ridiculous concept of a dog running, eating, and pooping in the streets of Bangkok. Inspired by the walk to our old office."))</p>
      <p>(string("It’s written in C# using the Unity engine. The game is currently out on Android and IOS. It supports both Thai and English"))</p>
    </div>
  ] |> Belt.List.toArray),
}
let microgamesPortfolio:portfolioItem = {
  title: "Microgames",
  className: None,
  images: [
    {
      src: microgames1,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: microgames2,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: microgames3,
      border:PhonePortrait,
      className: Some("col-4")
    }
  ],
  links: [],
  technologies: ["C++","Cocos","Game Design", "Ux/Ui", "2D Art", "2D Animation"],
  body: ([
    <div>
      <p>(string("A 4-player game that takes place all on the same screen. It's made to be frantic for some quick downtime fun."))</p>
      <p>(string("Microgames was orignally written in Javascript using Phaser but was later ported to C++ with Cocos. It's currently available on Android."))</p>
    </div>] |> Belt.List.toArray),
}