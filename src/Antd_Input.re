/*

 addonAfter	The label text displayed after (on the right side of) the input field.	string|ReactNode
 addonBefore	The label text displayed before (on the left side of) the input field.	string|ReactNode
 defaultValue	The initial input content	string
 disabled	Whether the input is disabled.	boolean	false
 id	The ID for input	string
 prefix	The prefix icon for the Input.	string|ReactNode
 size	The size of the input box. Note: in the context of a form, the large size is used. Available: large default small	string	default
 suffix	The suffix icon for the Input.	string|ReactNode
 type	The type of input, see: MDN(use Input.TextArea instead of type="textarea")	string	text
 value	The input content value	string
 onChange	callback when user input	function(e)
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)

 */

[@bs.deriving jsConverter]
type size = [ | `large | `default | `small];

[@bs.obj]
external makePropsInput:
  (
    ~autoFocus: bool=?,
    ~placeholder: string=?,
    ~addonAfter: React.element=?,
    ~addonBefore: React.element=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~id: string=?,
    ~prefix: React.element=?,
    ~size: option(string)=?,
    ~suffix: React.element=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onBlur: ReactEvent.Form.t => unit=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
    ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
    ~_type: string=?,
    ~readOnly: bool=?,
    ~autoComplete: string=?,
    ~allowClear: bool=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/input";

[@react.component]
let make =
    (
      ~autoFocus: option(bool)=?,
      ~placeholder: option(string)=?,
      ~addonAfter: option(React.element)=?,
      ~addonBefore: option(React.element)=?,
      ~defaultValue: option(string)=?,
      ~disabled: option(bool)=?,
      ~id: option(string)=?,
      ~prefix: option(React.element)=?,
      ~size: option(size)=?,
      ~suffix: option(React.element)=?,
      ~value: option(string)=?,
      ~onChange: option(ReactEvent.Form.t => unit)=?,
      ~onFocus: option(ReactEvent.Form.t => unit)=?,
      ~onPressEnter: option(ReactEvent.Keyboard.t => unit)=?,
      ~onBlur: option(ReactEvent.Form.t => unit)=?,
      ~onClick: option(ReactEvent.Mouse.t => unit)=?,
      ~onDoubleClick: option(ReactEvent.Mouse.t => unit)=?,
      ~onKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
      ~_type: option(string)=?,
      ~readOnly: option(bool)=?,
      ~autoComplete: option(string)=?,
      ~allowClear: option(bool)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsInput(
      ~autoFocus?,
      ~placeholder?,
      ~addonAfter?,
      ~addonBefore?,
      ~defaultValue?,
      ~disabled?,
      ~id?,
      ~prefix?,
      ~size=Belt.Option.map(size, sizeToJs),
      ~suffix?,
      ~value?,
      ~onChange?,
      ~onFocus?,
      ~onPressEnter?,
      ~onBlur?,
      ~onClick?,
      ~onDoubleClick?,
      ~onKeyDown?,
      ~_type?,
      ~readOnly?,
      ~autoComplete?,
      ~allowClear?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

/*
 Was in autocomplete file for some reason
 [@bs.module "antd/lib/input"] external reactClass: ReasonReact.reactClass = "TextArea";
 let make = (~value=?, ~defaultValue=?, ~onChange=?, ~onPressEnter=?, ~onBlur=?, ~className=?, ~style=?, children) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=makeProps(~value?, ~defaultValue?, ~onChange?, ~onPressEnter?, ~onBlur?, ~className?, ~style?, ()),
     children,
   );

 */

/*
 autosize	Height autosize feature, can be set to true|false or an object { minRows: 2, maxRows: 6 }	boolean|object	false
 defaultValue	The initial input content	string
 value	The input content value	string
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)
 */

module TextArea = {
  [@bs.module "antd/lib/input"] [@react.component]
  external make:
    (
      ~placeholder: string=?,
      ~autosize: bool=?,
      ~defaultValue: string=?,
      ~value: string=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onBlur: ReactEvent.Form.t => unit=?,
      ~autoComplete: bool=?,
      ~autoFocus: bool=?,
      ~cols: int=?,
      ~disabled: bool=?,
      ~form: string=?,
      ~maxLength: int=?,
      ~minLength: int=?,
      ~name: string=?,
      ~readonly: bool=?,
      ~required: bool=?,
      ~spellcheck: bool=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~id: string=?,
      ~ref: React.Ref.t('ref)=?,
      ~children: React.element=?
    ) =>
    React.element =
    "TextArea";
};

module Search = {
  [@bs.obj]
  external makePropsInput:
    (
      ~onSearch: (string, ReactEvent.Form.t) => unit=?,
      ~enterButton: bool=?,
      ~placeholder: string=?,
      ~addonAfter: React.element=?,
      ~addonBefore: React.element=?,
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~prefix: React.element=?,
      ~size: option(string)=?,
      ~suffix: React.element=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onFocus: ReactEvent.Form.t => unit=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~onBlur: ReactEvent.Form.t => unit=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
      ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
      ~_type: string=?,
      ~readOnly: bool=?,
      ~autoComplete: string=?,
      ~allowClear: bool=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/input"]
  external reactComponent: React.component('a) = "Search";

  [@react.component]
  let make =
      (
        ~onSearch: option((string, ReactEvent.Form.t) => unit)=?,
        ~enterButton: option(bool)=?,
        ~placeholder: option(string)=?,
        ~addonAfter: option(React.element)=?,
        ~addonBefore: option(React.element)=?,
        ~defaultValue: option(string)=?,
        ~disabled: option(bool)=?,
        ~id: option(string)=?,
        ~prefix: option(React.element)=?,
        ~size: option(size)=?,
        ~suffix: option(React.element)=?,
        ~value: option(string)=?,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        ~onFocus: option(ReactEvent.Form.t => unit)=?,
        ~onPressEnter: option(ReactEvent.Keyboard.t => unit)=?,
        ~onBlur: option(ReactEvent.Form.t => unit)=?,
        ~onClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onDoubleClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
        ~_type: option(string)=?,
        ~readOnly: option(bool)=?,
        ~autoComplete: option(string)=?,
        ~allowClear: option(bool)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsInput(
        ~onSearch?,
        ~enterButton?,
        ~placeholder?,
        ~addonAfter?,
        ~addonBefore?,
        ~defaultValue?,
        ~disabled?,
        ~id?,
        ~prefix?,
        ~size=Belt.Option.map(size, sizeToJs),
        ~suffix?,
        ~value?,
        ~onChange?,
        ~onFocus?,
        ~onPressEnter?,
        ~onBlur?,
        ~onClick?,
        ~onDoubleClick?,
        ~onKeyDown?,
        ~_type?,
        ~readOnly?,
        ~autoComplete?,
        ~allowClear?,
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

module Group = {
  [@bs.obj]
  external makePropsInput:
    (
      ~compat: bool=?,
      ~placeholder: string=?,
      ~addonAfter: React.element=?,
      ~addonBefore: React.element=?,
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~prefix: React.element=?,
      ~size: option(string)=?,
      ~suffix: React.element=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onFocus: ReactEvent.Form.t => unit=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~onBlur: ReactEvent.Form.t => unit=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
      ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
      ~_type: string=?,
      ~readOnly: bool=?,
      ~autoComplete: string=?,
      ~allowClear: bool=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/input"]
  external reactComponent: React.component('a) = "Group";

  [@react.component]
  let make =
      (
        ~compat: option(bool)=?,
        ~placeholder: option(string)=?,
        ~addonAfter: option(React.element)=?,
        ~addonBefore: option(React.element)=?,
        ~defaultValue: option(string)=?,
        ~disabled: option(bool)=?,
        ~id: option(string)=?,
        ~prefix: option(React.element)=?,
        ~size: option(size)=?,
        ~suffix: option(React.element)=?,
        ~value: option(string)=?,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        ~onFocus: option(ReactEvent.Form.t => unit)=?,
        ~onPressEnter: option(ReactEvent.Keyboard.t => unit)=?,
        ~onBlur: option(ReactEvent.Form.t => unit)=?,
        ~onClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onDoubleClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
        ~_type: option(string)=?,
        ~readOnly: option(bool)=?,
        ~autoComplete: option(string)=?,
        ~allowClear: option(bool)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsInput(
        ~compat?,
        ~placeholder?,
        ~addonAfter?,
        ~addonBefore?,
        ~defaultValue?,
        ~disabled?,
        ~id?,
        ~prefix?,
        ~size=Belt.Option.map(size, sizeToJs),
        ~suffix?,
        ~value?,
        ~onChange?,
        ~onFocus?,
        ~onPressEnter?,
        ~onBlur?,
        ~onClick?,
        ~onDoubleClick?,
        ~onKeyDown?,
        ~_type?,
        ~readOnly?,
        ~autoComplete?,
        ~allowClear?,
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

module Password = {
  [@bs.obj]
  external makePropsInput:
    (
      ~visibilityToggle: bool=?,
      ~placeholder: string=?,
      ~addonAfter: React.element=?,
      ~addonBefore: React.element=?,
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~prefix: React.element=?,
      ~size: option(string)=?,
      ~suffix: React.element=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onFocus: ReactEvent.Form.t => unit=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~onBlur: ReactEvent.Form.t => unit=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onDoubleClick: ReactEvent.Mouse.t => unit=?,
      ~onKeyDown: ReactEvent.Keyboard.t => unit=?,
      ~_type: string=?,
      ~readOnly: bool=?,
      ~autoComplete: string=?,
      ~allowClear: bool=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/input"]
  external reactComponent: React.component('a) = "Password";

  [@react.component]
  let make =
      (
        ~visibilityToggle: option(bool)=?,
        ~placeholder: option(string)=?,
        ~addonAfter: option(React.element)=?,
        ~addonBefore: option(React.element)=?,
        ~defaultValue: option(string)=?,
        ~disabled: option(bool)=?,
        ~id: option(string)=?,
        ~prefix: option(React.element)=?,
        ~size: option(size)=?,
        ~suffix: option(React.element)=?,
        ~value: option(string)=?,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        ~onFocus: option(ReactEvent.Form.t => unit)=?,
        ~onPressEnter: option(ReactEvent.Keyboard.t => unit)=?,
        ~onBlur: option(ReactEvent.Form.t => unit)=?,
        ~onClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onDoubleClick: option(ReactEvent.Mouse.t => unit)=?,
        ~onKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
        ~_type: option(string)=?,
        ~readOnly: option(bool)=?,
        ~autoComplete: option(string)=?,
        ~allowClear: option(bool)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsInput(
        ~visibilityToggle?,
        ~placeholder?,
        ~addonAfter?,
        ~addonBefore?,
        ~defaultValue?,
        ~disabled?,
        ~id?,
        ~prefix?,
        ~size=Belt.Option.map(size, sizeToJs),
        ~suffix?,
        ~value?,
        ~onChange?,
        ~onFocus?,
        ~onPressEnter?,
        ~onBlur?,
        ~onClick?,
        ~onDoubleClick?,
        ~onKeyDown?,
        ~_type?,
        ~readOnly?,
        ~autoComplete?,
        ~allowClear?,
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};