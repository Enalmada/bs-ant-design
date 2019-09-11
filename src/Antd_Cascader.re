// allowClear	whether allow clear	boolean	true
// autoFocus	get focus when component mounted	boolean	false
// changeOnSelect	change value on each selection if set to true, see above demo for details	boolean	false
// className	additional css class	string	-
// defaultValue	initial selected value	string[]	[]
// disabled	whether disabled select	boolean	false
// displayRender	render function of displaying selected options	(label, selectedOptions) => ReactNode	label => label.join(' / ')
// expandTrigger	expand current item when click or hover, one of 'click' 'hover'	string	'click'
// fieldNames	custom field name for label and value and children (before 3.7.0 it calls filedNames which is typo）)	object	{ label: 'label', value: 'value', children: 'children' }
// getPopupContainer	Parent Node which the selector should be rendered to. Default to body. When position issues happen, try to modify it into scrollable content and position it relative.example	Function(triggerNode)	() => document.body
// loadData	To load option lazily, and it cannot work with showSearch	(selectedOptions) => void	-
// notFoundContent	Specify content to show when no result matches.	string	'Not Found'
// options	data options of cascade	object	-
// placeholder	input placeholder	string	'Please select'
// popupClassName	additional className of popup overlay	string	-
// popupPlacement	use preset popup align config from builtinPlacements：bottomLeft bottomRight topLeft topRight	string	bottomLeft
// popupVisible	set visible of cascader popup	boolean	-
// showSearch	Whether show search input in single mode.	boolean|object	false
// size	input size, one of large default small	string	default
// style	additional style	string	-
// suffixIcon	The custom suffix icon	ReactNode	-
// value	selected value	string[]	-
// onChange	callback when finishing cascader select	(value, selectedOptions) => void	-
// onPopupVisibleChange	callback when popup shown or hidden	(value) => void	-


[@bs.deriving jsConverter]
type trigger = [ | `click | `hover];

[@bs.deriving jsConverter]
type placement = [ | `bottomLeft | `bottomRight | `topLeft | `topRight];

[@bs.deriving jsConverter]
type size = [ | `large | `default | `small];

type fieldNames = {
  .
  "label": string,
  "value": string,
  "children": children,
}
and children = option(array(fieldNames));

[@bs.obj]
external makePropsCascader:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~changeSelect: bool=?,
    ~className: string=?,
    ~defaultvalue: array(string)=?,
    ~disabled: bool=?,
    ~displayRender: (string, Js.t({..})) => string=?,
    ~expandTrigger: option(string)=?,
    ~fieldNames: fieldNames=?,
    ~loadData: Js.t({..}) => unit=?,
    ~notFoundContent: string=?,
    ~options: array(fieldNames)=?,
    ~placeholder: string=?,
    ~popupClassName: string=?,
    ~popupPlacement: option(string)=?,
    ~showSearch: bool=?,
    ~size: option(string)=?,
    ~suffixIcon: React.element=?,
    ~value: array(string)=?,
    ~onChange: string => unit=?,
    ~onPopupVisibleChange: string => unit=?,
    ~id: string=?
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/cascader";

[@react.component]
let make =
    (
      ~allowClear: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~changeSelect: option(bool)=?,
      ~className: option(string)=?,
      ~defaultvalue: option(array(string))=?,
      ~disabled: option(bool)=?,
      ~displayRender: option((string, Js.t({..})) => string)=?,
      ~expandTrigger: option(trigger)=?,
      ~fieldNames: option(fieldNames)=?,
      ~loadData: option(Js.t({..}) => unit)=?,
      ~notFoundContent: option(string)=?,
      ~options: option(array(fieldNames))=?,
      ~placeholder: option(string)=?,
      ~popupClassName: option(string)=?,
      ~popupPlacement: option(placement)=?,
      ~showSearch: option(bool)=?,
      ~size: option(size)=?,
      ~suffixIcon: option(React.element)=?,
      ~value: option(array(string))=?,
      ~onChange: option(string => unit)=?,
      ~onPopupVisibleChange: option(string => unit)=?,
      ~id: option(string)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsCascader(
      ~allowClear?,
      ~autoFocus?,
      ~changeSelect?,
      ~className?,
      ~defaultvalue?,
      ~disabled?,
      ~displayRender?,
      ~expandTrigger=Belt.Option.map(expandTrigger, triggerToJs),
      ~fieldNames?,
      ~loadData?,
      ~notFoundContent?,
      ~options?,
      ~placeholder?,
      ~popupClassName?,
      ~popupPlacement=Belt.Option.map(popupPlacement, placementToJs),
      ~showSearch?,
      ~size=Belt.Option.map(size, sizeToJs),
      ~suffixIcon?,
      ~value?,
      ~onChange?,
      ~onPopupVisibleChange?,
      ~id?,
    ),
  );