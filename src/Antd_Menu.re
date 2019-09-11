
[@bs.deriving jsConverter]
type theme = [ | `light | `dark];

type mode = [ | `horizontal | `vertical | `inline];

// [@bs.deriving jsConverter] does not match this case
let modeToJs = mode =>
  switch (mode) {
  | `horizontal => "horizontal"
  | `inline => "inline"
  | _ => "vertical"
  };

type clickParams = {
  .
  "key": string,
  "path": array(string),
  "domEvent": ReactEvent.Mouse.t,
};

[@bs.obj]
external makePropsMenu:
  (
    ~id: string=?,
    ~theme: string=?,
    ~mode: option(string)=?,
    ~selectable: bool=?,
    ~selectedKeys: array(string)=?,
    ~defaultSelectedKeys: array(string)=?,
    ~openKeys: array(string)=?,
    ~defaultOpenKeys: array(string)=?,
    ~onOpenChange: array(string) => unit=?,
    ~onClick: clickParams => unit=?,
    ~onSelect: clickParams => unit=?,
    ~onDeselect: clickParams => unit=?,
    ~style: ReactDOMRe.Style.t=?,
    ~openTransitionName: string=?,
    ~openAnimation: string=?,
    ~className: string=?,
    ~prefixCls: string=?,
    ~multiple: bool=?,
    ~inlineIndent: int=?,
    ~inlineCollapsed: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module "antd/lib/menu"]
external reactComponent: React.component('a) = "default";

[@react.component]
let make =
    (
      ~id: option(string)=?,
      ~theme: option(theme)=?,
      ~mode: option(mode)=?,
      ~selectable: option(bool)=?,
      ~selectedKeys: option(array(string))=?,
      ~defaultSelectedKeys: option(array(string))=?,
      ~openKeys: option(array(string))=?,
      ~defaultOpenKeys: option(array(string))=?,
      ~onOpenChange: option(array(string) => unit)=?,
      ~onClick: option(clickParams => unit)=?,
      ~onSelect: option(clickParams => unit)=?,
      ~onDeselect: option(clickParams => unit)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~openTransitionName: option(string)=?,
      ~openAnimation: option(string)=?,
      ~className: option(string)=?,
      ~prefixCls: option(string)=?,
      ~multiple: option(bool)=?,
      ~inlineIndent: option(int)=?,
      ~inlineCollapsed: option(bool)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsMenu(
      ~id?,
      ~theme=?Js.Option.map((. b) => themeToJs(b), theme),
      ~mode=Belt.Option.map(mode, modeToJs),
      ~selectable?,
      ~selectedKeys?,
      ~defaultSelectedKeys?,
      ~openKeys?,
      ~defaultOpenKeys?,
      ~onOpenChange?,
      ~onClick?,
      ~onSelect?,
      ~onDeselect?,
      ~style?,
      ~openTransitionName?,
      ~openAnimation?,
      ~className?,
      ~prefixCls?,
      ~multiple?,
      ~inlineIndent?,
      ~inlineCollapsed?,
      ~children?,
      (),
    ),
  );

module Item = {
  [@bs.module "antd/lib/menu"] [@bs.scope "default"]
  external reactComponent: React.component('a) = "Item";

  [@bs.obj]
  external makePropsItem:
    (
      ~rootPrefixCls: string=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~onClick: clickParams => unit=?,
      ~onItemHover: ReactEvent.Mouse.t => unit=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@react.component]
  let make =
      (
        ~rootPrefixCls: option(string)=?,
        ~disabled: option(bool)=?,
        ~id: option(string)=?,
        ~className: option(string)=?,
        ~onClick: option(clickParams => unit)=?,
        ~onItemHover: option(ReactEvent.Mouse.t => unit)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
        (),
      ) =>
    React.createElement(
      reactComponent,
      makePropsItem(
        ~rootPrefixCls?,
        ~disabled?,
        ~id?,
        ~className?,
        ~onClick?,
        ~onItemHover?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

module SubMenu = {
  [@bs.module "antd/lib/menu"] [@bs.scope "default"]
  external reactComponent: React.component('a) = "SubMenu";

  [@bs.obj]
  external makePropsItem:
    (
      ~disabled: bool=?,
      ~title: React.element=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@react.component]
  let make =
      (
        ~disabled: option(bool)=?,
        ~title: option(React.element)=?,
        ~id: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
        (),
      ) =>
    React.createElement(
      reactComponent,
      makePropsItem(
        ~disabled?,
        ~title?,
        ~id?,
        ~className?,
        ~style?,
        ~children?,
        (),
      ),
    );
};