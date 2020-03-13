
module Row = {
  [@bs.deriving jsConverter]
  type rowType = [ | `flex];
  [@bs.deriving jsConverter]
  type rowAlign = [ | `top | `middle | `bottom];
  [@bs.deriving jsConverter]
  type rowJustify = [
    | `start
    | [@bs.as "end"] `end_
    | `center
    | `spaceAround
    | `spaceBetween
  ];
  type gutterBreakpoints;
  [@bs.obj]
  external makeStringGutterConfig:
    (
      ~xs: string=?,
      ~sm: string=?,
      ~md: string=?,
      ~lg: string=?,
      ~xl: string=?,
      ~xxl: string=?,
      unit
    ) =>
    gutterBreakpoints =
    "";
  let makeGutterBreakpoints = (~xs=?, ~sm=?, ~md=?, ~lg=?, ~xl=?, ~xxl=?, ()) =>
    /* ant design uses strings here even though it makes more sense to be number */
    makeStringGutterConfig(
      ~xs=?xs |> Js.Option.map((. b) => string_of_int(b)),
      ~sm=?sm |> Js.Option.map((. b) => string_of_int(b)),
      ~md=?md |> Js.Option.map((. b) => string_of_int(b)),
      ~lg=?lg |> Js.Option.map((. b) => string_of_int(b)),
      ~xl=?xl |> Js.Option.map((. b) => string_of_int(b)),
      ~xxl=?xxl |> Js.Option.map((. b) => string_of_int(b)),
      (),
    );
  type gutter(_) =
    | SingleGutterInPx(int): gutter(int)
    | ResponsiveBreakpoints(gutterBreakpoints): gutter(gutterBreakpoints);
  let gutterToProp = (type a, gutter: gutter(a)): a =>
    switch (gutter) {
    | SingleGutterInPx(int) => int
    | ResponsiveBreakpoints(complexGutter) => complexGutter
    };

  [@bs.obj]
  external makePropsGridRow:
    (
      ~className: string=?,
      ~_type: string=?,
      ~align: string=?,
      ~justify: string=?,
      ~gutter: 'a=?,
      ~style: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module]
  external reactComponent: React.component('a) = "antd/lib/grid/row";

  [@react.component]
  let make =
      (
        ~className: option(string)=?,
        ~_type: option(rowType)=?,
        ~align: option(rowAlign)=?,
        ~justify: option(rowJustify)=?,
        ~gutter: option(gutter('a))=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~prefixCls: option(string)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsGridRow(
        ~className?,
        ~_type=?Belt.Option.map(_type, rowTypeToJs),
        ~align=?Belt.Option.map(align, rowAlignToJs),
        ~justify=?Belt.Option.map(justify, rowJustifyToJs),
        ~gutter=?Belt.Option.map(gutter, gutterToProp),
        ~style?,
        ~prefixCls?,
        ~children?,
        (),
      ),
    );
};

module Col = {
  type fullColSize;
  [@bs.obj]
  external makeColSize:
    (
      ~span: int=?,
      ~order: int=?,
      ~offset: int=?,
      ~push: int=?,
      ~pull: int=?,
      unit
    ) =>
    fullColSize =
    "";
  type colSize(_) =
    | SingleColSize(int): colSize(int)
    | FullColSize(fullColSize): colSize(fullColSize);
  let colSizeToProp = (type a, colSize: colSize(a)): a =>
    switch (colSize) {
    | SingleColSize(int) => int
    | FullColSize(fullColSize) => fullColSize
    };

  type props;

  [@bs.obj]
  external makePropsGridCol:
    (
      ~className: string=?,
      ~span: int=?,
      ~order: int=?,
      ~offset: int=?,
      ~push: int=?,
      ~pull: int=?,
      ~xs: 'a=?,
      ~sm: 'b=?,
      ~md: 'c=?,
      ~lg: 'd=?,
      ~xl: 'e=?,
      ~xxl: 'f=?,
      ~prefixCls: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      unit
    ) =>
    _ =
    "";

  [@bs.module]
  external reactComponent: React.component('a) = "antd/lib/grid/col";

  [@react.component]
  let make =
      (
        ~className: option(string)=?,
        ~span: option(int)=?,
        ~order: option(int)=?,
        ~offset: option(int)=?,
        ~push: option(int)=?,
        ~pull: option(int)=?,
        ~xs: option(colSize('a))=?,
        ~sm: option(colSize('a))=?,
        ~md: option(colSize('a))=?,
        ~lg: option(colSize('a))=?,
        ~xl: option(colSize('a))=?,
        ~xxl: option(colSize('a))=?,
        ~prefixCls: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~children: option(React.element)=?,
      ) =>
    React.createElement(
      reactComponent,
      makePropsGridCol(
        ~className?,
        ~span?,
        ~order?,
        ~offset?,
        ~push?,
        ~pull?,
        ~xs=?Belt.Option.map(xs, colSizeToProp),
        ~sm=?Belt.Option.map(sm, colSizeToProp),
        ~md=?Belt.Option.map(md, colSizeToProp),
        ~lg=?Belt.Option.map(lg, colSizeToProp),
        ~xl=?Belt.Option.map(xl, colSizeToProp),
        ~xxl=?Belt.Option.map(xxl, colSizeToProp),
        ~prefixCls?,
        ~style?,
        ~children?,
        (),
      ),
    );
};

let makeGutterBreakpoints = Row.makeGutterBreakpoints;

let makeColSize = Col.makeColSize;