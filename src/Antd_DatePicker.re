[%bs.raw {|require("antd/lib/date-picker/style")|}];

[@bs.deriving jsConverter]
type rangePickerMode = [ | `time | `date | `month | `year | `decade];

[@bs.deriving jsConverter]
type pickerSize = [ | `small | `default | `large];

type moment = MomentRe.Moment.t;

type boolOrProps(_) =
  | ShowTimeBool(bool): boolOrProps(bool)
  | ShowTimeProps(Antd_TimePicker.t('a))
    : boolOrProps(Antd_TimePicker.t('a));

let boolOrPropsToProp = (type a, boolOrProps: boolOrProps(a)): a =>
  switch (boolOrProps) {
  | ShowTimeBool(bool) => bool
  | ShowTimeProps(timePickerProps) => timePickerProps
  };

type t('a) = Js.t({. datePickerProps: int} as 'a);

module Internal = {
  [@bs.obj]
  external makeProps:
    (
      ~_open: bool=?,
      ~allowClear: bool=?,
      ~autoFocus: bool=?,
      ~className: string=?,
      ~dateRender: (moment, moment) => React.element=?,
      ~defaultPickerValue: moment=?,
      ~defaultValue: moment=?,
      ~disabled: bool=?,
      ~disabledDate: moment => bool=?,
      ~disabledTime: moment => 'b=?, /* todo: (current: moment.Moment) => { disabledHours?: () => number[],disabledMinutes?: () => number[], disabledSeconds?: () => number[],}; */
      ~dropdownClassName: string=?,
      ~format: string=?,
      ~getCalendarContainer: Dom.htmlElement => Dom.htmlElement=?,
      ~id: string=?,
      ~inputPrefixCls: string=?,
      ~locale: 'c=?,
      ~mode: option(string)=?,
      ~onChange: (moment, string) => unit=?,
      ~onOk: moment => unit=?,
      ~onOpenChange: bool => unit=?,
      ~placeholder: string=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      ~renderExtraFooter: unit => React.element=?,
      ~showTime: 'a=?, /* TimePickerProps | boolean; */
      ~showToday: bool=?,
      ~size: option(string)=?,
      ~suffixIcon: React.element=?,
      ~style: ReactDOMRe.Style.t=?,
      ~onPanelChange: (moment, string) => unit=?,
      ~value: moment=?,
      unit
    ) =>
    _ =
    "";
  [@bs.module]
  external reactComponent: React.component('a) = "antd/lib/date-picker";
};
[@react.component]
let make =
    (
      ~_open: option(bool)=?,
      ~allowClear: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~className: option(string)=?,
      ~dateRender: option((moment, moment) => React.element)=?,
      ~defaultPickerValue: option(moment)=?,
      ~defaultValue: option(moment)=?,
      ~disabled: option(bool)=?,
      ~disabledDate: option(moment => bool)=?,
      ~disabledTime: option(moment => 'b)=?, /* todo: (current: moment.Moment) => { disabledHours?: () => number[],disabledMinutes?: () => number[], disabledSeconds?: () => number[],}; */
      ~dropdownClassName: option(string)=?,
      ~format: option(string)=?,
      ~getCalendarContainer: option(Dom.htmlElement => Dom.htmlElement)=?,
      ~id: option(string)=?,
      ~inputPrefixCls: option(string)=?,
      ~locale: option('c)=?,
      ~mode: option(rangePickerMode)=?,
      ~onChange: option((moment, string) => unit)=?,
      ~onOk: option(moment => unit)=?,
      ~onOpenChange: option(bool => unit)=?,
      ~placeholder: option(string)=?,
      ~popupStyle: option(ReactDOMRe.Style.t)=?,
      ~prefixCls: option(string)=?,
      ~renderExtraFooter: option(unit => React.element)=?,
      ~showTime: option('a)=?, /* TimePickerProps | boolean; */
      ~showToday: option(bool)=?,
      ~size: option(pickerSize)=?,
      ~suffixIcon: option(React.element)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~onPanelChange: option((moment, string) => unit)=?,
      ~value: option(moment)=?,
    ) =>
  React.createElement(
    Internal.reactComponent,
    Internal.makeProps(
      ~_open?,
      ~allowClear?,
      ~autoFocus?,
      ~className?,
      ~dateRender?,
      ~defaultPickerValue?,
      ~defaultValue?,
      ~disabled?,
      ~disabledDate?,
      ~disabledTime?,
      ~dropdownClassName?,
      ~format?,
      ~getCalendarContainer?,
      ~id?,
      ~inputPrefixCls?,
      ~locale?,
      ~mode={
        Js.Option.map((. b) => rangePickerModeToJs(b), mode);
      },
      ~onChange?,
      ~onOk?,
      ~onOpenChange?,
      ~placeholder?,
      ~popupStyle?,
      ~prefixCls?,
      ~renderExtraFooter?,
      ~showTime?,
      ~showToday?,
      ~size={
        Js.Option.map((. b) => pickerSizeToJs(b), size);
      },
      ~suffixIcon?,
      ~style?,
      ~onPanelChange?,
      ~value?,
      (),
    ),
  );

module RangePicker = {
  type t('a) = Js.t({. rangePickerProps: int} as 'a);

  [@bs.module "antd/lib/date-picker"] [@react.component]
  external make:
    (
      ~value: 'a=?,
      ~defaultValue: 'b=?,
      ~defaultPickerValue: 'c=?,
      ~onChange: ('d, (string, string)) => unit=?,
      ~onCalendarChange: ('e, (string, string)) => unit=?,
      ~onOk: moment => unit=?,
      ~showTime: 'f=?, /* TimePickerProps | boolean; */
      ~ranges: 'g=?, /* todo: {[range: string]: RangePickerPresetRange,}; */
      ~placeholder: (string, string)=?,
      ~mode: string=?,
      ~disabledTime: (moment, string) => 'h=?, /* todo: (current: moment.Moment, type: string) => { disabledHours?: () => number[],disabledMinutes?: () => number[], disabledSeconds?: () => number[],}; */
      ~onPanelChange: 'i=?, /* todo: onPanelChange?: (value?: RangePickerValue, mode?: string | string[]) => void;*/
      /*export interface PickerProps*/
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'j=?,
      ~size: string=?,
      ~getCalendarContainer: Dom.htmlElement => Dom.htmlElement=?,
      ~_open: bool=?,
      ~disabledDate: moment => bool=?,
      ~renderExtraFooter: unit => React.element=?,
      ~dateRender: (moment, moment) => React.element=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "RangePicker";
  let make = make;
};

module MonthPicker = {
  type t('a) = Js.t({. monthPickerProps: int} as 'a);

  [@bs.module "antd/lib/date-picker"] [@react.component]
  external make:
    (
      ~_open: bool=?,
      ~onOpenChange: bool => unit=?,
      ~placeholder: string=?,
      ~monthCellContentRender: (moment, 'a) => React.element=?, /* not in interface.tsx */
      /*export interface SinglePickerProps*/
      ~value: moment=?,
      ~defaultValue: moment=?,
      ~defaultPickerValue: moment=?,
      ~onChange: (moment, string) => unit=?,
      /*export interface PickerProps*/
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'c=?,
      ~size: string=?,
      ~renderExtraFooter: unit => React.element=?,
      ~getCalendarContainer: Dom.htmlElement => Dom.htmlElement=?,
      ~disabledDate: moment => bool=?,
      ~dateRender: (moment, moment) => React.element=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    React.element =
    "MonthPicker";
  let make = make;
};

module WeekPicker = {
  type t('a) = Js.t({. weekPickerProps: int} as 'a);
  [@bs.module "antd/lib/date-picker"] [@react.component]
  external make:
    (
      ~_open: bool=?,
      ~onOpenChange: bool => unit=?,
      ~placeholder: string=?,
      /*export interface SinglePickerProps*/
      ~value: moment=?,
      ~defaultValue: moment=?,
      ~defaultPickerValue: moment=?,
      ~onChange: (moment, string) => unit=?,
      /*export interface PickerProps*/
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'c=?,
      ~size: string=?,
      ~renderExtraFooter: unit => React.element=?,
      ~getCalendarContainer: Dom.htmlElement => Dom.htmlElement=?,
      ~disabledDate: moment => bool=?,
      ~dateRender: (moment, moment) => React.element=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "WeekPicker";
  let make = make;
};

/*
 [@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/date-picker";

 [%bs.raw {|require("antd/lib/date-picker/style")|}];


  COMMON
  --------------------
  allowClear	Whether to show clear button	boolean	true
  autoFocus	get focus when component mounted	boolean	false
  className	picker className	string	''
  dateRender	custom rendering function for date cells	function(currentDate: moment, today: moment) => React.ReactNode	-
  disabled	determine whether the DatePicker is disabled	boolean	false
  disabledDate	specify the date that cannot be selected	(currentDate: moment) => boolean	-
  dropdownClassName	to customize the className of the popup calendar	string	-
  getCalendarContainer	to set the container of the floating layer, while the default is to create a div element in body	function(trigger)	-
  locale	localization configuration	object	default
  mode	picker panel mode	time|date|month|year	'date'
  open	open state of picker	boolean	-
  placeholder	placeholder of date input	string|RangePicker[]	-
  popupStyle	to customize the style of the popup calendar	object	{}
  size	determine the size of the input box, the height of large and small, are 40px and 24px respectively, while default size is 32px	string	-
  style	to customize the style of the input box	object	{}
  onOpenChange	a callback function, can be executed whether the popup calendar is popped up or closed	function(status)	-
  onPanelChange	callback when picker panel mode is changed	function(value, mode)
  */

/*
 defaultValue	to set default date	moment	-
 disabledTime	to specify the time that cannot be selected	function(date)	-
 format	to set the date format, refer to moment.js	string	"YYYY-MM-DD"
 renderExtraFooter	render extra footer in panel	() => React.ReactNode	-
 showTime	to provide an additional time selection	object|boolean	TimePicker Options
 showTime.defaultValue	to set default time of selected date, demo	moment	moment()
 showToday	whether to show "Today" button	boolean	true
 value	to set date	moment	-
 onCalendarChange	a callback function, can be executed when the start time or the end time of the range is changing	function(dates: moment, moment, dateStrings: string, string)	?
 onChange	a callback function, can be executed when the selected time is changing	function(date: moment, dateString: string)	-
 onOk	callback when click ok button	function()	-
 */
/*
 [@bs.deriving jsConverter]
 type mode = [ | `time | `date | `month | `year];

 [@bs.obj]
 external makeProps:
   (
     ~allowClear: bool=?,
     ~allowFocus: bool=?,
     ~className: string=?,
     ~dateRender: array(string) => unit=?,
     ~disabled: bool=?,
     ~disabledDate: string => unit=?,
     ~dropdownClassName: string=?,
     ~getCalendarContainer: string=?,
     ~locale: string=?,
     ~mode: string=?,
     ~_open: bool=?,
     ~placeholder: string=?,
     ~popupStyle: ReactDOMRe.Style.t=?,
     ~size: string=?,
     ~style: ReactDOMRe.Style.t=?,
     ~onOpenChange: array(string) => unit=?,
     ~onPanelChange: array(string) => unit=?,
     ~defaultValue: string=?,
     ~disabledTime: string => unit=?,
     ~format: string=?,
     ~renderExtraFooter: string => unit=?,
     ~showTime: bool=?,
     ~showTimeDefaultValue: string=?,
     ~showToday: bool=?,
     ~value: string=?,
     ~onCalendarChange: array(string) => unit=?,
     ~onChange: array(string) => unit=?,
     ~onOk: array(string) => unit=?,
     ~id: string=?,
     unit
   ) =>
   _ =
   "";

 let make =
     (
       ~allowFocus=?,
       ~className=?,
       ~dateRender=?,
       ~disabled=?,
       ~disabledDate=?,
       ~dropdownClassName=?,
       ~getCalendarContainer=?,
       ~locale=?,
       ~mode=?,
       ~_open=?,
       ~placeholder=?,
       ~popupStyle=?,
       ~size=?,
       ~style=?,
       ~onOpenChange=?,
       ~onPanelChange=?,
       ~defaultValue=?,
       ~disabledTime=?,
       ~format=?,
       ~renderExtraFooter=?,
       ~showTime=?,
       ~showTimeDefaultValue=?,
       ~showToday=?,
       ~value=?,
       ~onCalendarChange=?,
       ~onChange=?,
       ~onOk=?,
       ~id=?,
       children,
     ) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=
       makeProps(
         ~allowFocus?,
         ~className?,
         ~dateRender?,
         ~disabled?,
         ~disabledDate?,
         ~dropdownClassName?,
         ~getCalendarContainer?,
         ~locale?,
         ~mode=?Js.Option.map((. b) => modeToJs(b), mode),
         ~_open?,
         ~placeholder?,
         ~popupStyle?,
         ~size?,
         ~style?,
         ~onOpenChange?,
         ~onPanelChange?,
         ~defaultValue?,
         ~disabledTime?,
         ~format?,
         ~renderExtraFooter?,
         ~showTime?,
         ~showTimeDefaultValue?,
         ~showToday?,
         ~value?,
         ~onCalendarChange?,
         ~onChange?,
         ~onOk?,
         ~id?,
         (),
       ),
     children,
   );


 */
module Locale = {
  module Lang = {
    [@bs.deriving abstract]
    type t =
      pri {
        placeholder: string,
        rangePlaceholder: array(string),
        today: string,
        now: string,
        backToToday: string,
        ok: string,
        clear: string,
        month: string,
        year: string,
        timeSelect: string,
        dateSelect: string,
        weekSelect: string,
        monthSelect: string,
        yearSelect: string,
        decadeSelect: string,
        yearFormat: string,
        dateFormat: string,
        dayFormat: string,
        dateTimeFormat: string,
        monthBeforeYear: bool,
        previousMonth: string,
        nextMonth: string,
        previousYear: string,
        nextYear: string,
        previousDecade: string,
        nextDecade: string,
        previousCentury: string,
        nextCentury: string,
      };
  };

  [@bs.deriving abstract]
  type t =
    pri {
      lang: Lang.t,
      timePickerLocale: Antd_TimePicker.Locale.t,
    };
};