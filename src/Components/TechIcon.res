open React

type techIconType =
  | HTML5
  | Python
  | Android
  | Circleci
  | Cocos
  | CSS
  | Django
  | Docker
  | Firebase
  | Git
  | Ios
  | Js
  | Nodejs
  | Postgresql
  | Pandas
  | Reason
  | React
  | Ruby
  | Scikitlearn
  | Tensorflow
  | Unity
  | Wordpress
  | Other(string, string)

type techIcon = {
  techIconType: techIconType,
  className: string,
  content: React.element,
}

let mapStringToTechIconType = (icon: string) =>
  switch Js.String.toLowerCase(icon) {
  | "python" => Python
  | "html5" => HTML5
  | "android" => Android
  | "circleci" => Circleci
  | "cocos" => Cocos
  | "css" => CSS
  | "django" => Django
  | "docker" => Docker
  | "firebase" => Firebase
  | "git" => Git
  | "ios" => Ios
  | "js" => Js
  | "nodejs" => Nodejs
  | "postgresql" => Postgresql
  | "pandas" => Pandas
  | "reason" => Reason
  | "react" => React
  | "unity" => Unity
  | "ruby" => Ruby
  | "scikitlearn" => Scikitlearn
  | "tensorflow" => Tensorflow
  | "wordpress" => Wordpress
  | "brand Identity"
  | "graphic design"
  | "2d animation"
  | "web design"
  | "game design"
  | "2d art" =>
    Other(icon, "color2")
  | "story board" => Other(icon, "color2")
  | "video editing" => Other(icon, "color2")
  | "c++"
  | "aws"
  | "html"
  | "vr"
  | "ai" =>
    Other(icon, "text-big")
  | "ux"
  | "ui" =>
    Other(icon, "color2-text-big")
  | x => Other(x, x)
  }

let mapIcon = icon =>
  switch icon {
  | HTML5 => {
      techIconType: icon,
      className: "html5",
      content: <ImageBackground src="/static/images/tech-icon/html5-logo.png" />,
    }
  | Python => {
      techIconType: icon,
      className: "python",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_python.png" />,
    }
  | Android => {
      techIconType: icon,
      className: "android",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_android.png" />,
    }
  | Circleci => {
      techIconType: icon,
      className: "circleci",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_circleci.png" />,
    }
  | Cocos => {
      techIconType: icon,
      className: "cocos",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_cocos.png" />,
    }
  | CSS => {
      techIconType: icon,
      className: "css",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_css.png" />,
    }
  | Django => {
      techIconType: icon,
      className: "django",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_django.png" />,
    }
  | Docker => {
      techIconType: icon,
      className: "docker",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_docker.png" />,
    }
  | Firebase => {
      techIconType: icon,
      className: "firebase",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_firebase.png" />,
    }
  | Git => {
      techIconType: icon,
      className: "git",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_git.png" />,
    }
  | Ios => {
      techIconType: icon,
      className: "ios",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_ios.png" />,
    }
  | Nodejs => {
      techIconType: icon,
      className: "nodejs",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_nodejs.png" />,
    }
  | Js => {
      techIconType: icon,
      className: "js",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_js.png" />,
    }
  | Postgresql => {
      techIconType: icon,
      className: "postgresql",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_postgresql.png" />,
    }
  | Pandas => {
      techIconType: icon,
      className: "pandas",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_pandas.png" />,
    }
  | Reason => {
      techIconType: icon,
      className: "reason",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_reason.png" />,
    }
  | React => {
      techIconType: icon,
      className: "react",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_react.png" />,
    }
  | Ruby => {
      techIconType: icon,
      className: "ruby",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_ruby.png" />,
    }
  | Scikitlearn => {
      techIconType: icon,
      className: "scikitlearn",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_scikitlearn.png" />,
    }
  | Tensorflow => {
      techIconType: icon,
      className: "tensorflow",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_tensorflow.png" />,
    }
  | Unity => {
      techIconType: icon,
      className: "unity",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_unity.png" />,
    }
  | Wordpress => {
      techIconType: icon,
      className: "wordpress",
      content: <ImageBackground src="/static/images/tech-icon/tech-icon_wordpress.png" />,
    }

  | Other(x, className) => {
      techIconType: icon,
      className: className,
      content: <h6> {string(x)} </h6>,
    }
  }

@react.component
let make = (~tech: string, ~className=?) => {
  let techIconType = mapStringToTechIconType(tech)
  let icon = mapIcon(techIconType)

  <div
    className={"tech-icon tech-icon-" ++
    icon.className ++
    " " ++
    Js.Option.getWithDefault("", className)}>
    {icon.content}
  </div>
}
