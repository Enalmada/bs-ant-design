/*
 allowClear	Show clear button.	boolean	false
 autoFocus	Get focus by default	boolean	false
 defaultActiveFirstOption	Whether active first option by default	boolean	true
 defaultValue	Initial selected option.	string|string[] number|number[]	-
 disabled	Whether disabled select	boolean	false
 dropdownClassName	className of dropdown menu	string	-
 dropdownMatchSelectWidth	Whether dropdown's width is same with select.	boolean	true
 dropdownStyle	style of dropdown menu	object	-
 filterOption	If true, filter options by input, if function, filter options against it. The function will receive two arguments, inputValue and option, if the function returns true, the option will be included in the filtered set; Otherwise, it will be excluded.	boolean or function(inputValue, option)	true
 firstActiveValue	Value of action option by default	string|string[]	-
 getPopupContainer	Parent Node which the selector should be rendered to. Default to body. When position issues happen, try to modify it into scrollable content and position it relative. Example	function(triggerNode)	() => document.body
 labelInValue	whether to embed label in value, turn the format of value from string to {key: string, label: ReactNode}	boolean	false
 maxTagCount	Max tag count to show	number	-
 maxTagPlaceholder	Placeholder for not showing tags	ReactNode/function(omittedValues)	-
 mode	Set mode of Select	'default' | 'multiple' | 'tags'	'default'
 notFoundContent	Specify content to show when no result matches..	string	'Not Found'
 optionFilterProp	Which prop value of option will be used for filter if filterOption is true	string	value
 optionLabelProp	Which prop value of option will render as content of select.	string	value for combobox, children for other modes
 placeholder	Placeholder of select	string|ReactNode	-
 showArrow	Whether to show the drop-down arrow	boolean	true
 showSearch	Whether show search input in single mode.	boolean	false
 size	Size of Select input. default large small	string	default
 tokenSeparators	Separator used to tokenize on tag/multiple mode	string[]
 value	Current selected option.	string|number|string[]|number[]	-
 onBlur	Called when blur	function	-
 onChange	Called when select an option or input value change, or value of input is changed in combobox mode	function(value, option:Option/Array<Option>)	-
 onDeselect	Called when a option is deselected, the params are option's value (or key) . only called for multiple or tags, effective in multiple or tags mode only.	function(value, option:Option)	-
 onFocus	Called when focus	function	-
 onInputKeyDown	Called when key pressed	function	-
 onMouseEnter	Called when mouse enter	function	-
 onMouseLeave	Called when mouse leave	function	-
 onPopupScroll	Called when dropdown scrolls	function	-
 onSearch	Callback function that is fired when input changed.	function(value: string)
 onSelect	Called when a option is selected, the params are option's value (or key) and option instance.	function(value, option:Option)	-
 defaultOpen	Initial open state of dropdown	boolean	-
 open	Controlled open state of dropdown	boolean	-
 onDropdownVisibleChange	Call when dropdown open	function(open)	-
  */
[%bs.raw {|require("antd/lib/select/style")|}];

[@bs.deriving jsConverter]
type mode = [ | `default | `multiple | `tags];

[@bs.deriving accessors]
type value =
  | String(string)
  | List(list(string));

[@bs.obj]
external makePropsSelect:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultValue: 'value=?,
    ~disabled: bool=?,
    ~dropdownClassName: string=?,
    ~dropdownMatchSelectWidth: bool=?,
    ~dropdownStyle: ReactDOMRe.Style.t=?,
    ~filterOption: bool=?,
    ~firstActiveValue: array(string)=?,
    ~labelInValue: bool=?,
    ~maxTagCount: int=?,
    ~maxTagPlaceholder: React.element=?,
    ~mode: string=?,
    ~notFoundContent: string=?,
    ~placeholder: React.element=?,
    ~showArrow: bool=?,
    ~showSearch: bool=?,
    ~size: string=?,
    ~tokenSeparators: array(string)=?,
    ~value: 'value=?,
    ~onBlur: 'value => unit=?,
    ~onChange: 'value => unit=?,
    ~onSearch: string => unit=?,
    ~onSelect: 'value => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~getPopupContainer: Dom.htmlElement => Dom.htmlElement=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/select";

[@react.component]
let make =
    (
      ~allowClear: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~defaultActiveFirstOption: option(bool)=?,
      ~defaultValue: option('value)=?,
      ~disabled: option(bool)=?,
      ~dropdownClassName: option(string)=?,
      ~dropdownMatchSelectWidth: option(bool)=?,
      ~dropdownStyle: option(ReactDOMRe.Style.t)=?,
      ~filterOption: option(bool)=?,
      ~firstActiveValue: option(array(string))=?,
      ~labelInValue: option(bool)=?,
      ~maxTagCount: option(int)=?,
      ~maxTagPlaceholder: option(React.element)=?,
      ~mode: option(string)=?,
      ~notFoundContent: option(string)=?,
      ~placeholder: option(React.element)=?,
      ~showArrow: option(bool)=?,
      ~showSearch: option(bool)=?,
      ~size: option(string)=?,
      ~tokenSeparators: option(array(string))=?,
      ~value: option('value)=?,
      ~onBlur: option('value => unit)=?,
      ~onChange: option('value => unit)=?,
      ~onSearch: option(string => unit)=?,
      ~onSelect: option('value => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
      ~getPopupContainer: option(Dom.htmlElement => Dom.htmlElement)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsSelect(
      ~allowClear?,
      ~autoFocus?,
      ~defaultActiveFirstOption?,
      ~defaultValue?,
      ~disabled?,
      ~dropdownClassName?,
      ~dropdownMatchSelectWidth?,
      ~dropdownStyle?,
      ~filterOption?,
      ~firstActiveValue?,
      ~labelInValue?,
      ~maxTagCount?,
      ~maxTagPlaceholder?,
      ~mode?,
      ~notFoundContent?,
      ~placeholder?,
      ~showArrow?,
      ~showSearch?,
      ~size?,
      ~tokenSeparators?,
      ~value?,
      ~onBlur?,
      ~onChange?,
      ~onSearch?,
      ~onSelect?,
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      ~getPopupContainer?,
      (),
    ),
  );

/*
 disabled	Disable this option	boolean	false
 key	Same usage as value. If React request you to set this property, you can set it to value of option, and then omit value property.	string
 title	title of Select after select this Option	string	-
 value	default to filter with this property	string|number
 */

module Option = {
  [@bs.module "antd/lib/select"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~key: string=?,
      ~value: string,
      ~title: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Option";
};
let make = make;