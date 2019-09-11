[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/timeline";


[@bs.deriving jsConverter]
type modeType = [ | `left | `alternate | `right];

/*
 pending	Set the last ghost node's existence or its content	boolean|string|ReactNode	false
 pendingDot	Set the dot of the last ghost node when pending is true	|string|ReactNode	<Icon type="loading" />
 reverse	reverse nodes or not	boolean	false
 mode	By sending alternate the timeline will distribute the nodes to the left and right.	left | alternate | right	left
    */
[@bs.obj]
external makePropsTimeline:
  (
    ~pending: React.element=?,
    ~pendingDot: React.element=?,
    ~reverse: bool=?,
    ~mode: option(string)=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/timeline";

[@react.component]
let make =
    (
      ~pending: option(React.element)=?,
      ~pendingDot: option(React.element)=?,
      ~reverse: option(bool)=?,
      ~mode: option(modeType)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsTimeline(
      ~pending?,
      ~pendingDot?,
      ~reverse?,
      ~mode=Belt.Option.map(mode, modeTypeToJs),
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );

/*
 color	Set the circle's color to blue, red, green or other custom colors	string	blue
 dot	Customize timeline dot	string|ReactNode	-
   */

module Item = {
  [@bs.module "antd/lib/timeline"] [@react.component]
  external make:
    (
      ~color: string=?,
      ~dot: React.element=?,
      ~className: string=?,
      ~tab: React.element=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};
