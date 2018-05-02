
let component = ReasonReact.statelessComponent("Input");

let make = (~inputType, ~name, ~handleChange, _children) => {
  ...component,
  render: self =>
    <input _type=inputType name=name onChange=handleChange/>,
};
