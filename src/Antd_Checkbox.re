/*
 autoFocus	get focus when component mounted	boolean	false
 checked	Specifies whether the checkbox is selected.	boolean	false
 defaultChecked	Specifies the initial state: whether or not the checkbox is selected.	boolean	false
 disabled	Disable checkbox	boolean	false
 indeterminate	indeterminate checked state of checkbox	boolean	false
 onChange	The callback function that is triggered when the state changes.	Function(e:Event)
 */
[@bs.module] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~onChange: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/checkbox";
let make = make;

module Group = {
  [@bs.module "antd/lib/checkbox"] [@react.component]
  external make:
    (
      ~defaultValue: array(string)=?,
      ~disabled: bool=?,
      ~name: string=?,
      ~options: array(string)=?,
      ~value: array(string)=?,
      ~onChange: array(string) => unit=?
    ) =>
    React.element =
    "Group";
};