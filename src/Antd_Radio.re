
[@bs.obj]
external makePropsRadio:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~value: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module "antd/lib/radio"]
external reactComponent: React.component('a) = "default";

[@react.component]
let make =
    (
      ~autoFocus: option(bool)=?,
      ~checked: option(bool)=?,
      ~defaultChecked: option(bool)=?,
      ~disabled: option(bool)=?,
      ~value: option(string)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsRadio(
      ~autoFocus?,
      ~checked?,
      ~defaultChecked?,
      ~disabled?,
      ~value?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

module Group = {
  [@bs.deriving abstract]
  type optionGroup = {
    .
    "label": string,
    "value": string,
    "disabled": bool,
  };
  type options = array(optionGroup);
  [@bs.deriving jsConverter]
  type size = [ | `default | `small | `large];
  [@bs.deriving jsConverter]
  type buttonStyle = [ | `outline | `solid];

  type optionsProps(_) =
    | Strings(array(string)): optionsProps(array(string))
    | Objects(array(optionGroup)): optionsProps(array(optionGroup));

  let strOrObj = (type a, strOrObj: optionsProps(a)): a =>
    switch (strOrObj) {
    | Strings(v) => v
    | Objects(v) => v
    };

  [@bs.obj]
  external makePropsRadioGroup:
    (
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~name: string=?,
      ~options: 'a=?,
      ~size: option(string)=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~buttonStyle: option(string)=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/radio"]
  external reactComponent: React.component('a) = "Group";

  [@react.component]
  let make =
      (
        ~defaultValue: option(string)=?,
        ~disabled: option(bool)=?,
        ~name: option(string)=?,
        ~options: option('a)=?,
        ~size: option(size)=?,
        ~value: option(string)=?,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        ~buttonStyle: option(buttonStyle)=?,
        ~id: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsRadioGroup(
        ~defaultValue?,
        ~disabled?,
        ~name?,
        ~options=Belt.Option.map(options, strOrObj),
        ~size=Belt.Option.map(size, sizeToJs),
        ~value?,
        ~onChange?,
        ~buttonStyle=Belt.Option.map(buttonStyle, buttonStyleToJs),
        ~id?,
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

module Button = {
  [@bs.module "antd/lib/radio"] [@react.component]
  external make:
    (
      ~prefixCls: string=?,
      ~className: string=?,
      ~defaultChecked: bool=?,
      ~checked: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~disabled: bool=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
      ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
      ~onKeyPress: ReactEvent.Keyboard.t => unit=?,
      ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
      ~value: string=?,
      ~tabIndex: int=?,
      ~name: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Button";
};