open Jest;

describe("<Select /> component", () => {
  open Expect;
  test("renders", () => {
    let component = <Select name="foo" /> |> Enzyme.shallow;
    expect(Enzyme.length(component)) |> toBe(1);
  });

  test("renders an input element", () => {
    let component = <Select name="foo"/> |> Enzyme.shallow;
    expect(Enzyme.type_(component)) |> toBe("select");
  });

  test("renders children", () => {
    let component =
      <Select name="foo">
        <option value="foo" key="1">(ReasonReact.stringToElement("foo"))</option>
        <option value="bar" key="2">(ReasonReact.stringToElement("bar"))</option>
      </Select> |> Enzyme.shallow;
    let optionNodes = component |> Enzyme.find("select") |> Enzyme.children;
    expect(optionNodes |> Enzyme.length) |> toBe(2);
  });
});
