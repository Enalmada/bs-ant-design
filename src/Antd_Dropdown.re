[%bs.raw {|require("antd/lib/dropdown/style")|}];

module Menu = Antd_Menu;

[@bs.deriving jsConverter]
type placement = [
  | [@bs.as "bottomLeft"] `bottomLeft
  | [@bs.as "bottomCenter"] `bottomCenter
  | [@bs.as "bottomRight"] `bottomRight
  | [@bs.as "topLeft"] `topLeft
  | [@bs.as "topCenter"] `topCenter
  | [@bs.as "topRight"] `topRight
];

[@bs.deriving jsConverter]
type buttonSize = [ | `small | `default | `large];

[@bs.deriving jsConverter]
type buttonType = [ | `primary | `ghost | `dashed | `danger];

[@bs.deriving jsConverter]
type trigger = [
  | [@bs.as "click"] `click
  | [@bs.as "hover"] `hover
  | [@bs.as "contextMenu"] `contextMenu
];

[@bs.module] [@react.component]
external make:
  (
    ~disabled: bool=?,
    ~overlay: ReasonReact.reactElement=?,
    ~overlayClassName: string=?,
    ~placement: string=?,
    ~trigger: array(string)=?,
    ~visible: bool=?,
    ~onVisibleChange: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/dropdown";

/*
 module Dropdown = {
   [@bs.module] external dropdown : ReasonReact.reactClass = "antd/lib/dropdown";
   let make =
       (
         ~align=?,
         ~disabled=?,
         ~type_=?,
         ~className=?,
         ~size=?,
         ~style=?,
         ~overlay=?,
         ~onVisibleChange=?,
         ~id=?,
         ~visible=?,
         ~placement=?,
         ~trigger=?,
         ~onClick=?
       ) =>
     ReasonReact.wrapJsForReason(
       ~reactClass=dropdown,
       ~props=
         Js.Undefined.(
           {
             "align": from_opt(align),
             "disabled": unwrapBool(disabled),
             "type": from_opt(type_),
             "className": from_opt(className),
             "size": from_opt(size),
             "style": from_opt(style),
             "overlay": from_opt(overlay),
             "onVisibleChange": from_opt(onVisibleChange),
             "id": from_opt(id),
             "visible": unwrapBool(visible),
             "placement": from_opt(placement),
             "trigger": from_opt(trigger),
             "onClick": from_opt(onClick)
           }
         )
     );
 };

 */

/*
 disabled	whether the dropdown menu is disabled	boolean	-
 getPopupContainer	to set the container of the dropdown menu. The default is to create a div element in body, you can reset it to the scrolling area and make a relative reposition. example	Function(triggerNode)	() => document.body
 overlay	the dropdown menu	Menu	-
 overlayClassName	Class name of the dropdown root element	string	-
 overlayStyle	Style of the dropdown root element	object	-
 placement	placement of pop menu: bottomLeft bottomCenter bottomRight topLeft topCenter topRight	String	bottomLeft
 trigger	the trigger mode which executes the drop-down action, hover doesn't work on mobile device	Array<click|hover|contextMenu>	['hover']
 visible	whether the dropdown menu is visible	boolean	-
 onVisibleChange	a callback function takes an argument: visible, is executed when the visible state is changed	Function(visible)
 */

/*
 disabled	whether the dropdown menu is disabled	boolean	-
 overlay	the dropdown menu	Menu	-
 placement	placement of pop menu: bottomLeft bottomCenter bottomRight topLeft topCenter topRight	String	bottomLeft
 size	size of the button, the same as Button	string	default
 trigger	the trigger mode which executes the drop-down action	Array<click|hover|contextMenu>	['hover']
 type	type of the button, the same as Button	string	default
 visible	whether the dropdown menu is visible	boolean	-
 onClick	a callback function, the same as Button, which will be executed when you click the button on the left	Function	-
 onVisibleChange	a callback function takes an argument: visible, is executed when the visible state is changed	Function
 */

module Button = {
  [@bs.module "antd/lib/dropdown"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~overlay: ReasonReact.reactElement=?,
      ~placement: string=?,
      ~size: string=?,
      ~trigger: array(string)=?,
      ~_type: string=?,
      ~visible: bool=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onVisibleChange: ReactEvent.Mouse.t => unit=?,
      ~key: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Dropdown.Button";
};