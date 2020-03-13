module IconName = Antd_IconName;


[@bs.deriving jsConverter]
type buttonType = [
  | `primary
  | `ghost
  | `dashed
  | `danger
  | `link
  | `default
];

[@bs.deriving jsConverter]
type buttonShape = [ | `circle | [@bs.as "circle-outline"] `circleOutline];

[@bs.deriving jsConverter]
type buttonSize = [ | `small | `default | `large];

module LoadingProps = {
  type delay = {. "delay": int};
  type t =
    | Bool(bool)
    | Delay(delay);
  type js;
  external ofBool: bool => js = "%identity";
  external ofDelay: delay => js = "%identity";
  let toJs: t => js =
    fun
    | Bool(a) => a |> ofBool
    | Delay(a) => a |> ofDelay;
};

module ButtonGroup = {
  [@bs.obj]
  external makePropsGroup:
    (
      ~size: option(string)=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/button"]
  external reactComponent: React.component('a) = "Group";

  [@react.component]
  let make =
      (
        ~size: option(buttonSize)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsGroup(
        ~size={
          Js.Option.map((. b) => buttonSizeToJs(b), size);
        },
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

[@bs.obj]
external makePropsButton:
  (
    ~block: bool=?,
    ~disabled: bool=?,
    ~ghost: bool=?,
    ~href: string=?,
    ~htmlType: string=?,
    ~icon: IconName.t=?,
    ~loading: option(LoadingProps.js)=?,
    ~shape: option(string),
    ~size: option(string),
    ~_type: option(string),
    ~target: string=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?,
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~tabIndex: int=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/button";

[@react.component]
let make =
    (
      ~block: option(bool)=?,
      ~disabled: option(bool)=?,
      ~ghost: option(bool)=?,
      ~href: option(string)=?,
      ~htmlType: option(string)=?,
      ~icon: option(IconName.t)=?,
      ~loading: option(LoadingProps.t)=?,
      ~shape: option(buttonShape)=?,
      ~size: option(buttonSize)=?,
      ~target: option(string)=?,
      ~_type: option(buttonType)=?,
      ~onClick: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseUp: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseDown: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseEnter: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseLeave: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseMove: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseOver: option(ReactEvent.Mouse.t => unit)=?,
      ~tabIndex: option(int)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsButton(
      ~block?,
      ~_type={
        Js.Option.map((. b) => buttonTypeToJs(b), _type);
      },
      ~htmlType?,
      ~icon?,
      ~shape={
        Js.Option.map((. b) => buttonShapeToJs(b), shape);
      },
      ~size={
        Js.Option.map((. b) => buttonSizeToJs(b), size);
      },
      ~onClick?,
      ~onMouseUp?,
      ~onMouseDown?,
      ~onMouseEnter?,
      ~onMouseLeave?,
      ~onMouseMove?,
      ~onMouseOver?,
      ~tabIndex?,
      ~loading={
        Js.Option.map((. b) => LoadingProps.toJs(b), loading);
      },
      ~disabled?,
      ~ghost?,
      ~target?,
      ~href?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );