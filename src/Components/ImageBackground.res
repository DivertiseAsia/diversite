open Next;
@react.component
let make = (~className: option<string>=?, ~src:string) => {
    <Image
      ?className
      src
      layout="fill"
      objectFit="cover"
    />
};