
/*
 afterClose	Callback executed when close animation is completed	() => void	-
 closable	Whether the Tag can be closed	boolean	false
 color	Color of the Tag	string	-
 onClose	Callback executed when tag is closed	(e) => void	-
 visible	Whether the Tag is closed or not	boolean	true
   */

[@bs.obj]
external makePropsTag:
  (
    ~afterClose: unit => unit=?,
    ~closable: bool=?,
    ~color: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~visible: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/tag";

[@react.component]
let make =
    (
      ~afterClose: option(unit => unit)=?,
      ~closable: option(bool)=?,
      ~color: option(string)=?,
      ~onClose: option(ReactEvent.Mouse.t => unit)=?,
      ~visible: option(bool)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: React.element,
    ) =>
  React.createElement(
    reactComponent,
    makePropsTag(
      ~afterClose?,
      ~closable?,
      ~color?,
      ~onClose?,
      ~visible?,
      ~id?,
      ~className?,
      ~style?,
      ~children,
    ),
  );

/*
 checked	Checked status of Tag	boolean	false
 onChange	Callback executed when Tag is checked/unchecked	(checked) => void	-
  */

module CheckableTag = {
  [@bs.module "antd/lib/tag"] [@react.component]
  external make:
    (
      ~checked: bool=?,
      ~onChange: bool => unit=?,
      ~className: string=?,
      ~tab: React.element=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "CheckableTag";
  let make = make;
};