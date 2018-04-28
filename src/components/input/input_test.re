open Jest;

describe("Input component", () => {
  open Expect;
  test("renders", () => {
    let component = <Input _type="text" name="foo" /> |> Enzyme.shallow;
    expect(Enzyme.length(component)) |> toBe(1);
  });

  test("renders input element", () => {
    let component = <Input _type="text" name="foo" /> |> Enzyme.shallow;
    expect(Enzyme.type_(component)) |> toBe("input");
  });

  test("gets type from _type prop and name from name prop", () => {
    let component = <Input _type="number" name="foo" /> |> Enzyme.shallow;
    let expectedNode = <input _type="number" name="foo" />;
    expect(Enzyme.contains(expectedNode, component)) |> toBe(true);
  })
})
