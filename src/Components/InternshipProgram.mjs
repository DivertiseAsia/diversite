// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Icon from "./Icon.mjs";
import * as React from "react";
import * as Js_option from "rescript/lib/es6/js_option.js";
import Link from "next/link";
import * as ImageBackground from "./ImageBackground.mjs";

function InternshipProgram(Props) {
  var className = Props.className;
  var title = Props.title;
  var imageURL = Props.imageURL;
  var href = Props.href;
  var iconType = Props.iconType;
  return React.createElement("div", {
              className: "col-md-6 col-xs-12 internship-program " + Js_option.getWithDefault("internship-program-default", className)
            }, React.createElement(Link, {
                  href: href,
                  children: React.createElement("a", {
                        className: "internship-list"
                      }, React.createElement("div", {
                            className: "program-list-container -border-radius -bg-color1"
                          }, React.createElement("div", {
                                className: "content-program"
                              }, React.createElement("div", {
                                    className: "d-flex justify-content-center align-items-center"
                                  }, React.createElement(Icon.make, {
                                        iconType: iconType
                                      }), React.createElement("h4", undefined, title)), React.createElement("p", {
                                    className: "read-details"
                                  }, "Read details >")), React.createElement(ImageBackground.make, {
                                src: imageURL
                              })))
                }));
}

var make = InternshipProgram;

export {
  make ,
  
}
/* Icon Not a pure module */
