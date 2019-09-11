
[@bs.obj]
external makePropsPagination:
  (
    ~current: int=?,
    ~defaultCurrent: int=?,
    ~defaultPageSize: int=?,
    ~hideOnSinglePage: bool=?,
    ~itemRender: (int, string, React.element) => React.element=?,
    ~pageSize: int=?,
    ~pageSizeOptions: array(string)=?,
    ~showLessItems: bool=?,
    ~showQuickJumper: bool=?,
    ~showSizeChanger: bool=?,
    ~showTotal: (int, array(int)) => React.element=?,
    ~simple: bool=?,
    ~size: string=?,
    ~total: int=?,
    ~onChange: (int, int) => unit=?,
    ~onShowSizeChange: (int, int) => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/pagination";

[@react.component]
let make =
    (
      ~current: option(int)=?,
      ~defaultCurrent: option(int)=?,
      ~defaultPageSize: option(int)=?,
      ~hideOnSinglePage: option(bool)=?,
      ~itemRender: option((int, string, React.element) => React.element)=?,
      ~pageSize: option(int)=?,
      ~pageSizeOptions: option(array(string))=?,
      ~showLessItems: option(bool)=?,
      ~showQuickJumper: option(bool)=?,
      ~showSizeChanger: option(bool)=?,
      ~showTotal: option((int, array(int)) => React.element)=?,
      ~simple: option(bool)=?,
      ~size: option(string)=?,
      ~total: option(int)=?,
      ~onChange: option((int, int) => unit)=?,
      ~onShowSizeChange: option((int, int) => unit)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsPagination(
      ~current?,
      ~defaultCurrent?,
      ~defaultPageSize?,
      ~hideOnSinglePage?,
      ~itemRender?,
      ~pageSize?,
      ~pageSizeOptions?,
      ~showLessItems?,
      ~showQuickJumper?,
      ~showSizeChanger?,
      ~showTotal?,
      ~simple?,
      ~size?,
      ~total?,
      ~onChange?,
      ~onShowSizeChange?,
      ~id?,
      ~className?,
      ~style?,
      (),
    ),
  );