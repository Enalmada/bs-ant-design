/* last checked v3.10 */
[%bs.raw {|require("antd/lib/layout/style")|}];

module Layout = {
  [@bs.obj]
  external makePropsLayout:
    (
      ~hasSider: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module]
  external reactComponent: React.component('a) = "antd/lib/layout";

  [@react.component]
  let make =
      (
        ~hasSider: option(bool)=?,
        ~id: option(string)=?,
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsLayout(~hasSider?, ~id?, ~className?, ~style?, ~children?, ()),
    );
};

/*
 className	container className	string	-
 hasSider	whether contain Sider in children, don't have to assign it normally. Useful in ssr avoid style flickering	boolean	-
 style	to customize the styles	object
 */

module Header = {
  [@bs.module "antd/lib/layout"] [@react.component]
  external make:
    (
      ~hasSider: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Header";
};

module Footer = {
  [@bs.module "antd/lib/layout"] [@react.component]
  external make:
    (
      ~hasSider: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Footer";
};

module Content = {
  [@bs.module "antd/lib/layout"] [@react.component]
  external make:
    (
      ~hasSider: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Content";
};

/*
 breakpoint	breakpoints of the responsive layout	Enum { 'xs', 'sm', 'md', 'lg', 'xl', 'xxl' }	-
 className	container className	string	-
 collapsed	to set the current status	boolean	-
 collapsedWidth	width of the collapsed sidebar, by setting to 0 a special trigger will appear	number	64
 collapsible	whether can be collapsed	boolean	false
 defaultCollapsed	to set the initial status	boolean	false
 reverseArrow	reverse direction of arrow, for a sider that expands from the right	boolean	false
 style	to customize the styles	object	-
 theme	color theme of the sidebar	string: light dark	dark
 trigger	specify the customized trigger, set to null to hide the trigger	string|ReactNode	-
 width	width of the sidebar	number|string	200
 onCollapse	the callback function, executed by clicking the trigger or activating the responsive layout	(collapsed, type) => {}	-
 onBreakpoint	the callback function, executed when breakpoints changed	(broken) => {}	-
 */

module Sider = {
  [@bs.deriving {jsConverter: newType}]
  type collapseType = [ | `clickTrigger | `responsive];
  [@bs.obj]
  external makePropsSider:
    (
      ~breakpoint: string=?,
      ~className: string=?,
      ~collapsed: bool=?,
      ~collapsedWidth: int=?,
      ~collapsible: bool=?,
      ~defaultCollapsed: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      ~reverseArrow: bool=?,
      ~onCollapse: (bool, abs_collapseType) => unit=?,
      ~trigger: React.element=?,
      ~width: int=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/layout"]
  external reactComponent: React.component('a) = "Sider";

  [@react.component]
  let make =
      (
        ~breakpoint: option(string)=?,
        ~className: option(string)=?,
        ~collapsed: option(bool)=?,
        ~collapsedWidth: option(int)=?,
        ~collapsible: option(bool)=?,
        ~defaultCollapsed: option(bool)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~prefixCls: option(string)=?,
        ~reverseArrow: option(bool)=?,
        ~onCollapse: option((bool, abs_collapseType) => unit)=?,
        ~trigger: option(React.element)=?,
        ~width: option(int)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsSider(
        ~breakpoint?,
        ~className?,
        ~collapsed?,
        ~collapsedWidth?,
        ~collapsible?,
        ~defaultCollapsed?,
        ~style?,
        ~prefixCls?,
        ~reverseArrow?,
        ~onCollapse?,
        ~trigger?,
        ~width?,
        ~children?,
        (),
      ),
    );
};