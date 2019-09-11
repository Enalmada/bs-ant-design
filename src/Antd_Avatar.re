/*
 icon	the Icon type for an icon avatar, see Icon Component	string	-
 shape	the shape of avatar	circle | square	circle
 size	the size of the avatar	number | string: large small default	default
 src	the address of the image for an image avatar	string	-
 alt	This attribute defines the alternative text describing the image	string	-
 onError	handler when img load error?return false to prevent default fallback behavior	() => boolean	-
 */
module IconName = Antd_IconName;

[@bs.deriving jsConverter]
type avatarShape = [ | `circle | `square];

[@bs.deriving jsConverter]
type sizeType = [ | `small | `default | `large];
type size =
  | Int(int)
  | Size(sizeType);

module AvatarSize = {
  type t;
  external int: int => t = "%identity";
  external size: string => t = "%identity";
};

let setAvatarSize = (a: size) =>
  switch (a) {
  | Int(int) => AvatarSize.int(int)
  | Size(avatarSize) => avatarSize |> sizeTypeToJs |> AvatarSize.size
  };

[@bs.obj]
external makePropsAvatar:
  (
    ~icon: IconName.t=?,
    ~shape: option(string)=?,
    ~size: option(AvatarSize.t)=?,
    ~src: string=?,
    ~alt: string=?,
    ~onError: unit => bool=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?,
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/avatar";

[@react.component]
let make =
    (
      ~icon: option(IconName.t)=?,
      ~shape: option(avatarShape)=?,
      ~size: option(size)=?,
      ~src: option(string)=?,
      ~alt: option(string)=?,
      ~onError: option(unit => bool)=?,
      ~onMouseUp: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseDown: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseEnter: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseLeave: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseMove: option(ReactEvent.Mouse.t => unit)=?,
      ~onMouseOver: option(ReactEvent.Mouse.t => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsAvatar(
      ~icon?,
      ~shape={
        Js.Option.map((. b) => avatarShapeToJs(b), shape);
      },
      ~size=Belt.Option.map(size, setAvatarSize),
      ~src?,
      ~alt?,
      ~onError?,
      ~onMouseUp?,
      ~onMouseDown?,
      ~onMouseEnter?,
      ~onMouseLeave?,
      ~onMouseMove?,
      ~onMouseOver?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );