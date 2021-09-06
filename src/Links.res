let home = "/"
let careers = "/careers"
let contact = "/contact"
let careersdesigner = "/careers/designer"
let careersdeveloper = "/careers/developer"
let internshipdesign = "/internships/design"
let internshipdeveloper = "/internships/developer"
let ourwork = "/ourwork"

let ourwork_link = (category: DataTypes.PortfolioItem.category) => {
  ourwork ++
  "?category=" ++
  switch category {
  | All => "all"
  | AI => "ai"
  | AppPlatforms => "appsandplatforms"
  | Design => "design"
  | Other => "other"
  }
}

let ourwork_link_category = (link: string): DataTypes.PortfolioItem.category => {
  switch link {
  | "ai" => AI
  | "appsandplatforms" => AppPlatforms
  | "design" => Design
  | "other" => Other
  | "all" | _ => All
  }
}
