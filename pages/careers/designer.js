import PageCareersDesignerRes from "src/Pages/PageCareersDesigner.mjs";

// Note:
// We need to wrap the make call with
// a Fast-Refresh conform function name,
// (in this case, uppercased first letter)
//
// If you don't do this, your Fast-Refresh will
// not work!
export default function Designer(props) {
  return <PageCareersDesignerRes {...props} />;
}