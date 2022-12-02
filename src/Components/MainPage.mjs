// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Logo from "./Logo.mjs";
import * as Curry from "rescript/lib/es6/curry.js";
import * as Links from "../Links.mjs";
import * as Popup from "./Popup.mjs";
import * as React from "react";
import * as Js_option from "rescript/lib/es6/js_option.js";
import Head from "next/head";
import Link from "next/link";
import * as ContactForm from "./ContactForm.mjs";

function MainPage(Props) {
  var className = Props.className;
  var title = Props.title;
  var keywords = Props.keywords;
  var description = Props.description;
  var isPageOurWork = Props.isPageOurWork;
  var isPageHome = Props.isPageHome;
  var children = Props.children;
  var match = React.useState(function () {
        return false;
      });
  var setPopupBuildOpen = match[1];
  var isPopupBuildOpen = match[0];
  return React.createElement("div", undefined, React.createElement(Head, {
                  children: null
                }, React.createElement("title", {
                      lang: "en"
                    }, title), React.createElement("meta", {
                      content: description,
                      name: "description"
                    }), React.createElement("meta", {
                      content: keywords,
                      name: keywords
                    })), React.createElement("div", {
                  className: "page page-has-top " + Js_option.getWithDefault("mainpage-default", className)
                }, React.createElement("div", {
                      className: "page-end-container page-end-top"
                    }, React.createElement("div", {
                          className: "page-end page-end-0"
                        }, React.createElement("div", {
                              className: "page-children"
                            }, React.createElement("nav", {
                                  className: "nav -text-right"
                                }, React.createElement("div", {
                                      className: "container-lg"
                                    }, React.createElement(Logo.make, {}), React.createElement("div", {
                                          className: "nav-container"
                                        }, React.createElement(Link, {
                                              href: Links.home,
                                              children: "Home"
                                            }), React.createElement(Link, {
                                              href: Links.ourwork,
                                              children: "Our Work"
                                            }), React.createElement(Link, {
                                              href: Links.careers,
                                              children: "Careers"
                                            }), React.createElement(Link, {
                                              href: Links.contact,
                                              children: "Contact Us"
                                            }), React.createElement("div", {
                                              className: "buildyourideas-btn btn btn-line-white",
                                              onClick: (function (param) {
                                                  return Curry._1(setPopupBuildOpen, (function (param) {
                                                                return !isPopupBuildOpen;
                                                              }));
                                                })
                                            }, "Build Your Ideas")), Js_option.getWithDefault(false, isPageOurWork) || Js_option.getWithDefault(false, isPageHome) ? React.createElement(React.Fragment, undefined) : React.createElement("div", {
                                            className: "buildyourideas-btn btn btn-line-color1 d-inline-block d-sm-none",
                                            onClick: (function (param) {
                                                return Curry._1(setPopupBuildOpen, (function (param) {
                                                              return !isPopupBuildOpen;
                                                            }));
                                              })
                                          }, "Build Your Ideas"))), React.createElement(Popup.make, {
                                  isOpen: isPopupBuildOpen,
                                  className: "buildyouridea-popup",
                                  closeOnBgClick: false,
                                  closeFunc: (function (param) {
                                      return Curry._1(setPopupBuildOpen, (function (param) {
                                                    return false;
                                                  }));
                                    }),
                                  children: null
                                }, React.createElement("div", undefined, React.createElement("h3", undefined, "Build Your Ideas"), React.createElement("p", undefined, "Tell us about what you need. We will get back to you within 1 working day")), React.createElement(ContactForm.make, {
                                      prefixId: "navbar"
                                    }))))), React.createElement("div", {
                      key: "children",
                      className: "page-content-container",
                      id: "content-container"
                    }, React.createElement("div", {
                          className: "page-content"
                        }, React.createElement("div", {
                              className: "main-content"
                            }, children), React.createElement("div", {
                              className: "footer"
                            }, React.createElement("div", {
                                  className: "social-media"
                                }, React.createElement("a", {
                                      className: "icon-social social-fb",
                                      href: "https://www.facebook.com/DivertiseAsia/",
                                      target: "_blank"
                                    }, React.createElement("img", {
                                          alt: "Facebook's logo",
                                          src: "/static/images/facebook.svg"
                                        })), React.createElement("a", {
                                      className: "icon-social",
                                      href: "https://www.linkedin.com/company/divertiseasia",
                                      target: "_blank"
                                    }, React.createElement("img", {
                                          alt: "LinkedIn's logo",
                                          src: "/static/images/linkedin.svg"
                                        })), React.createElement("a", {
                                      className: "icon-social",
                                      href: "mailto:contact@divertise.asia"
                                    }, React.createElement("img", {
                                          alt: "Mail logo",
                                          src: "/static/images/email.svg"
                                        }))), React.createElement("p", undefined, "ⓒ 2017-2022 Divertise Asia Co.,Ltd."))))));
}

var make = MainPage;

export {
  make ,
  
}
/* Logo Not a pure module */
