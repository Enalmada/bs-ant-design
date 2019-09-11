// decimalSeparator	decimal separator	string	.
// formatter	customize value display logic	(value) => ReactNode	-
// groupSeparator	group separator	string	,
// precision	precision of input value	number	-
// prefix	prefix node of value	string | ReactNode	-
// suffix	suffix node of value	string | ReactNode	-
// title	Display title	string | ReactNode	-
// value	Display value	string | number	-
// valueStyle	Set value css style	style	-


[@bs.obj]
external makePropsStatistic:
  (
    ~decimalSeparator: string=?,
    ~formatter: string => React.element=?,
    ~groupSeparator: 'a=?,
    ~precision: int=?,
    ~prefix: React.element=?,
    ~suffix: React.element=?,
    ~title: React.element=?,
    ~value: 'a=?,
    ~valueStyle: ReactDOMRe.Style.t=?,
    ~id: string=?,
    ~className: string=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('b) = "antd/lib/statistic";

[@react.component]
let make =
    (
      ~decimalSeparator: option(string)=?,
      ~formatter: option(string => React.element)=?,
      ~groupSeparator: option('a)=?,
      ~precision: option(int)=?,
      ~prefix: option(React.element)=?,
      ~suffix: option(React.element)=?,
      ~title: option(React.element)=?,
      ~value: option('a)=?,
      ~valueStyle: option(ReactDOMRe.Style.t)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsStatistic(
      ~decimalSeparator?,
      ~formatter?,
      ~groupSeparator?,
      ~precision?,
      ~prefix?,
      ~suffix?,
      ~title?,
      ~value?,
      ~valueStyle?,
      ~id?,
      ~className?,
      (),
    ),
  );

module Countdown = {
  [@bs.module "antd/lib/statistic"] [@react.component]
  external make:
    (
      ~format: string=?,
      ~onFinish: unit => unit=?,
      ~prefix: React.element=?,
      ~suffix: React.element=?,
      ~title: React.element=?,
      ~value: int=?,
      ~valueStyle: ReactDOMRe.Style.t=?,
      ~id: string=?,
      ~className: string=?,
      unit
    ) =>
    React.element =
    "Countdown";
};