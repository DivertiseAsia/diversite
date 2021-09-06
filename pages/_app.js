import "styles/style.scss"
import Head from "next/head"
// Note:
// Just renaming $$default to ResApp alone
// doesn't help FastRefresh to detect the
// React component, since an alias isn't attached
// to the original React component function name.
import ResApp from "src/App.mjs"

// Note:
// We need to wrap the make call with
// a Fast-Refresh conform function name,
// (in this case, uppercased first letter)
//
// If you don't do this, your Fast-Refresh will
// not work!
export default function App(props) {
  return <>
    <Head>
      <meta key="httpeq" httpEquiv="X-UA-Compatible" content="IE=edge,chrome=1" />
      <link key="fa" rel="stylesheet" href="https://use.fontawesome.com/releases/v5.4.1/css/all.css" integrity="sha384-5sAR7xN1Nv6T6+dT2mhtzEpVJvfS3NScPQTrOxhwjIuvcA67KV2R5Jz6kr4abQsz" crossOrigin="anonymous" />
      <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />
      <link key="bootstra" rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossOrigin="anonymous" />
      <link key="font" rel="stylesheet" media="screen" href="https://fontlibrary.org/face/orkney" type="text/css" />
      <meta key="viewport" name="viewport" content="width=device-width, initial-scale=1.0" />
    </Head>
    <ResApp {...props} />
  </>
}