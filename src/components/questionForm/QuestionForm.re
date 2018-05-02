type state = {
  name: string,
  subject: string,
  question: string,
  email: string,
};

let preventDefault(event) = {
  ReactEventRe.Form.preventDefault(event);
};


type action =
  | Update(string, string)
  | Submit;

let component = ReasonReact.reducerComponent("QuestionForm");

let make = (_children) => {
...component,

initialState: () => {name: "", subject: "", question: "", email: ""},

reducer: (action, state) => {
  switch(action){
  | Update(field, value) => {
      switch field {
      | "name" => ReasonReact.Update({...state, name: value })
      | "subject" => ReasonReact.Update({...state, subject: value })
      | "question" => ReasonReact.Update({...state, question: value })
      | "email" => ReasonReact.Update({...state, email: value })
      | _ => ReasonReact.Update({state})
      }
  }
  | Submit => {
    Js.log("The form should submit this info:");
    Js.log(state);
    ReasonReact.Update({state})
  }
  }
},

render: self => {
  <div>
    <form onSubmit=(
      _event => {
        ReactEventRe.Form.preventDefault(_event);
        self.send(
          Submit
        )
      })>
      <Input inputType="text" handleChange=(_event => self.send(
        Update(
          "name",
          ReactDOMRe.domElementToObj(ReactEventRe.Form.target(_event))##value,),
        )) name="name"/>
      <Select name="subject" handleChange=(_event => self.send(
        Update(
          "subject",
          ReactDOMRe.domElementToObj(ReactEventRe.Form.target(_event))##value,),
        ))>
        <option value="foo">(ReasonReact.stringToElement("foo"))</option>
        <option value="bar">(ReasonReact.stringToElement("bar"))</option>
      </Select>
      <Input inputType="text" name="question" handleChange={_event => self.send(
        Update(
          "question",
          ReactDOMRe.domElementToObj(ReactEventRe.Form.target(_event))##value,)) }/>
      <Input inputType="email" name="email" handleChange={_event =>
        self.send(
        Update(
          "email",
          ReactDOMRe.domElementToObj(ReactEventRe.Form.target(_event))##value,))}/>
      <input _type="submit" value="submit"/>
    </form>
  </div>;
},
};

