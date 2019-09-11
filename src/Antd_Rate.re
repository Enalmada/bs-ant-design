/*
 allowClear	whether to allow clear when click again	boolean	true
 allowHalf	whether to allow semi selection	boolean	false
 autoFocus	get focus when component mounted	boolean	false
 character	custom character of rate	ReactNode	<Icon type="star" />
 className	custom class name of rate	string	-
 count	star count	number	5
 defaultValue	default value	number	0
 disabled	read only, unable to interact	boolean	false
 style	custom style object of rate	object	-
 value	current value	number	-
 onBlur	callback when component lose focus	Function()	-
 onChange	callback when select value	Function(value: number)	-
 onFocus	callback when component get focus	Function()	-
 onHoverChange	callback when hover item	Function(value: number)	-
 onKeyDown	callback when keydown on component	Function(event)
 */

[@bs.obj]
external makePropsRate:
  (
    ~allowClear: bool=?,
    ~allowHalf: bool=?,
    ~autoFocus: bool=?,
    ~character: React.element=?,
    ~className: string=?,
    ~count: int=?,
    ~defaultValue: float=?,
    ~disabled: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~value: string=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~onChange: float => unit=?,
    ~onFocus: ReactEvent.Focus.t => unit=?,
    ~onHoverChange: float => unit=?,
    ~onKeyDown: ReactEvent.Focus.t => unit=?,
    ~id: string=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/rate";

[@react.component]
let make =
    (
      ~allowClear: option(bool)=?,
      ~allowHalf: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~character: option(React.element)=?,
      ~className: option(string)=?,
      ~count: option(int)=?,
      ~defaultValue: option(float)=?,
      ~disabled: option(bool)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~value: option(string)=?,
      ~onBlur: option(ReactEvent.Focus.t => unit)=?,
      ~onChange: option(float => unit)=?,
      ~onFocus: option(ReactEvent.Focus.t => unit)=?,
      ~onHoverChange: option(float => unit)=?,
      ~onKeyDown: option(ReactEvent.Focus.t => unit)=?,
      ~id: option(string)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsRate(
      ~allowClear?,
      ~allowHalf?,
      ~autoFocus?,
      ~character?,
      ~className?,
      ~count?,
      ~defaultValue?,
      ~disabled?,
      ~style?,
      ~value?,
      ~onBlur?,
      ~onChange?,
      ~onFocus?,
      ~onHoverChange?,
      ~onKeyDown?,
      ~id?,
      (),
    ),
  );