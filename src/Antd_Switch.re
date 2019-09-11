/*
 autoFocus	get focus when component mounted	boolean	false
 checked	determine whether the Switch is checked	boolean	false
 checkedChildren	content to be shown when the state is checked	string|ReactNode
 defaultChecked	to set the initial state	boolean	false
 disabled	Disable switch	boolean	false
 loading	loading state of switch	boolean	false
 size	the size of the Switch, options: default small	string	default
 unCheckedChildren	content to be shown when the state is unchecked	string|ReactNode
 onChange	a callback function, can be executed when the checked state is changing	Function(checked:Boolean)
  */

[@bs.deriving jsConverter]
type size = [ | `default | `small];

[@bs.obj]
external makePropsSwitch:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~checkedChildren: React.element=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~size: option(string)=?,
    ~unCheckedChildren: React.element=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/switch";

[@react.component]
let make =
    (
      ~autoFocus: option(bool)=?,
      ~checked: option(bool)=?,
      ~checkedChildren: option(React.element)=?,
      ~defaultChecked: option(bool)=?,
      ~disabled: option(bool)=?,
      ~loading: option(bool)=?,
      ~size: option(size)=?,
      ~unCheckedChildren: option(React.element)=?,
      ~onChange: option(bool => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsSwitch(
      ~autoFocus?,
      ~checked?,
      ~checkedChildren?,
      ~defaultChecked?,
      ~disabled?,
      ~loading?,
      ~size=Belt.Option.map(size, sizeToJs),
      ~unCheckedChildren?,
      ~onChange?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );