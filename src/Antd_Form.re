[%bs.raw {|require("antd/lib/form/style")|}];

[@bs.deriving jsConverter]
type formLayout = [ | `horizontal | `inline | `vertical];

[@bs.deriving jsConverter]
type labelAlign = [ | `left | `right];

[@bs.obj]
external makePropsForm:
  (
    ~layout: option(string)=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~labelAlign: option(string)=?,
    ~labelCol: Antd_Grid.Col.props=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,
    ~prefixCls: string=?,
    ~hideRequiredMark: bool=?,
    ~wrapperCol: Antd_Grid.Col.props=?,
    ~colon: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module] external reactComponent: React.component('a) = "antd/lib/form";

[@react.component]
let make =
    (
      ~layout: option(formLayout)=?,
      ~onSubmit: option(ReactEvent.Form.t => unit)=?,
      ~labelAlign: option(labelAlign)=?,
      ~labelCol: option(Antd_Grid.Col.props)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~prefixCls: option(string)=?,
      ~hideRequiredMark: option(bool)=?,
      ~wrapperCol: option(Antd_Grid.Col.props)=?,
      ~colon: option(bool)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsForm(
      ~layout={
        Belt.Option.map(layout, formLayoutToJs);
      },
      ~onSubmit?,
      ~labelAlign={
        Belt.Option.map(labelAlign, labelAlignToJs);
      },
      ~labelCol?,
      ~style?,
      ~className?,
      ~prefixCls?,
      ~hideRequiredMark?,
      ~wrapperCol?,
      ~colon?,
      ~children?,
      (),
    ),
  );

module Item = {
  [@bs.deriving jsConverter]
  type validateStatus = [ | `success | `warning | `error | `validating];

  [@bs.obj]
  external makePropsItem:
    (
      ~htmlFor: string=?,
      ~prefixCls: string=?,
      ~className: string=?,
      ~id: string=?,
      ~label: React.element=?,
      ~labelCol: Antd_Grid.Col.props=?,
      ~wrapperCol: Antd_Grid.Col.props=?,
      ~help: React.element=?,
      ~extra: React.element=?,
      ~validateStatus: option(string)=?,
      ~hasFeedback: bool=?,
      ~required: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~colon: bool=?,
      ~children: React.element=?
    ) =>
    _ =
    "";

  [@bs.module]
  external reactComponent: React.component('a) = "antd/lib/form/FormItem";

  [@react.component]
  let make =
      (
        ~htmlFor: option(string)=?,
        ~prefixCls: option(string)=?,
        ~className: option(string)=?,
        ~id: option(string)=?,
        ~label: option(React.element)=?,
        ~labelCol: option(Antd_Grid.Col.props)=?,
        ~wrapperCol: option(Antd_Grid.Col.props)=?,
        ~help: option(React.element)=?,
        ~extra: option(React.element)=?,
        ~validateStatus: option(validateStatus)=?,
        ~hasFeedback: option(bool)=?,
        ~required: option(bool)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~colon: option(bool)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsItem(
        ~htmlFor?,
        ~prefixCls?,
        ~className?,
        ~id?,
        ~label?,
        ~labelCol?,
        ~wrapperCol?,
        ~help?,
        ~extra?,
        ~validateStatus=Belt.Option.map(validateStatus, validateStatusToJs),
        ~hasFeedback?,
        ~required?,
        ~style?,
        ~colon?,
        ~children?,
      ),
    );
};