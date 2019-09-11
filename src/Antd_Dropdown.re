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

module Menu = Antd_Menu;
module IconName = Antd_IconName;

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

[@bs.obj]
external makePropsDropdown:
  (
    ~disabled: bool=?,
    ~getPopupContainer: Dom.element => Dom.element=?,
    ~overlay: React.element=?,
    ~overlayClassName: string=?,
    ~overlayStyle: ReactDOMRe.Style.t=?,
    ~placement: option(string)=?,
    ~trigger: array(string)=?,
    ~visible: bool=?,
    ~onVisibleChange: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/dropdown";

[@react.component]
let make =
    (
      ~disabled: option(bool)=?,
      ~getPopupContainer: option(Dom.element => Dom.element)=?,
      ~overlay: option(React.element)=?,
      ~overlayClassName: option(string)=?,
      ~overlayStyle: option(ReactDOMRe.Style.t)=?,
      ~placement: option(placement)=?,
      ~trigger: option(array(string))=?,
      ~visible: option(bool)=?,
      ~onVisibleChange: option(ReactEvent.Mouse.t => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsDropdown(
      ~disabled?,
      ~getPopupContainer?,
      ~overlay?,
      ~overlayClassName?,
      ~overlayStyle?,
      ~placement={
        Js.Option.map((. b) => placementToJs(b), placement);
      },
      ~trigger?,
      ~visible?,
      ~onVisibleChange?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

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
      ~icon: IconName.t=?,
      ~disabled: bool=?,
      ~overlay: React.element=?,
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
let make = make;