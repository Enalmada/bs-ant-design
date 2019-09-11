/*
 autoFocus	get focus when component mounted	boolean	false
 defaultValue	initial value	number
 disabled	disable the input	boolean	false
 formatter	Specifies the format of the value presented	function(value: number | string): string	-
 max	max value	number	Infinity
 min	min value	number	-Infinity
 parser	Specifies the value extracted from formatter	function( string): number	-
 precision	precision of input value	number	-
 size	width of input box	string	-
 step	The number to which the current value is increased or decreased. It can be an integer or decimal.	number|string	1
 value	current value	number
 onChange	The callback triggered when the value is changed.	function(value: number | string)
 */

[@bs.module] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~defaultValue: float=?,
    ~disabled: bool=?,
    ~formatter: float => string=?,
    ~max: float=?,
    ~min: float=?,
    ~parser: string => float=?,
    ~precision: int=?,
    ~size: string=?,
    ~step: float=?,
    ~value: float=?,
    ~onChange: float => unit=?,
    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~id: string=?,
    ~placeholder: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/input-number";
let make = make;