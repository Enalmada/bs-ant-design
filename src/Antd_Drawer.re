// closable	Whether a close (x) button is visible on top right of the Drawer dialog or not.	boolean	true
// destroyOnClose	Whether to unmount child components on closing drawer or not.	boolean	false
// getContainer	Return the mounted node for Drawer.	HTMLElement | () => HTMLElement | Selectors	'body'
// mask	Whether to show mask or not.	Boolean	true
// maskClosable	Clicking on the mask (area outside the Drawer) to close the Drawer or not.	boolean	true
// maskStyle	Style for Drawer's mask element.	object	{}
// style	Style of drawer wrapper	object	-
// bodyStyle	Style of floating layer, typically used for adjusting its position.	object	-
// title	The title for Drawer.	string|ReactNode	-
// visible	Whether the Drawer dialog is visible or not.	boolean	false
// width	Width of the Drawer dialog.	string|number	256
// height	placement is top or bottom, height of the Drawer dialog.	string|number	-
// className	The class name of the container of the Drawer dialog.	string	-
// zIndex	The z-index of the Drawer.	Number	1000
// placement	The placement of the Drawer.	'top' | 'right' | 'bottom' | 'left'	'right'
// onClose	Specify a callback that will be called when a user clicks mask, close button or Cancel button.	function(e)	-
// afterVisibleChange	Callback after the animation ends when switching drawers.	function(visible)	-


[@bs.deriving jsConverter]
type placement = [ | `top | `right | `bottom | `left];

type size =
  | Str(string)
  | Int(int);

module Size = {
  type t;
  external str: string => t = "%identity";
  external int: int => t = "%identity";
};

let setSize = (size: size) =>
  switch (size) {
  | Str(width) => Size.str(width)
  | Int(width) => Size.int(width)
  };

[@bs.obj]
external maksePropsDrawer:
  (
    ~closable: bool=?,
    ~destroyOnClose: bool=?,
    ~mask: bool=?,
    ~maskClosable: bool=?,
    ~maskStyle: ReactDOMRe.Style.t=?,
    ~style: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~title: React.element=?,
    ~visible: bool=?,
    ~width: option(Size.t)=?,
    ~height: option(Size.t)=?,
    ~className: string=?,
    ~zIndex: int=?,
    ~placement: option(string)=?,
    ~afterVisibleChange: bool => unit=?,
    ~onClose: unit => unit=?,
    ~children: React.element,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/drawer";

[@react.component]
let make =
    (
      ~closable: option(bool)=?,
      ~destroyOnClose: option(bool)=?,
      ~mask: option(bool)=?,
      ~maskClosable: option(bool)=?,
      ~maskStyle: option(ReactDOMRe.Style.t)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~bodyStyle: option(ReactDOMRe.Style.t)=?,
      ~title: option(React.element)=?,
      ~visible: option(bool)=?,
      ~width: option(size)=?,
      ~height: option(size)=?,
      ~className: option(string)=?,
      ~zIndex: option(int)=?,
      ~placement: option(placement)=?,
      ~afterVisibleChange: option(bool => unit)=?,
      ~onClose: option(unit => unit)=?,
      ~children: React.element,
    ) =>
  React.createElement(
    reactComponent,
    maksePropsDrawer(
      ~closable?,
      ~destroyOnClose?,
      ~mask?,
      ~maskClosable?,
      ~maskStyle?,
      ~style?,
      ~bodyStyle?,
      ~title?,
      ~visible?,
      ~width=Belt.Option.map(width, setSize),
      ~height=Belt.Option.map(height, setSize),
      ~className?,
      ~zIndex?,
      ~placement=Belt.Option.map(placement, placementToJs),
      ~afterVisibleChange?,
      ~onClose?,
      ~children,
      (),
    ),
  );