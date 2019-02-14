open ReasonReact;
open PortfolioItem;

let component = ReasonReact.statelessComponent("PageOurWork");
[@bs.module] external ketawadesktop : string = "../../../../public/projects/website-ketawa-d.jpg";
[@bs.module] external adsoupapp : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external copanelapp : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external eventcometapp : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external boneageai : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external gameaione : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external gameaitwo : string = "../../../../public/projects/website-adsoup.jpg";
[@bs.module] external cvrl : string = "../../../../public/projects/website-adsoup.jpg";
/* --------------------- Apps --------------------------*/
let adsoupPortfolio:portfolioItem = {
  title: "AdSoup",
  className: None,
  images: [
    {
      src: adsoupapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: adsoupapp,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Aws", "Js", "Python", "Web design", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Adsoup is a sales CRM that aims to unife all social Messaging into one platform."))</p>
      <p>(string("AdSoup Agency is a platform for marketing agency to manage their budget and track performance of campaigns for different client accounts at once. The agency can also email report sheets to client directly from this platform."))</p>
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
      src: copanelapp,
      border:Desktop,
      className: Some("col-8")
    }
  ],
  links: [],
  technologies: ["Aws", "Js", "Python", "Web design", "Graphic Design", "Ux", "Ui" ],
  body: ([
    <div>
      <p>(string("Some body text"))</p>
    </div>
  ] |> Belt.List.toArray),
}
let eventcometPortfolio:portfolioItem = {
  title: "Event Comet",
  className: None,
  images: [
    {
      src: copanelapp,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: copanelapp,
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
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
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
let willamalinPortfolio:portfolioItem = {
  title: "Willa Malin",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
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
let eastwesPortfolio:portfolioItem = {
  title: "East Wes",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
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
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhoneLandscape,
      className: Some("col-5")
    },
    {
      src: ketawadesktop,
      border:Tablet,
      className: Some("col-7")
    }
  ],
  links: [],
  technologies: ["C#","Unity","Game Design", "Ux", "Ui"],
  body: ([
    <div>
      <p>(string("A game with the ridiculous concept of a dog running, eating, and pooping in the streets of Bangkok. Inspired by the walk to our old office."))</p>
      <p>(string("It's written in C# using the Unity engine. The game is currently out on Android and supports both Thai and English."))</p>
    </div>
  ] |> Belt.List.toArray),
}
let microgamesPortfolio:portfolioItem = {
  title: "Microgames",
  className: None,
  images: [
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    },
    {
      src: ketawadesktop,
      border:PhonePortrait,
      className: Some("col-4")
    }
  ],
  links: [],
  technologies: ["C++","Cocos","Game Design", "Ux", "Ui"],
  body: ([
    <div>
      <p>(string("A 4-player game that takes place all on the same screen. It's made to be frantic for some quick downtime fun."))</p>
      <p>(string("Microgames was orignally written in Javascript using Phaser but was later ported to C++ with Cocos. It's currently available on Android."))</p>
    </div>] |> Belt.List.toArray),
}
let ragaPortfolio:portfolioItem = {
  title: "Raga",
  className: None,
  images: [],
  links: [],
  technologies: ["Graphic Design"],
  body: ([<div>(string("Some body text"))</div>] |> Belt.List.toArray),
}

let make = (_children) => {
  ...component,
  render: _self => {
    <MainPage className="page-ourwork">
    <div className="ourwork_section-header-content bg-gradient-color1"> 
      <div className="container align-items-baseline">
        <h1 className="text-white letter-spacing -text-uppercase -text-header-shadow"> {string("Our Work")}</h1>
      </div>
      <div className="container page-ourwork_nav nav">
        <input type_="checkbox" />
        <div className="nav-icon nav-icon-arrow"> 
          <h6>(string("Applications & Platforms")) </h6>
          <Icon iconType=Code />
        </div>
        <div className="nav-container">
            <Link className="current" href="">(string("Applications & Platforms"))</Link>
            <Link href="">(string("Artificial Intelligence"))</Link>
            <Link href="">(string("Websites"))</Link>
            <Link href="">(string("Virtual Reality"))</Link>
            <Link href="">(string("Games"))</Link>
        </div> 
      </div>
    </div>
    <div className="ourwork_section-header section-header bg-gradient-color1">
    </div>
    <div className="buffer" />
    <div>
    <PortfolioItem item=(adsoupPortfolio) />
    <PortfolioItem item=(copanelPortfolio) />
    <PortfolioItem item=(eventcometPortfolio) />
    <PortfolioItem item=(boneagePortfolio) />
    <PortfolioItem item=(gameaionePortfolio) />
    <PortfolioItem item=(gameaitwoPortfolio) />
    <PortfolioItem item=(ketawaPortfolio) />
    <PortfolioItem item=(ketawaPortfolio) />
    <PortfolioItem item=(willamalinPortfolio) />
    <PortfolioItem item=(kikiiPortfolio) />
    <PortfolioItem item=(microgamesPortfolio) />
    <PortfolioItem item=(ragaPortfolio) />
    
    </div>
    </MainPage>;
  },
};
