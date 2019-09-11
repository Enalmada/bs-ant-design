/*
 dateCellRender	Customize the display of the date cell, the returned content will be appended to the cell	function(date: moment): ReactNode	-
 dateFullCellRender	Customize the display of the date cell, the returned content will override the cell	function(date: moment): ReactNode	-
 defaultValue	The date selected by default	moment	default date
 disabledDate	Function that specifies the dates that cannot be selected	(currentDate: moment) => boolean	-
 fullscreen	Whether to display in full-screen	boolean	true
 locale	The calendar's locale	object	default
 mode	The display mode of the calendar	month | year	month
 monthCellRender	Customize the display of the month cell, the returned content will be appended to the cell	function(date: moment): ReactNode	-
 monthFullCellRender	Customize the display of the month cell, the returned content will override the cell	function(date: moment): ReactNode	-
 validRange	to set valid range	[moment, moment]	-
 value	The current selected date	moment	current date
 onPanelChange	Callback for when panel changes	function(date: moment, mode: string)	-
 onSelect	Callback for when a date is selected	function(date: moment?	-
 onChange	Callback for when date changes	function(date: moment?	-
   */
module Locale = Antd_DatePicker.Locale;

[@bs.deriving jsConverter]
type mode = [ | `month | `year];
type moment = MomentRe.Moment.t;

[@bs.obj]
external makePropsCalendar:
  (
    ~dateCellRender: moment => React.element=?,
    ~dateFullCellRender: moment => React.element=?,
    ~defaultValue: moment=?,
    ~disabledDate: moment => bool=?,
    ~fullscreen: bool=?,
    ~locale: 'c=?,
    ~mode: option(string)=?,
    ~monthCellRender: moment => React.element=?,
    ~monthFullCellRender: moment => React.element=?,
    ~validRange: array(moment)=?,
    ~value: moment=?,
    ~onPanelChange: (moment, string) => unit=?,
    ~onSelect: moment => unit=?,
    ~onChange: moment => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/calendar";

[@react.component]
let make =
    (
      ~dateCellRender: option(moment => React.element)=?,
      ~dateFullCellRender: option(moment => React.element)=?,
      ~defaultValue: option(moment)=?,
      ~disabledDate: option(moment => bool)=?,
      ~fullscreen: option(bool)=?,
      ~locale: option('c)=?,
      ~mode: option(mode)=?,
      ~monthCellRender: option(moment => React.element)=?,
      ~monthFullCellRender: option(moment => React.element)=?,
      ~validRange: option(array(moment))=?,
      ~value: option(moment)=?,
      ~onPanelChange: option((moment, string) => unit)=?,
      ~onSelect: option(moment => unit)=?,
      ~onChange: option(moment => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsCalendar(
      ~dateCellRender?,
      ~dateFullCellRender?,
      ~defaultValue?,
      ~disabledDate?,
      ~fullscreen?,
      ~locale?,
      ~mode={
        Js.Option.map((. b) => modeToJs(b), mode);
      },
      ~monthCellRender?,
      ~monthFullCellRender?,
      ~validRange?,
      ~value?,
      ~onPanelChange?,
      ~onSelect?,
      ~onChange?,
      ~id?,
      ~className?,
      ~style?,
      (),
    ),
  );