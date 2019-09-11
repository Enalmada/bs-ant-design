/*
 count	Number to show in badge	number|ReactNode
 dot	Whether to display a red dot instead of count	boolean	false
 offset	set offset of the badge dot, like[x, y]	[number, number]	-
 overflowCount	Max count to show	number	99
 showZero	Whether to show badge when count is zero	boolean	false
 status	Set Badge as a status dot	success | processing | default | error | warning	''
 text	If status is set, text sets the display text of the status dot	string	''
 title	Text to show when hovering over the badge	string	count
  */

[@bs.deriving jsConverter]
type status = [ | `success | `processing | `default | `error | `warning];

[@bs.obj]
external makePropsBadge:
  (
    ~color: string=?,
    ~count: int=?,
    ~dot: bool=?,
    ~offset: (int, int)=?,
    ~overflowCount: int=?,
    ~showZero: bool=?,
    ~status: option(string),
    ~text: string=?,
    ~title: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/badge";

[@react.component]
let make =
    (
      ~color: option(string)=?,
      ~count: option(int)=?,
      ~dot: option(bool)=?,
      ~offset: option((int, int))=?,
      ~overflowCount: option(int)=?,
      ~showZero: option(bool)=?,
      ~status: option(status)=?,
      ~text: option(string)=?,
      ~title: option(string)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsBadge(
      ~color?,
      ~count?,
      ~dot?,
      ~offset?,
      ~overflowCount?,
      ~showZero?,
      ~status={
        Js.Option.map((. b) => statusToJs(b), status);
      },
      ~text?,
      ~title?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );