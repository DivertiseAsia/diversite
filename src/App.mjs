// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Links from "./Links.mjs";
import * as React from "react";
import * as Js_dict from "rescript/lib/es6/js_dict.js";
import * as Page404 from "./Pages/Page404.mjs";
import * as PageHome from "./Pages/PageHome.mjs";
import * as Js_option from "rescript/lib/es6/js_option.js";
import * as PageCareers from "./Pages/PageCareers.mjs";
import * as PageContact from "./Pages/PageContact.mjs";
import * as PageOurWork from "./Pages/PageOurWork.mjs";
import * as Router from "next/router";
import * as PageCareersSales from "./Pages/PageCareersSales.mjs";
import * as PageInternshipDev from "./Pages/PageInternshipDev.mjs";
import * as PageCareersDesigner from "./Pages/PageCareersDesigner.mjs";
import * as PageCareersDeveloper from "./Pages/PageCareersDeveloper.mjs";
import * as PageInternshipDesign from "./Pages/PageInternshipDesign.mjs";
import * as PageCareersProjectManager from "./Pages/PageCareersProjectManager.mjs";
import * as PageCareersDeveloperAssignment from "./Pages/PageCareersDeveloperAssignment.mjs";

function $$default(props) {
  var router = Router.useRouter();
  var match = router.route;
  switch (match) {
    case "/" :
        return React.createElement(PageHome.make, {});
    case "/assignments/developer" :
        return React.createElement(PageCareersDeveloperAssignment.make, {});
    case "/careers" :
        return React.createElement(PageCareers.make, {});
    case "/careers/designer" :
        return React.createElement(PageCareersDesigner.make, {});
    case "/careers/developer" :
        return React.createElement(PageCareersDeveloper.make, {});
    case "/careers/projectmanager" :
        return React.createElement(PageCareersProjectManager.make, {});
    case "/careers/sales" :
        return React.createElement(PageCareersSales.make, {});
    case "/contact" :
        return React.createElement(PageContact.make, {});
    case "/internships/design" :
        return React.createElement(PageInternshipDesign.make, {});
    case "/internships/developer" :
        return React.createElement(PageInternshipDev.make, {});
    case "/ourwork" :
        return React.createElement(PageOurWork.make, {
                    selectedCategory: Links.ourwork_link_category(Js_option.getWithDefault("", Js_dict.get(router.query, "category")))
                  });
    default:
      return React.createElement(Page404.make, {});
  }
}

export {
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */
