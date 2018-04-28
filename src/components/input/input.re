
let component = ReasonReact.statelessComponent("Input");

let make = (~_type, ~name, _children) => {
  ...component,
  render: _self =>
    <input _type=_type name=name />,
};
