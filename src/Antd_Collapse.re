/*
 accordion	If true, Collapse renders as Accordion	boolean	false
 activeKey	Key of the active panel	string[]|string	No default value. In accordion mode, it's the key of the first panel.
 bordered	Toggles rendering of the border around the collapse block	boolean	true
 defaultActiveKey	Key of the initial active panel	string	-
 onChange	Callback function executed when active panel is changed	Function	-
 destroyInactivePanel	Destroy Inactive Panel
 */

/*
 disabled	If true, panel cannot be opened or closed	boolean	false
 forceRender	Forced render of content on panel, instead of lazy rending after clicking on header	boolean	false
 header	Title of the panel	string|ReactNode	-
 key	Unique key identifying the panel from among its siblings	string	-
 showArrow	If false, panel will not show arrow icon	boolean	true
  */

type panelProps = {
  .
  "isActive": bool,
  "header": string,
  "panelKey": string,
  "accordion": bool,
  "showArrow": bool,
  "forceRender": bool,
};

[@bs.deriving jsConverter]
type expandIconPosition = [ | `left | `right];

[@bs.obj]
external makePropsCollapse:
  (
    ~expandIconPosition: option(string)=?,
    ~accordion: bool=?,
    ~activeKey: array(string)=?,
    ~bordered: bool=?,
    ~defaultActiveKey: array(string)=?,
    ~onChange: string => unit=?,
    ~destroyInactivePanel: bool=?,
    ~expandIcon: panelProps => React.element=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/collapse";

[@react.component]
let make =
    (
      ~expandIconPosition: option(expandIconPosition)=?,
      ~accordion: option(bool)=?,
      ~activeKey: option(array(string))=?,
      ~bordered: option(bool)=?,
      ~defaultActiveKey: option(array(string))=?,
      ~onChange: option(string => unit)=?,
      ~destroyInactivePanel: option(bool)=?,
      ~expandIcon: option(panelProps => React.element)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsCollapse(
      ~expandIconPosition=
        Belt.Option.map(expandIconPosition, expandIconPositionToJs),
      ~accordion?,
      ~activeKey?,
      ~bordered?,
      ~defaultActiveKey?,
      ~onChange?,
      ~destroyInactivePanel?,
      ~expandIcon?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

module Panel = {
  [@bs.module "antd/lib/collapse"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~forceRender: bool=?,
      ~header: string=?,
      ~key: string=?,
      ~showArrow: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Panel";
};

let colapse = Panel.make;
let make = make;