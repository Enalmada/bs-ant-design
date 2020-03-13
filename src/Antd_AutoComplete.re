/*
 allowClear	Show clear button, effective in multiple mode only.	boolean	false
 autoFocus	get focus when component mounted	boolean	false
 backfill	backfill selected item the input when using keyboard	boolean	false
 children (for customize input element)	customize input element	HTMLInputElement / HTMLTextAreaElement / React.ReactElement	<Input />
 children (for dataSource)	Data source for autocomplet	React.ReactElement / Array<React.ReactElement>	-
 dataSource	Data source for autocomplete	DataSourceItemType[]
 defaultActiveFirstOption	Whether active first option by default	boolean	true
 defaultValue	Initial selected option.	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 disabled	Whether disabled select	boolean	false
 filterOption	If true, filter options by input, if function, filter options against it. The function will receive two arguments, inputValue and option, if the function returns true, the option will be included in the filtered set; Otherwise, it will be excluded.	boolean or function(inputValue, option)	true
 optionLabelProp	Which prop value of option will render as content of select.	string	children
 placeholder	placeholder of input	string	-
 value	selected option	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 onBlur	Called when leaving the component.	function()	-
 onChange	Called when select an option or input value change, or value of input is changed	function(value)	-
 onFocus	Called when entering the component	function()	-
 onSearch	Called when searching items.	function(value)	-
 onSelect	Called when a option is selected. param is option's value and option instance.	function(value, option)	-
 defaultOpen	Initial open state of dropdown	boolean	-
 open	Controlled open state of dropdown	boolean	-
 onDropdownVisibleChange	Call when dropdown open
 */

type optionProps = {. "children": string};

type optionType = {
  .
  "props": optionProps,
  "key": string,
};

type filterOption(_) =
  | Bool(bool): filterOption(bool)
  | Function((string, optionType) => bool)
    : filterOption((string, optionType) => bool);

let boolOrFn = (type a, boolOrFn: filterOption(a)): a =>
  switch (boolOrFn) {
  | Bool(v) => v
  | Function(v) => v
  };


[@bs.module]
external reactComponent: React.component('a) = "antd/lib/auto-complete";

[@react.component]
let make =
    (
      ~allowClear: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~backfill: option(bool)=?,
      ~dataSource: option(array(string))=?,
      ~defaultActiveFirstOption: option(bool)=?,
      ~defaultValue: option(string)=?,
      ~disabled: option(bool)=?,
      ~filterOption: option('a)=?,
      ~optionLabelProp: option(string)=?,
      ~placeholder: option(string)=?,
      ~value: option(string)=?,
      ~onBlur: option(ReactEvent.Focus.t => unit)=?,
      ~onChange: option(ReactEvent.Form.t => unit)=?,
      ~onFocus: option(ReactEvent.Form.t => unit)=?,
      ~onSearch: option(ReactEvent.Form.t => unit)=?,
      ~onSelect: option(ReactEvent.Form.t => unit)=?,
      ~defaultOpen: option(bool)=?,
      ~open_: option(bool)=?,
      ~onDropdownVisibleChange: option(string => unit)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makeProps(
      ~allowClear?,
      ~autoFocus?,
      ~backfill?,
      ~dataSource?,
      ~defaultActiveFirstOption?,
      ~defaultValue?,
      ~disabled?,
      ~filterOption={
        Js.Option.map((. b) => boolOrFn(b), filterOption);
      },
      ~optionLabelProp?,
      ~placeholder?,
      ~value?,
      ~onBlur?,
      ~onChange?,
      ~onFocus?,
      ~onSearch?,
      ~onSelect?,
      ~defaultOpen?,
      ~open_?,
      ~onDropdownVisibleChange?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );