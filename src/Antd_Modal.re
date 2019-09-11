
/*
 afterClose	Specify a function that will be called when modal is closed completely.	function	-
 bodyStyle	Body style for modal body element. Such as height, padding etc.	object	{}
 cancelText	Text of the Cancel button	string	Cancel
 centered	Centered Modal	Boolean	false
 closable	Whether a close (x) button is visible on top right of the modal dialog or not	boolean	true
 confirmLoading	Whether to apply loading visual effect for OK button or not	boolean	false
 destroyOnClose	Whether to unmount child compenents on onClose	boolean	false
 footer	Footer content, set as footer={null} when you don't need default buttons	string|ReactNode	OK and Cancel buttons
 getContainer	Return the mount node for Modal	(instance): HTMLElement	() => document.body
 mask	Whether show mask or not.	Boolean	true
 maskClosable	Whether to close the modal dialog when the mask (area outside the modal) is clicked	boolean	true
 maskStyle	Style for modal's mask element.	object	{}
 okText	Text of the OK button	string	OK
 okType	Button type of the OK button	string	primary
 okButtonProps	The ok button props	ButtonProps	-
 cancelButtonProps	The cancel button props	ButtonProps	-
 style	Style of floating layer, typically used at least for adjusting the position.	object	-
 title	The modal dialog's title	string|ReactNode	-
 visible	Whether the modal dialog is visible or not	boolean	false
 width	Width of the modal dialog	string|number	520
 wrapClassName	The class name of the container of the modal dialog	string	-
 zIndex	The z-index of the Modal	Number	1000
 onCancel	Specify a function that will be called when a user clicks mask, close button on top right or Cancel button	function(e)	-
 onOk	Specify a function that will be called when a user clicks the OK button	function(e)	-

    */

[@bs.deriving abstract]
type buttonProps = {. "disabled": bool};
[@bs.obj]
external makePropsModal:
  (
    ~afterClose: unit => unit=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~cancelText: string=?,
    ~centered: bool=?,
    ~closable: bool=?,
    ~confirmLoading: bool=?,
    ~destroyOnClose: bool=?,
    ~footer: React.element=?,
    ~getContainer: Dom.element => Dom.htmlElement=?,
    ~mask: bool=?,
    ~maskClosable: bool=?,
    ~maskStyle: ReactDOMRe.Style.t=?,
    ~okText: string=?,
    ~okType: string=?,
    ~okButtonProps: buttonProps=?,
    ~cancelButtonProps: buttonProps=?,
    ~style: React.element=?,
    ~title: React.element=?,
    ~visible: bool=?,
    ~width: int=?,
    ~wrapClassName: string=?,
    ~zIndex: int=?,
    ~onCancel: ReactEvent.Mouse.t => unit=?,
    ~onOk: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/modal";

[@react.component]
let make =
    (
      ~afterClose: option(unit => unit)=?,
      ~bodyStyle: option(ReactDOMRe.Style.t)=?,
      ~cancelText: option(string)=?,
      ~centered: option(bool)=?,
      ~closable: option(bool)=?,
      ~confirmLoading: option(bool)=?,
      ~destroyOnClose: option(bool)=?,
      ~footer: option(React.element)=?,
      ~getContainer: option(Dom.element => Dom.htmlElement)=?,
      ~mask: option(bool)=?,
      ~maskClosable: option(bool)=?,
      ~maskStyle: option(ReactDOMRe.Style.t)=?,
      ~okText: option(string)=?,
      ~okType: option(string)=?,
      ~okButtonProps: option(buttonProps)=?,
      ~cancelButtonProps: option(buttonProps)=?,
      ~style: option(React.element)=?,
      ~title: option(React.element)=?,
      ~visible: option(bool)=?,
      ~width: option(int)=?,
      ~wrapClassName: option(string)=?,
      ~zIndex: option(int)=?,
      ~onCancel: option(ReactEvent.Mouse.t => unit)=?,
      ~onOk: option(ReactEvent.Mouse.t => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsModal(
      ~afterClose?,
      ~bodyStyle?,
      ~cancelText?,
      ~centered?,
      ~closable?,
      ~confirmLoading?,
      ~destroyOnClose?,
      ~footer?,
      ~getContainer?,
      ~mask?,
      ~maskClosable?,
      ~maskStyle?,
      ~okText?,
      ~okType?,
      ~okButtonProps?,
      ~cancelButtonProps?,
      ~style?,
      ~title?,
      ~visible?,
      ~width?,
      ~wrapClassName?,
      ~zIndex?,
      ~onCancel?,
      ~onOk?,
      ~id?,
      ~className?,
      ~children?,
      (),
    ),
  );

[@bs.deriving]
type props = {
  .
  "title": React.element,
  "content": React.element,
};

[@bs.send] external info: (React.component('a), props) => unit = "";
[@bs.send] external success: (React.component('a), props) => unit = "";
[@bs.send] external error: (React.component('a), props) => unit = "";
[@bs.send] external warning: (React.component('a), props) => unit = "";
[@bs.send] external confirm: (React.component('a), props) => unit = "";

let info = props => info(reactComponent, props);
let success = props => success(reactComponent, props);
let error = props => error(reactComponent, props);
let warning = props => warning(reactComponent, props);
let confirm = props => confirm(reactComponent, props);
let make = make;
