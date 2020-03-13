/*
 COMMON API
 -----------------------
 arrowPointAtCenter	Whether the arrow is pointed at the center of target, supported after antd@1.11+	boolean	false
 autoAdjustOverflow	Whether to adjust popup placement automatically when popup is off screen	boolean	true
 defaultVisible	Whether the floating tooltip card is visible by default	boolean	false
 getPopupContainer	The DOM container of the tip, the default behavior is to create a div element in body	Function(triggerNode)	() => document.body
 mouseEnterDelay	Delay in seconds, before tooltip is shown on mouse enter	number	0
 mouseLeaveDelay	Delay in seconds, before tooltip is hidden on mouse leave	number	0.1
 overlayClassName	Class name of the tooltip card	string	-
 overlayStyle	Style of the tooltip card	object	-
 placement	The position of the tooltip relative to the target, which can be one of top left right bottom topLeft topRight bottomLeft bottomRight leftTop leftBottom rightTop rightBottom	string	top
 trigger	Tooltip trigger mode	hover | focus | click | contextMenu	hover
 visible	Whether the floating tooltip card is visible or not	boolean	false
 onVisibleChange	Callback executed when visibility of the tooltip card is changed	(visible) => void	-
 align	this value will be merged into placement's config, please refer to the settings rc-tooltip	Object	-

 */

/*
 title	Title of the card	string|ReactNode	-
 */


[@bs.deriving jsConverter]
type placementType = [
  | `top
  | `left
  | `right
  | `bottom
  | `topLeft
  | `topRight
  | `bottomLeft
  | `bottomRight
  | `leftTop
  | `leftBottom
  | `rightTop
  | `rightBottom
];

[@bs.deriving jsConverter]
type triggerType = [ | `hover | `focus | `click | `contextMenu];

[@bs.obj]
external makePropsToolTip:
  (
    ~arrowPointAtCenter: bool=?,
    ~autoAdjustOverflow: bool=?,
    ~defaultVisible: bool=?,
    ~getPopupContainer: Dom.element => Dom.htmlElement=?,
    ~mouseEnterDelay: float=?,
    ~mouseLeaveDelay: float=?,
    ~overlayClassName: string=?,
    ~overlayStyle: ReactDOMRe.Style.t=?,
    ~placement: option(string)=?,
    ~trigger: option(string)=?,
    ~visible: bool=?,
    ~onVisibleChange: bool => unit=?,
    ~title: React.element=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/tooltip";

[@react.component]
let make =
    (
      ~arrowPointAtCenter: option(bool)=?,
      ~autoAdjustOverflow: option(bool)=?,
      ~defaultVisible: option(bool)=?,
      ~getPopupContainer: option(Dom.element => Dom.htmlElement)=?,
      ~mouseEnterDelay: option(float)=?,
      ~mouseLeaveDelay: option(float)=?,
      ~overlayClassName: option(string)=?,
      ~overlayStyle: option(ReactDOMRe.Style.t)=?,
      ~placement: option(placementType)=?,
      ~trigger: option(triggerType)=?,
      ~visible: option(bool)=?,
      ~onVisibleChange: option(bool => unit)=?,
      ~title: option(React.element)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsToolTip(
      ~arrowPointAtCenter?,
      ~autoAdjustOverflow?,
      ~defaultVisible?,
      ~getPopupContainer?,
      ~mouseEnterDelay?,
      ~mouseLeaveDelay?,
      ~overlayClassName?,
      ~overlayStyle?,
      ~placement=Belt.Option.map(placement, placementTypeToJs),
      ~trigger=Belt.Option.map(trigger, triggerTypeToJs),
      ~visible?,
      ~onVisibleChange?,
      ~title?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );