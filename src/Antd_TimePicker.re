[%bs.raw {|require("antd/lib/time-picker/style")|}];

type moment = MomentRe.Moment.t;

[@bs.deriving jsConverter]
type pickerSize = [ | `small | `default | `large];

type t('a) = Js.t({. timePickerProps: int} as 'a);

[@bs.module "antd/lib/time-picker"] [@reac.component]
external makeTimePickerProps:
  (
    ~size: option(string)=?,
    ~value: moment=?,
    ~defaultValue: moment=?,
    ~_open: bool=?,
    ~format: string=?,
    ~onChange: (moment, string) => unit=?,
    ~onOpenChange: bool => unit=?,
    ~disabled: bool=?,
    ~placeholder: string=?,
    ~prefixCls: string=?,
    ~hideDisabledOptions: bool=?,
    ~disabledHours: unit => array(int)=?,
    ~disabledMinutes: int => array(int)=?,
    ~disabledSeconds: (int, int) => array(int)=?,
    ~getPopupContainer: Dom.htmlElement => Dom.htmlElement=?,
    ~addon: 'a=?,
    ~use12Hours: bool=?,
    ~focusOnOpen: bool=?,
    ~hourStep: int=?,
    ~minuteStep: int=?,
    ~secondStep: int=?,
    ~allowEmpty: bool=?,
    ~clearText: bool=?,
    ~defaultOpenValue: moment=?,
    ~popupClassName: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/time-picker";

[@react.component]
let make =
    (
      ~size: option(pickerSize)=?,
      ~value: option(moment)=?,
      ~defaultValue: option(moment)=?,
      ~_open: option(bool)=?,
      ~format: option(string)=?,
      ~onChange: option((moment, string) => unit)=?,
      ~onOpenChange: option(bool => unit)=?,
      ~disabled: option(bool)=?,
      ~placeholder: option(string)=?,
      ~prefixCls: option(string)=?,
      ~hideDisabledOptions: option(bool)=?,
      ~disabledHours: option(unit => array(int))=?,
      ~disabledMinutes: option(int => array(int))=?,
      ~disabledSeconds: option((int, int) => array(int))=?,
      ~getPopupContainer: option(Dom.htmlElement => Dom.htmlElement)=?,
      ~addon: option('a)=?,
      ~use12Hours: option(bool)=?,
      ~focusOnOpen: option(bool)=?,
      ~hourStep: option(int)=?,
      ~minuteStep: option(int)=?,
      ~secondStep: option(int)=?,
      ~allowEmpty: option(bool)=?,
      ~clearText: option(bool)=?,
      ~defaultOpenValue: option(moment)=?,
      ~popupClassName: option(string)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makeTimePickerProps(
      ~size=Belt.Option.map(size, pickerSizeToJs),
      ~value?,
      ~defaultValue?,
      ~_open?,
      ~format?,
      ~onChange?,
      ~onOpenChange?,
      ~disabled?,
      ~placeholder?,
      ~prefixCls?,
      ~hideDisabledOptions?,
      ~disabledHours?,
      ~disabledMinutes?,
      ~disabledSeconds?,
      ~getPopupContainer?,
      ~addon?,
      ~use12Hours?,
      ~focusOnOpen?,
      ~hourStep?,
      ~minuteStep?,
      ~secondStep?,
      ~allowEmpty?,
      ~clearText?,
      ~defaultOpenValue?,
      ~popupClassName?,
      ~id?,
      ~className?,
      ~style?,
      (),
    ),
  );

/*
 [@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/time-picker";

 [%bs.raw {|require("antd/lib/time-picker/style")|}];

 [@bs.obj]
 external makeProps:
   (
     ~addon: React.element=?,
     ~allowEmpty: bool=?,
     ~autoFocus: bool=?,
     ~className: string=?,
     ~clearText: string=?,
     ~defaultOpenValue: string=?,
     ~defaultValue: string=?,
     ~disabled: bool=?,
     ~disabledHours: string => unit=?,
     ~disabledMinutes: string => unit=?,
     ~disabledSeconds: string => unit=?,
     ~format: string=?,
     ~getPopupContainer: string=?,
     ~hideDisabledOptions: bool=?,
     ~hourStep: int=?,
     ~inputReadOnly: bool=?,
     ~minuteStep: int=?,
     ~open_: bool=?,
     ~placeholder: string=?,
     ~popupClassName: string=?,
     ~secondStep: int=?,
     ~use12Hours: bool=?,
     ~value: string=?,
     ~onChange: (string, string) => unit=?,
     ~onOpenChange: bool => unit=?,
     ~id: string=?,
     ~style: ReactDOMRe.Style.t=?,
     unit
   ) =>
   _ =
   "";

 let make =
     (
       ~addon=?,
       ~allowEmpty=?,
       ~autoFocus=?,
       ~className=?,
       ~clearText=?,
       ~defaultOpenValue=?,
       ~defaultValue=?,
       ~disabled=?,
       ~disabledHours=?,
       ~disabledMinutes=?,
       ~disabledSeconds=?,
       ~format=?,
       ~getPopupContainer=?,
       ~hideDisabledOptions=?,
       ~hourStep=?,
       ~inputReadOnly=?,
       ~minuteStep=?,
       ~open_=?,
       ~placeholder=?,
       ~popupClassName=?,
       ~secondStep=?,
       ~use12Hours=?,
       ~value=?,
       ~onChange=?,
       ~onOpenChange=?,
       ~id=?,
       ~style=?,
       children,
     ) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=
       makeProps(
         ~addon?,
         ~allowEmpty?,
         ~autoFocus?,
         ~className?,
         ~clearText?,
         ~defaultOpenValue?,
         ~defaultValue?,
         ~disabled?,
         ~disabledHours?,
         ~disabledMinutes?,
         ~disabledSeconds?,
         ~format?,
         ~getPopupContainer?,
         ~hideDisabledOptions?,
         ~hourStep?,
         ~inputReadOnly?,
         ~minuteStep?,
         ~open_?,
         ~placeholder?,
         ~popupClassName?,
         ~secondStep?,
         ~use12Hours?,
         ~value?,
         ~onChange?,
         ~onOpenChange?,
         ~id?,
         ~style?,
         (),
       ),
     children,
   );

 /*
  addon	called from timepicker panel to render some addon to its bottom	function	-
  allowEmpty	allow clearing text	boolean	true
  autoFocus	get focus when component mounted	boolean	false
  className	className of picker	string	''
  clearText	clear tooltip of icon	string	clear
  defaultOpenValue	default open panel value, used to set utcOffset,locale if value/defaultValue absent	moment	moment()
  defaultValue	to set default time	moment	-
  disabled	determine whether the TimePicker is disabled	boolean	false
  disabledHours	to specify the hours that cannot be selected	function()	-
  disabledMinutes	to specify the minutes that cannot be selected	function(selectedHour)	-
  disabledSeconds	to specify the seconds that cannot be selected	function(selectedHour, selectedMinute)	-
  format	to set the time format	string	"HH:mm:ss"
  getPopupContainer	to set the container of the floating layer, while the default is to create a div element in body	function(trigger)	-
  hideDisabledOptions	hide the options that can not be selected	boolean	false
  hourStep	interval between hours in picker	number	1
  inputReadOnly	Set the readonly attribute of the input tag (avoids virtual keyboard on touch devices)	boolean	false
  minuteStep	interval between minutes in picker	number	1
  open	whether to popup panel	boolean	false
  placeholder	display when there's no value	string	"Select a time"
  popupClassName	className of panel	string	''
  secondStep	interval between seconds in picker	number	1
  use12Hours	display as 12 hours format, with default format h:mm:ss a	boolean	false
  value	to set time	moment	-
  onChange	a callback function, can be executed when the selected time is changing	function(time: moment, timeString: string): void	-
  onOpenChange	a callback function which will be called while panel opening/closing	(open: boolean): void	-
  */


 */
module Locale = {
  [@bs.deriving abstract]
  type t = pri {placeholder: string};
};