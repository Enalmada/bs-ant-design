/*
 offsetBottom	Pixels to offset from bottom when calculating position of scroll	number	-
 offsetTop	Pixels to offset from top when calculating position of scroll	number	0
 target	specifies the scrollable area dom node	() => HTMLElement	() => window
 onChange	Callback for when affix state is changed	Function(affixed)	-
 */

[@bs.module] [@react.component]
external make:
  (
    ~offsetBottom: int=?,
    ~offsetTop: int=?,
    ~target: unit => Dom.htmlElement=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "antd/lib/affix";
let make = make;