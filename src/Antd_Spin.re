
[@bs.deriving jsConverter]
type size = [ | `default | `small | `large];

[@bs.obj]
external makePropsSpin:
  (
    ~size: option(string)=?,
    ~spinning: bool=?,
    ~tip: string=?,
    ~delay: int=?,
    ~wrapperClassName: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/spin";

[@react.component]
let make =
    (
      ~size: option(size)=?,
      ~spinning: option(bool)=?,
      ~tip: option(string)=?,
      ~delay: option(int)=?,
      ~wrapperClassName: option(string)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsSpin(
      ~size=Belt.Option.map(size, sizeToJs),
      ~spinning?,
      ~tip?,
      ~delay?,
      ~wrapperClassName?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );