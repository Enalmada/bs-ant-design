
type route = {
  .
  "path": string,
  "breadcrumbName": string,
};

[@bs.module] [@react.component]
external make:
  (
    ~routes: array(route)=?,
    ~itemRender: (route, Js.t({..}), array(route), array(string)) =>
                 React.element
                   =?,
    ~separator: React.element=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/breadcrumb";

module Item = {
  [@bs.module "antd/lib/breadcrumb"] [@react.component]
  external make:
    (
      ~separator: string=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~href: string=?,
      ~overlay: React.element=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};
let make = make;