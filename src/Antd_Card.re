/*
 actions	The action list, shows at the bottom of the Card.	Array	-
 activeTabKey	Current TabPane's key	string	-
 headStyle	Inline style to apply to the card head	object	-
 bodyStyle	Inline style to apply to the card content	object	-
 bordered	Toggles rendering of the border around the card	boolean	true
 cover	Card cover	ReactNode	-
 defaultActiveTabKey	Initial active TabPane's key, if activeTabKey is not set.	string	-
 extra	Content to render in the top-right corner of the card	string|ReactNode	-
 hoverable	Lift up when hovering card	boolean	false
 loading	Shows a loading indicator while the contents of the card are being fetched	boolean	false
 tabList	List of TabPane's head.	Array<{key: string, tab: ReactNode}>	-
 title	Card title	string|ReactNode	-
 type	Card style type, can be set to inner or not set	string	-
 onTabChange	Callback when tab is switched	(key) => void	-
 */
type tab = {
  .
  "key": string,
  "tab": string,
};

[@bs.deriving jsConverter]
type size = [ | `default | `small];

[@bs.obj]
external makePropsCard:
  (
    ~actions: array(React.element)=?,
    ~activeTabKey: string=?,
    ~headStyle: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~bordered: bool=?,
    ~cover: React.element=?,
    ~defaultActiveTabKey: string=?,
    ~extra: React.element=?,
    ~hoverable: bool=?,
    ~loading: bool=?,
    ~tabList: array(tab)=?,
    ~title: React.element=?,
    ~_type: string=?,
    ~onTabChange: string => unit=?,
    ~size: option(string)=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/card";

[@react.component]
let make =
    (
      ~actions: option(array(React.element))=?,
      ~activeTabKey: option(string)=?,
      ~headStyle: option(ReactDOMRe.Style.t)=?,
      ~bodyStyle: option(ReactDOMRe.Style.t)=?,
      ~bordered: option(bool)=?,
      ~cover: option(React.element)=?,
      ~defaultActiveTabKey: option(string)=?,
      ~extra: option(React.element)=?,
      ~hoverable: option(bool)=?,
      ~loading: option(bool)=?,
      ~tabList: option(array(tab))=?,
      ~title: option(React.element)=?,
      ~_type: option(string)=?,
      ~onTabChange: option(string => unit)=?,
      ~size: option(size)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsCard(
      ~actions?,
      ~activeTabKey?,
      ~headStyle?,
      ~bodyStyle?,
      ~bordered?,
      ~cover?,
      ~defaultActiveTabKey?,
      ~extra?,
      ~hoverable?,
      ~loading?,
      ~tabList?,
      ~title?,
      ~_type?,
      ~onTabChange?,
      ~size={
        Js.Option.map((. b) => sizeToJs(b), size);
      },
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

module Grid = {
  [@bs.module "antd/lib/card"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Grid";
};

/*
 avatar	avatar or icon	ReactNode	-
 className	className of container	string	-
 description	description content	ReactNode	-
 style	style object of container	object	-
 title	title content	ReactNode
 */

module Meta = {
  [@bs.module "antd/lib/card"] [@react.component]
  external make:
    (
      ~avatar: React.element=?,
      ~className: string=?,
      ~description: React.element=?,
      ~style: ReactDOMRe.style=?,
      ~title: React.element=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Meta";
};