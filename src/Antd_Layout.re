/* last checked v3.10 */
[%bs.raw {|require("antd/lib/layout/style")|}];

open Antd_Helpers;

[@bs.module "antd/lib/layout"] [@react.component]
external make:
  (
    ~hasSider: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~childre: React.element=?
  ) =>
  React.element =
  "default";

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
      ~childre: React.element=?
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
      ~childre: React.element=?
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
      ~childre: React.element=?
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
  [@bs.module "antd/lib/layout"] [@react.component]
  external make:
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
      ~trigger: ReasonReact.reactElement=?,
      ~width: int=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Sider";
};