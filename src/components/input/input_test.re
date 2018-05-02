open Jest;



describe("Input component", () => {
  open Expect;
  test("renders", () => {
    let component = <Input inputType="text" name="foo" handleChange={(_event) => ()} /> |> Enzyme.shallow;
    expect(Enzyme.length(component)) |> toBe(1);
  });

  test("renders an input element", () => {
    let component = <Input inputType="text" name="foo" handleChange={(_event) => ()}/> |> Enzyme.shallow;
    expect(Enzyme.type_(component)) |> toBe("input");
  });

  /* test("gets type from inputType prop and name from name prop", () => {
    let component = <Input inputType="number" name="foo" handleChange={(_event) => ()}/> |> Enzyme.shallow;
    let renderedNode = component |> Enzyme.find("input") |> Enzyme.first;
    expect(Enzyme.(expectedNode, renderedNode)) |> toBe(true)
  }) */
})
