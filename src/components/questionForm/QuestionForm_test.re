open Jest;

describe("QuestionForm component", () => {
  test("renders", () => {
    let component = <QuestionForm /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component)) |> Expect.toBe(1);
  })
})
