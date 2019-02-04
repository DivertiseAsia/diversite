/*
     This is an entry point file.
     Do not add anything here.
 */
let appName = Config.Info.name;
let _ = [%bs.raw "console.log(`${appName}: ${BUILD.VERSION}`)"];

ReactDOMRe.renderToElementWithId(<App />, "container");
