// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Links from "../Links.mjs";
import * as React from "react";
import * as MainPage from "../Components/MainPage.mjs";
import * as ImageBackground from "../Components/ImageBackground.mjs";
import * as FrontPageSection from "../Components/FrontPageSection.mjs";

import dynamic from "next/dynamic";

const Carousel = dynamic(() => import("../Components/Carousel.mjs").then(mod => mod.make), {
  ssr: false,
});
;
;

function PageHome(Props) {
  var carousel = Carousel;
  return React.createElement(MainPage.make, {
              className: "page-home",
              title: "Get Launched with Divertise Asia",
              keywords: "Artificial Intelligence, Design, Fullstack, API, Server",
              description: "Realize your technical project with Divertise Asia as your partner",
              children: null
            }, React.createElement(carousel, {}), React.createElement("div", {
                  className: "homepage_menu-bg"
                }), React.createElement("div", {
                  className: "section-ourgoal -text-center"
                }, React.createElement("div", {
                      className: "container"
                    }, React.createElement("h3", {
                          className: "pt-5"
                        }, "Our goal is to be the technical partner for startups in Asia"), React.createElement("p", {
                          className: "pt-3 pb-5"
                        }, "especially those wanting to specialize in Artificial Intelligence, Games & VR, and other cutting-edge technologies."), React.createElement("div", {
                          className: "row flex-wrap justify-content-center"
                        }, React.createElement("div", {
                              className: "col-sm-4 pb-5 -text-center"
                            }, React.createElement(ImageBackground.make, {
                                  className: "mb-3",
                                  src: "/static/images/icon-platforms.png"
                                }), React.createElement("h6", undefined, "Application & Web Platform Development")), React.createElement("div", {
                              className: "col-sm-4 pb-5 -text-center"
                            }, React.createElement(ImageBackground.make, {
                                  className: "mb-3",
                                  src: "/static/images/icon-ai.png"
                                }), React.createElement("h6", undefined, "Data Driven Services including Artificial Intelligence")), React.createElement("div", {
                              className: "col-sm-4 pb-5 -text-center"
                            }, React.createElement(ImageBackground.make, {
                                  className: "mb-3",
                                  src: "/static/images/icon-vr.png"
                                }), React.createElement("h6", undefined, "Digital Experiences including Virtual Reality"))))), React.createElement("div", {
                  className: "section-ourwork-header"
                }, React.createElement("div", {
                      className: "container -text-center -text-uppercase pb-5 pt-5"
                    }, React.createElement("h3", undefined, "What We Create"))), React.createElement("div", undefined, React.createElement(FrontPageSection.make, {
                      title: "Application and Platforms",
                      imageURL: "/static/images/home-app.png",
                      href: Links.ourwork_link(/* AppPlatforms */4),
                      prefixTitle: "app",
                      children: "We create entire platforms and services from the ground up. These platforms typically live in a combination of places from app stores to the cloud."
                    }), React.createElement(FrontPageSection.make, {
                      title: "Artificial Intelligence",
                      imageURL: "/static/images/home-ai-3.png",
                      href: Links.ourwork_link(/* AI */1),
                      prefixTitle: "ai",
                      children: "Newer applications and services should always be considering AI into their product. Everyone at Divertise Asia learns how to use AI and we make sure we offer it to everyone we work with."
                    }), React.createElement(FrontPageSection.make, {
                      title: "Websites",
                      imageURL: "/static/images/home-website.png",
                      href: Links.ourwork_link(/* Design */3),
                      prefixTitle: "web",
                      children: "The world runs on the web and we can produce any website needed for it. We aim to create a balance between user content management and speed of development."
                    }), React.createElement(FrontPageSection.make, {
                      title: "Virtual Reality",
                      imageURL: "/static/images/home-vr.png",
                      href: Links.ourwork_link(/* Other */2),
                      prefixTitle: "vr",
                      children: "Creating applications in VR/AR will be one of the next big things. We are looking for ways to be at the forefront of the technology and have partnered with other companies in Asia to bring VR applications to life."
                    }), React.createElement(FrontPageSection.make, {
                      title: "Games",
                      imageURL: "/static/images/home-game.png",
                      href: Links.ourwork_link(/* Other */2),
                      prefixTitle: "game",
                      children: "We love bringing more fun into the world! We have made two of our own games and occasionally have internal game jams"
                    })), React.createElement("div", {
                  className: "section-letushelp"
                }, React.createElement("div", {
                      className: "container -text-center"
                    }, React.createElement("h3", {
                          className: "-text-uppercase pb-5 pt-5"
                        }, "Let Us Help You"), React.createElement("div", {
                          className: "row"
                        }, React.createElement("div", {
                              className: "col-sm-12 col-md-4 letushelp_col"
                            }, React.createElement("div", undefined, React.createElement("h5", undefined, "Tech Consultant"), React.createElement(ImageBackground.make, {
                                      src: "/static/images/letushelp-tech.png"
                                    }), React.createElement("p", undefined, "There are a lot of options with technology, we will work with you to help you choose the best way forward"))), React.createElement("div", {
                              className: "col-sm-12 col-md-4 letushelp_col"
                            }, React.createElement("div", undefined, React.createElement("h5", undefined, "Launch your idea"), React.createElement(ImageBackground.make, {
                                      src: "/static/images/letushelp-optimize.png"
                                    }), React.createElement("p", undefined, "If you have a product idea but don't know where to begin, our team of developers will help make your idea come to live."))), React.createElement("div", {
                              className: "col-sm-12 col-md-4 letushelp_col"
                            }, React.createElement("div", undefined, React.createElement("h5", undefined, "Business Optimization"), React.createElement(ImageBackground.make, {
                                      src: "/static/images/letushelp-launch.png"
                                    }), React.createElement("p", undefined, "We work with you to bring technology to the parts of your business that will have the most impact ")))))));
}

var make = PageHome;

export {
  make ,
  
}
/*  Not a pure module */
