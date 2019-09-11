[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/steps";


[@bs.deriving jsConverter]
type status = [ | `wait | `process | `finish | `error];

[@bs.obj]
external makePropsSteps:
  (
    ~status: option(string)=?,
    ~current: int=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/steps";

[@react.component]
let make =
    (
      ~status: option(status)=?,
      ~current: option(int)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsSteps(
      ~status=Belt.Option.map(status, statusToJs),
      ~current?,
      ~style?,
      (),
    ),
  );

module Step = {
  [@bs.module "antd/lib/steps"] [@react.component]
  external make:
    (~title: string=?, ~description: string=?, ~children: React.element=?) =>
    React.element =
    "Step";
};