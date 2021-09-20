import PageCareersDeveloperRes from "src/Pages/PageCareersDeveloper.mjs";

// Note:
// We need to wrap the make call with
// a Fast-Refresh conform function name,
// (in this case, uppercased first letter)
//
// If you don't do this, your Fast-Refresh will
// not work!
export default function Developer(props) {
  return <PageCareersDeveloperRes {...props} />;
}