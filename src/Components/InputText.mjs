// Generated by ReScript, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Js_option from "rescript/lib/es6/js_option.js";

function InputText(Props) {
  var className = Props.className;
  var type_ = Props.type_;
  var placeholder = Props.placeholder;
  var inputLabel = Props.inputLabel;
  var isTextareaOpt = Props.isTextarea;
  var name = Props.name;
  var isTextarea = isTextareaOpt !== undefined ? isTextareaOpt : false;
  return React.createElement("div", {
              className: "inputtext " + Js_option.getWithDefault("", className) + (
                isTextarea ? " inputtext-textarea" : ""
              )
            }, React.createElement("label", {
                  className: "inputtext_label",
                  htmlFor: Js_option.getWithDefault("", name)
                }, Js_option.getWithDefault("", inputLabel)), isTextarea ? React.createElement("textarea", {
                    defaultValue: Js_option.getWithDefault("", placeholder),
                    className: "input-default",
                    id: Js_option.getWithDefault("", name)
                  }) : React.createElement("input", {
                    className: "input-default",
                    id: Js_option.getWithDefault("", name),
                    placeholder: Js_option.getWithDefault("", placeholder),
                    type: Js_option.getWithDefault("text", type_)
                  }));
}

var make = InputText;

export {
  make ,
  
}
/* react Not a pure module */
