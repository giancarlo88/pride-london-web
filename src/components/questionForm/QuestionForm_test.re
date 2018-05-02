open Jest;

describe("QuestionForm component", () => {
  open Expect;
  test("renders", () => {
    let component = <QuestionForm /> |> Enzyme.shallow;
    expect(Enzyme.length(component)) |> toBe(1);
  });

  test("renders three <Input/> components", () => {
    let component = <QuestionForm /> |> Enzyme.shallow;
    let inputNodes = component |> Enzyme.find("Input");
    expect(inputNodes |> Enzyme.length) |> toBe(3);
  });

  test("renders a <Select /> component ", () => {
    let component = <QuestionForm /> |> Enzyme.shallow;
    let selectNode = component |> Enzyme.find("Select");
    expect(selectNode |> Enzyme.length) |> toBe(1);
  });

  /* test("updating state", () => {
    let component = <QuestionForm /> |> Enzyme.shallow;
    component |> Enzyme.find("Input") |> Enzyme.at(0) |> Enzyme.simulate1("change", { event: { target: {value:"foo"}}});
    let {name}: QuestionForm.state = Enzyme.state(component);
    expect(name) |> toBe("foo");
  }); */
});
