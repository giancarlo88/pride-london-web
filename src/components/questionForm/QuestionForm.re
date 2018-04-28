type state = {
  name: string,
  subject: string,
  question: string,
  email: string,
};

type action =
  | Update;

let component = ReasonReact.reducerComponent("QuestionForm");

let make = (_children) => {
...component,

initialState: () => {name: "", subject: "", question: "", email: ""},

reducer: (action, state) => {
  switch(action){
  | Update => ReasonReact.Update({...state, name: "foo" });
  }
},

render: self => {
  <div>
    <form>
      <input _type="text" name="name"/>
      <select name="subject">
        <option value="foo">(ReasonReact.stringToElement("foo"))</option>
        <option value="bar">(ReasonReact.stringToElement("bar"))</option>
      </select>
      <input _type="text" name="question" />
      <input _type="email" name="email" />
    </form>
  </div>;
},
};

