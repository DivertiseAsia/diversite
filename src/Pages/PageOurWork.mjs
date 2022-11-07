// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Curry from "rescript/lib/es6/curry.js";
import * as Links from "../Links.mjs";
import * as Popup from "../Components/Popup.mjs";
import * as React from "react";
import * as MainPage from "../Components/MainPage.mjs";
import Link from "next/link";
import * as PortfolioData from "../Data/PortfolioData.mjs";
import * as PortfolioItem from "../Components/PortfolioItem.mjs";

function PageOurWork(Props) {
  var selectedCategory = Props.selectedCategory;
  var match = React.useState(function () {
        return false;
      });
  var setPopupOpen = match[1];
  var isPopupOpen = match[0];
  var portfolioCategoryLink = function (category, text, tooltip) {
    var selectedClass = category === selectedCategory ? "selected" : "";
    return React.createElement(Link, {
                href: Links.ourwork_link(category),
                children: React.createElement("a", {
                      className: "port-filter " + selectedClass
                    }, React.createElement("span", {
                          className: "hidden-md-down"
                        }, text), React.createElement("span", {
                          className: "hidden-lg-up"
                        }, tooltip)),
                key: text
              });
  };
  var tmp;
  switch (selectedCategory) {
    case /* All */0 :
        tmp = "all";
        break;
    case /* AI */1 :
        tmp = "ai";
        break;
    case /* Other */2 :
        tmp = "other";
        break;
    case /* Design */3 :
        tmp = "design";
        break;
    case /* AppPlatforms */4 :
        tmp = "appsandplatforms";
        break;
    
  }
  var additional_classname = "port-" + tmp;
  return React.createElement(MainPage.make, {
              className: "page-ourwork " + additional_classname,
              title: "Work of Divertise Asia",
              keywords: "portfolio, Artificial Intelligence, Design, Fullstack, API, Server",
              description: "AI, Apps & Platforms, and Design items created by us",
              children: null
            }, React.createElement("div", {
                  className: "ourwork_section-header-content bg-gradient-color1"
                }, React.createElement("div", {
                      className: "container page-ourwork_nav nav"
                    }, React.createElement("h3", {
                          className: "text-white letter-spacing -text-uppercase -text-header-shadow"
                        }, "Portfolio"), portfolioCategoryLink(/* All */0, "All Projects", "All"), portfolioCategoryLink(/* AI */1, "AI Project", "AI"), portfolioCategoryLink(/* AppPlatforms */4, "Apps & Platforms", "Apps"), portfolioCategoryLink(/* Design */3, "Design Projects", "Design"), portfolioCategoryLink(/* Other */2, "Other Projects", "Others"))), React.createElement("div", {
                  className: "ourwork_section-header section-header bg-gradient-color1"
                }), React.createElement("div", {
                  className: "buffer"
                }), React.createElement("div", {
                  className: "downloadport-btn btn btn-line-color1",
                  onClick: (function (param) {
                      return Curry._1(setPopupOpen, (function (param) {
                                    return !isPopupOpen;
                                  }));
                    })
                }, "Download Port"), React.createElement(Popup.make, {
                  isOpen: isPopupOpen,
                  className: "downloadport-popup",
                  hasCloseBtn: true,
                  closeBtnText: "Not Now",
                  closeOnBgClick: true,
                  showX: false,
                  closeFunc: (function (param) {
                      return Curry._1(setPopupOpen, (function (param) {
                                    return false;
                                  }));
                    }),
                  children: null
                }, React.createElement("p", undefined, "Please add your email. We will send you our portfolio."), React.createElement("form", {
                      className: "downloadport-form",
                      action: "https://formspree.io/f/mbjpklyn",
                      method: "POST"
                    }, React.createElement("input", {
                          className: "input-default",
                          name: "email",
                          placeholder: "Your Email",
                          type: "email"
                        }), React.createElement("button", {
                          className: "btn btn-solid-color1",
                          type: "submit"
                        }, "Submit"))), React.createElement("div", undefined, React.createElement(PortfolioItem.make, {
                      item: PortfolioData.bettercastPortfolio,
                      key: "bettercast"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.plateupPortfolio,
                      key: "plateup"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.mintcrowdPortfolio,
                      key: "mintcrowd"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.safemodePortfolio,
                      key: "safemode"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.adsoupPortfolio,
                      key: "adsoup"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.copanelPortfolio,
                      key: "copanel"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.eventcometPortfolio,
                      key: "eventcomet"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.boneagePortfolio,
                      key: "boneage"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.traitsignalPortfolio,
                      key: "traitsignal"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.vrPortfolio,
                      key: "vr"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.ketawaPortfolio,
                      key: "ketawa"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.alldaytattooPortfolio,
                      key: "alldaytattoo"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.halalblockvideoPortfolio,
                      key: "halalblockvideo"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.traitsignalvideoPortfolio,
                      key: "traitsignalvideo"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.adsoupvideoPortfolio,
                      key: "adsoupvideo"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.wilaamalinPortfolio,
                      key: "willamailn"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.eastwestPortfolio,
                      key: "eastwest"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.kikiiPortfolio,
                      key: "kikii"
                    }), React.createElement(PortfolioItem.make, {
                      item: PortfolioData.microgamesPortfolio,
                      key: "micro"
                    })));
}

var make = PageOurWork;

export {
  make ,
  
}
/* Popup Not a pure module */
