
[@bs.deriving jsConverter]
type contentType = [ | `secondary | `warning | `danger];

module Text = {
  //     code	code style	boolean	false
  // copyable	Config copy. Can set copy text and callback when is an object	boolean | { text: string, onCopy: Function }	false
  // delete	delete line style	boolean	false
  // disabled	Disable content	boolean	false
  // editable	Editable. Can control edit state when is object	boolean | { editing: boolean, onStart: Function, onChange: Function(string) }	false
  // ellipsis	Display ellipsis when overflow	boolean	false
  // mark	mark style	boolean	false
  // underline	underline style	boolean	false
  // onChange	Trigger when user edit the content	Function(string)	-
  // strong	bold style	boolean	false
  // type	Content type	secondary, warning, danger	-
  [@bs.obj]
  external makePropsText:
    (
      ~code: bool=?,
      ~copyable: bool=?,
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?,
      ~ellipsis: bool=?,
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~strong: bool=?,
      ~_type: option(string)=?,
      ~className: string=?,
      ~id: string=?,
      ~children: React.element
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/typography"]
  external reactComponent: React.component('a) = "Text";

  [@react.component]
  let make =
      (
        ~code: option(bool)=?,
        ~copyable: option(bool)=?,
        ~delete: option(bool)=?,
        ~disabled: option(bool)=?,
        ~editable: option(bool)=?,
        ~ellipsis: option(bool)=?,
        ~mark: option(bool)=?,
        ~underline: option(bool)=?,
        ~onChange: option(string => unit)=?,
        ~strong: option(bool)=?,
        ~_type: option(contentType)=?,
        ~className: option(string)=?,
        ~id: option(string)=?,
        ~children: React.element,
      ) =>
    React.createElement(
      reactComponent,
      makePropsText(
        ~code?,
        ~copyable?,
        ~delete?,
        ~disabled?,
        ~editable?,
        ~ellipsis?,
        ~mark?,
        ~underline?,
        ~onChange?,
        ~strong?,
        ~_type={
          Belt.Option.map(_type, contentTypeToJs);
        },
        ~className?,
        ~id?,
        ~children,
      ),
    );
};

module Title = {
  // code	code style	boolean	false
  // copyable	Config copy. Can set copy text and callback when is an object	boolean | { text: string, onCopy: Function }	false
  // delete	delete line style	boolean	false
  // disabled	Disable content	boolean	false
  // editable	Editable. Can control edit state when is object	boolean | { editing: boolean, onStart: Function, onChange: Function(string) }	false
  // ellipsis	Display ellipsis when overflow. Can config rows and expandable by using object	boolean | { rows: number, expandable: boolean, onExpand: Function }	false
  // level	Set content importance. Match with h1, h2, h3, h4	number: 1, 2, 3, 4	1
  // mark	mark style	boolean	false
  // underline	underline style	boolean	false
  // onChange	Trigger when user edit the content	Function(string)	-
  // type	Content type	secondary, warning, danger	-
  [@bs.obj]
  external makePropsText:
    (
      ~code: bool=?,
      ~copyable: bool=?,
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?,
      ~ellipsis: bool=?,
      ~level: int=?,
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~strong: bool=?,
      ~_type: option(string)=?,
      ~className: string=?,
      ~id: string=?,
      ~children: React.element
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/typography"]
  external reactComponent: React.component('a) = "Title";

  [@react.component]
  let make =
      (
        ~code: option(bool)=?,
        ~copyable: option(bool)=?,
        ~delete: option(bool)=?,
        ~disabled: option(bool)=?,
        ~editable: option(bool)=?,
        ~ellipsis: option(bool)=?,
        ~level: option(int)=?,
        ~mark: option(bool)=?,
        ~underline: option(bool)=?,
        ~onChange: option(string => unit)=?,
        ~strong: option(bool)=?,
        ~_type: option(contentType)=?,
        ~className: option(string)=?,
        ~id: option(string)=?,
        ~children: React.element,
      ) =>
    React.createElement(
      reactComponent,
      makePropsText(
        ~code?,
        ~copyable?,
        ~delete?,
        ~disabled?,
        ~editable?,
        ~ellipsis?,
        ~level?,
        ~mark?,
        ~underline?,
        ~onChange?,
        ~strong?,
        ~_type={
          Belt.Option.map(_type, contentTypeToJs);
        },
        ~className?,
        ~id?,
        ~children,
      ),
    );
};

module Paragraph = {
  // code	code style	boolean	false
  // copyable	Config copy. Can set copy text and callback when is an object	boolean | { text: string, onCopy: Function }	false
  // delete	delete line style	boolean	false
  // disabled	Disable content	boolean	false
  // editable	Editable. Can control edit state when is object	boolean | { editing: boolean, onStart: Function, onChange: Function(string) }	false
  // ellipsis	Display ellipsis when overflow. Can config rows and expandable by using object	boolean | { rows: number, expandable: boolean, onExpand: Function }	false
  // mark	mark style	boolean	false
  // underline	underline style	boolean	false
  // onChange	Trigger when user edit the content	Function(string)	-
  // strong	bold style	boolean	false
  // type	Content type	secondary, warning, danger	-
  [@bs.obj]
  external makePropsText:
    (
      ~code: bool=?,
      ~copyable: bool=?,
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?,
      ~ellipsis: bool=?,
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~strong: bool=?,
      ~_type: option(string)=?,
      ~className: string=?,
      ~id: string=?,
      ~children: React.element
    ) =>
    _ =
    "";

  [@bs.module "antd/lib/typography"]
  external reactComponent: React.component('a) = "Paragraph";

  [@react.component]
  let make =
      (
        ~code: option(bool)=?,
        ~copyable: option(bool)=?,
        ~delete: option(bool)=?,
        ~disabled: option(bool)=?,
        ~editable: option(bool)=?,
        ~ellipsis: option(bool)=?,
        ~mark: option(bool)=?,
        ~underline: option(bool)=?,
        ~onChange: option(string => unit)=?,
        ~strong: option(bool)=?,
        ~_type: option(contentType)=?,
        ~className: option(string)=?,
        ~id: option(string)=?,
        ~children: React.element,
      ) =>
    React.createElement(
      reactComponent,
      makePropsText(
        ~code?,
        ~copyable?,
        ~delete?,
        ~disabled?,
        ~editable?,
        ~ellipsis?,
        ~mark?,
        ~underline?,
        ~onChange?,
        ~strong?,
        ~_type={
          Belt.Option.map(_type, contentTypeToJs);
        },
        ~className?,
        ~id?,
        ~children,
      ),
    );
};