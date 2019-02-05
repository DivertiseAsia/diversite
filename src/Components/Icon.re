open ReasonReact;
type iconType =
  | Bag
  | Clock
  | Code
  | Drink
  | Email
  | Facebook
  | Game
  | Linkedin
  | Pen
;

type icon = {
  iconType,
  className: string,
  content: ReasonReact.reactElement,
};

let mapStringToIconType = (icon: string) =>
  switch (Js.String.toLowerCase(icon)) {
  | "bag" => Some(Bag)
  | "clock" => Some(Clock)
  | "code" => Some(Code)
  | "drink" => Some(Drink)
  | "email" => Some(Email)
  | "facebook" => Some(Facebook)
  | "game" => Some(Game)
  | "linkedin" => Some(Linkedin)
  | "pen" => Some(Pen)
  | _ => None
};

let mapIcon = (icon) =>
  switch(icon){
  | Bag => {iconType: Bag, className: "bag", content:(
        <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 54.18 116.64">
            <defs><style>(string(".cls-1{fill:#eaeaea;}.cls-2{fill:#fff;}"))</style></defs>
            <g id="Layer_2"><g id="text">
                <rect className="cls-1" x="2.1" y="108.24" width="13.78" height="8.41" rx="3.99"/>
                <rect className="cls-1" x="38.76" y="108.24" width="13.78" height="8.41" rx="3.99"/>
                <path className="cls-2" d="M50,40.63H4.2A4.2,4.2,0,0,0,0,44.83V104.6a4.2,4.2,0,0,0,4.2,4.21H50a4.21,4.21,0,0,0,4.21-4.21V44.83A4.21,4.21,0,0,0,50,40.63ZM6.42,51.31H47.84v3H6.42Z"/>
                    <rect className="cls-2" x="-0.44" y="21.74" width="38.23" height="4.2" rx="1.99" transform="translate(42.53 5.16) rotate(90)"/>
                    <rect className="cls-2" x="15.85" y="21.74" width="38.23" height="4.2" rx="1.99" transform="translate(58.81 -11.12) rotate(90)"/>
                <path className="cls-1" d="M14.5,0H38.62a2.12,2.12,0,0,1,2.12,2.12v2.4a2.13,2.13,0,0,1-2.12,2.13H14.5a2.12,2.12,0,0,1-2.12-2.12V2.12A2.12,2.12,0,0,1,14.5,0Z"/>
                <path className="cls-1" d="M54.18,90.83V104.6A4.21,4.21,0,0,1,50,108.81H4.2A4.2,4.2,0,0,1,0,104.6V90.83Z"/>
            </g></g>
        </svg>
  )}
  | Clock => {iconType: Clock, className: "clock", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 83.96 83.96">
        <defs><style>(string(".cls-1{fill:#fff;}.cls-2{fill:#eaeaea;}"))</style></defs>
        <g id="Layer_2"><g id="text">
            <path className="cls-1" d="M42,0A42,42,0,1,0,84,42,42,42,0,0,0,42,0Zm0,49.09A7.13,7.13,0,0,1,34.86,42a7,7,0,0,1,1.51-4.34,6.84,6.84,0,0,1,3-2.25V8.69a2.64,2.64,0,0,1,5.27,0V35.38a7.12,7.12,0,0,1,4,4H67.71a2.64,2.64,0,0,1,0,5.27H48.58A7.18,7.18,0,0,1,42,49.09Z"/>
            <path className="cls-2" d="M71,72.29A42,42,0,0,1,11.65,12.92L36.37,37.63A7,7,0,0,0,34.86,42,7.13,7.13,0,0,0,42,49.09a7,7,0,0,0,4.35-1.5Z"/>
        </g></g>
    </svg>
  )}
  | Code => {iconType: Code, className: "code", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 60.43 60.44">
    <defs><style>(string(".cls-1{fill:#eaeaea;}"))</style></defs>
        <g id="Layer_2"><g id="text">
            <path className="cls-1" d="M30.22,60.44a30.25,30.25,0,1,1,7.2-.88A29.52,29.52,0,0,1,30.22,60.44Zm0-56.95A26.73,26.73,0,1,0,56.94,30.22,26.76,26.76,0,0,0,30.22,3.49Z"/>
            <path className="cls-1" d="M14.2,27.94,20,22.87a1.5,1.5,0,0,0,.45-1.65,1.44,1.44,0,0,0-1.35-1,1.16,1.16,0,0,0-1,.42l-6.76,5.9a1.07,1.07,0,0,0-.4.39,1.5,1.5,0,0,0,.1,1.68l5.17,7.47c.11.14.22.26.32.37l.08,0a1.6,1.6,0,0,0,.6.21,1.33,1.33,0,0,0,1-.32,1.18,1.18,0,0,0,.44-.45,1.38,1.38,0,0,0-.06-1.65Z"/>
            <path className="cls-1" d="M50.92,31.17a1,1,0,0,0-.25-.47l-5.13-7.4a1.39,1.39,0,0,0-.92-.66h0a1.43,1.43,0,0,0-1.58.68,1.46,1.46,0,0,0,.05,1.7l4.4,6.32-5.8,5.06A1.44,1.44,0,0,0,41.22,38a1.28,1.28,0,0,0,.29.54,1.32,1.32,0,0,0,.92.56,1.49,1.49,0,0,0,.68-.08,1.13,1.13,0,0,0,.53-.32l6.78-6A1.46,1.46,0,0,0,50.92,31.17Z"/>
            <path className="cls-1" d="M21.08,44.87c-.82-.67-1.43-1.24-.88-2.15L37.47,14.41c.55-.91,1.39-.68,2.3-.12s1.55,1.23,1,2.14L23.5,44.73A1.56,1.56,0,0,1,21.08,44.87Z"/>
        </g></g>
    </svg>
    )}
 | Drink => {iconType: Drink, className: "drink", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 107.73 88.04">
        <defs><style>(string(".cls-1{fill:#fff;}.cls-2{fill:#eaeaea;}"))</style></defs>
        <g id="Layer_2"><g id="text"><rect className="cls-1" x="64.04" y="39.63" width="34.64" height="48.41"/>
            <path className="cls-1" d="M107.73,15.67V11.74H91.32a2,2,0,0,0-1.88,1.41l-4.81,16.3H64v6.88H98.68V29.45h-10L92.8,15.67Z"/>
            <path className="cls-1" d="M53.62,16a3.7,3.7,0,0,1-.07.76H.74A7.91,7.91,0,0,1,0,13.42a8.1,8.1,0,0,1,8.1-8.1,7.84,7.84,0,0,1,2.67.46,3.91,3.91,0,0,1,6.72-.46A6.65,6.65,0,0,1,29.66,3.16a3.39,3.39,0,0,1,1.8-.53A3.33,3.33,0,0,1,34.8,6a3.39,3.39,0,0,1-.07.64,7,7,0,0,1,3.93,2.78,5.46,5.46,0,0,1,10.19,2.75s0,.06,0,.11a3.66,3.66,0,0,1,.88-.11A3.91,3.91,0,0,1,53.62,16Z"/>
            <path className="cls-1" d="4.42 83.08 50.45 83.08 50.26 86.91 4.61 86.91 4.42 83.08"/>
            <path className="cls-2" d="1.78 30.82 53.08 30.82 50.65 79.27 4.22 79.27 1.78 30.82"/>
            <path className="cls-2" d="53.63 20.11 53.28 27 1.59 27 1.24 20.11 53.63 20.11"/>
        </g></g>
    </svg>
 )}
 | Email => {iconType: Email, className: "email", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 60.06 60.06">
        <defs><style>(string(".cls-1{fill:#78d5cb;}"))</style></defs>
        <g id="Layer_2"><g id="bg">
            <polygon className="cls-1" points="30.03 28.74 19.71 20.33 40.34 20.33 30.03 28.74"/>
            <path className="cls-1" d="M31.45,33.36,43.9,23.21V39.74H16.16V23.21L28.61,33.36a2.23,2.23,0,0,0,2.84,0Z"/>
            <path className="cls-1" d="M30,0a30,30,0,1,0,30,30A30,30,0,0,0,30,0ZM48,40.14a3.68,3.68,0,0,1-3.68,3.68H15.75a3.68,3.68,0,0,1-3.68-3.68V19.92a3.78,3.78,0,0,1,3.68-3.68H44.31A3.6,3.6,0,0,1,48,19.92Z"/>
        </g></g>
    </svg>
 )}
 | Facebook => {iconType: Facebook, className: "facebook", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 60.06 60.06">
        <defs><style>(string(".cls-1{fill:#78d5cb;}"))</style></defs>
        <g id="Layer_2"><g id="bg">
            <path className="cls-1" d="M30,0a30,30,0,1,0,30,30A30,30,0,0,0,30,0ZM38.3,18.37H33.94a1.66,1.66,0,0,0-1.73,1.88v4.06h6.07l-.7,6.89H32.21V50.83H24.1V31.2H20.23V24.3H24.1V19.84c0-3.2,1.52-8.2,8.19-8.2l6,0Z"/>
        </g></g>
    </svg>
 )}
 | Game => {iconType: Game, className: "game", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 107.33 58.11">
        <defs><style>(string(".cls-1{fill:#eaeaea;}.cls-2{fill:#fff;}"))</style></defs>
        <g id="Layer_2"><g id="text"><path className="cls-1" d="M105.77,33.05l-2.1-4.66-8-17.9A17.75,17.75,0,0,0,67,5H40.3a17.53,17.53,0,0,0-5.11-3.49,17.85,17.85,0,0,0-23.51,8.94l-8,17.9-2.1,4.66A17.79,17.79,0,1,0,34,47.62l.77-1.72,4-9H68.52l4,9,.78,1.73a17.78,17.78,0,1,0,32.43-14.57ZM33.28,21.91h-4.6v4.6a1.72,1.72,0,0,1-1.26,1.65,1.51,1.51,0,0,1-.44.06,1.71,1.71,0,0,1-1.7-1.71v-4.6h-4.6a1.7,1.7,0,1,1,0-3.39h4.6V13.91A1.7,1.7,0,0,1,27,12.2a1.5,1.5,0,0,1,.44.07,1.69,1.69,0,0,1,1.26,1.64v4.61h4.6a1.7,1.7,0,1,1,0,3.39Zm52.51-4.18a2.49,2.49,0,1,1-2.47,2.48A2.49,2.49,0,0,1,85.79,17.73Zm-5.05-5.05a2.48,2.48,0,1,1-2.48,2.49A2.49,2.49,0,0,1,80.74,12.68Zm0,10.1a2.49,2.49,0,1,1-2.48,2.48A2.48,2.48,0,0,1,80.74,22.78Zm-5-5.05a2.49,2.49,0,1,1-2.48,2.48A2.47,2.47,0,0,1,75.69,17.73Z"/>
        <path className="cls-2" d="M95.64,10.49A17.75,17.75,0,0,0,67,5H40.3a17.53,17.53,0,0,0-5.11-3.49,17.85,17.85,0,0,0-23.51,8.94l-8,17.9C10,36.48,21.17,42.81,34.77,45.9l4-9H68.52l4,9c13.59-3.08,24.74-9.41,31.11-17.5ZM33.28,21.91h-4.6v4.6a1.72,1.72,0,0,1-1.26,1.65,1.51,1.51,0,0,1-.44.06,1.71,1.71,0,0,1-1.7-1.71v-4.6h-4.6a1.7,1.7,0,1,1,0-3.39h4.6V13.91A1.7,1.7,0,0,1,27,12.2a1.5,1.5,0,0,1,.44.07,1.69,1.69,0,0,1,1.26,1.64v4.61h4.6a1.7,1.7,0,1,1,0,3.39Zm42.41.79a2.49,2.49,0,1,1,2.48-2.49A2.49,2.49,0,0,1,75.69,22.7Zm5,5.05a2.49,2.49,0,1,1,2.48-2.49A2.49,2.49,0,0,1,80.74,27.75Zm0-10.11a2.48,2.48,0,1,1,2.48-2.47A2.47,2.47,0,0,1,80.74,17.64Zm5.05,5.06a2.49,2.49,0,1,1,2.49-2.49A2.48,2.48,0,0,1,85.79,22.7Z"/>
        </g></g>
    </svg>
 )}
 | Linkedin => {iconType: Linkedin, className: "linkedIn", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 60.06 60.06">
        <defs><style>(string(".cls-1{fill:#78d5cb;}"))</style></defs>
        <g id="Layer_2"><g id="bg">
        <path className="cls-1" d="M33.2,26.36h0v-.07A.43.43,0,0,1,33.2,26.36Zm0,0h0v-.07A.43.43,0,0,1,33.2,26.36ZM30,0a30,30,0,1,0,30,30A30,30,0,0,0,30,0ZM22.09,44.83H14.92V23.24h7.17ZM18.5,20.29h-.05a3.74,3.74,0,1,1,.1-7.46,3.74,3.74,0,1,1-.05,7.46ZM48,44.83H40.8V33.27c0-2.9-1-4.88-3.64-4.88A3.9,3.9,0,0,0,33.48,31a4.75,4.75,0,0,0-.24,1.76V44.83H26.05s.1-19.57,0-21.59h7.19v3.05a7.11,7.11,0,0,1,6.46-3.57c4.73,0,8.27,3.09,8.27,9.72ZM33.24,26.36v-.07a.43.43,0,0,1,0,.07Zm0,0h0v-.07A.43.43,0,0,1,33.2,26.36Zm0,0h0v-.07A.43.43,0,0,1,33.2,26.36Z"/>
        </g></g>
    </svg>
 )}
 | Pen => {iconType: Pen, className: "pen", content:(
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 60.32 60.33">
        <defs><style>(string(".cls-1{fill:#2d506d;}"))</style></defs>
        <g id="Layer_2"><g id="text">
        <path className="cls-1" d="M36.8,45.25l.39,12.93a29,29,0,0,1-7,.85,29.78,29.78,0,0,1-7-.85l.39-12.93L22.38,30.06a.58.58,0,0,1,.58-.63H37.19a.73.73,0,0,1,.73.78Z"/>
        <path className="cls-1" d="M32.64,16.32h-5l.81-2.89a.71.71,0,0,1,.66-.5h2a.7.7,0,0,1,.68.52Z"/>
        <polygon className="cls-1" points="37.99 27.82 22.33 27.82 27.26 17.3 33.06 17.3 37.99 27.82"/>
        <path className="cls-1" d="M29.65,8.84h.93a.74.74,0,0,1,.75.74V11.5a.51.51,0,0,1-.51.51H29.4a.51.51,0,0,1-.51-.51V9.59A.76.76,0,0,1,29.65,8.84Z"/>
        <path className="cls-1" d="M30.17,60.33a30.16,30.16,0,1,1,7.18-.87A29.41,29.41,0,0,1,30.17,60.33Zm0-56.85A26.69,26.69,0,1,0,56.84,30.17,26.72,26.72,0,0,0,30.17,3.48Z"/>
        </g></g>
    </svg>
 )}
}

let component = ReasonReact.statelessComponent("IconRe");

let make = ( ~iconType, ~className=?, _children) => {
  ...component,
  render: _self => {
    let icon = mapIcon(iconType);
    <span className=("icon icon-" ++ icon.className ++ " " ++ Js.Option.getWithDefault("", className))>
      (icon.content)
    </span>
  }
};