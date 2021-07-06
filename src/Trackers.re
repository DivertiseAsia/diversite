let _gaLoad = () => [%bs.raw
  {|
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
    (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','https://www.google-analytics.com/analytics.js','ga')
  |}
];

let ga: (string, string, string) => unit = [%bs.raw
  {|
    function(param1, param2, param3) {
      try {
        if (!window.ga) {
          console.warn("no ga detected");
          return;
        }
        if (param3) {
          console.log('ga('+param1+','+param2+','+param3+')');
          window.ga(param1, param2, param3);
        } else {
          console.log('ga('+param1+','+param2+')');
          window.ga(param1, param2);
        }
      } catch(e) {
        console.warn(e);
      }
      
    }
  |}
];

let gaInit = (gaId:string) => {
  switch (gaId) {
    | "" => Js.log("No ga id")
    | id => {
      ga("create", id, "auto")
    }
  }
};