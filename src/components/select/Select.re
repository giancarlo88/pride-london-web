
let component = ReasonReact.statelessComponent("Select");

let make = (~name, ~handleChange, _children:array(ReasonReact.reactElement)) => {
  ...component,
  render: _self =>
    <select name=name onChange=handleChange>
      (_children |> ReasonReact.arrayToElement)
    </select>,
};
