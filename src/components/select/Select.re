
let component = ReasonReact.statelessComponent("Select");

let make = (~name, children:array(ReasonReact.reactElement)) => {
  ...component,
  render: _self =>
    <select name=name>
      (children |> ReasonReact.arrayToElement)
    </select>,
};
