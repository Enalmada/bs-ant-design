let str = React.string;

module Styles = {
  open Css;

  let body = style([width(`px(700)), margin2(~v=`zero, ~h=`auto)]);
};

[@bs.deriving jsConverter]
type components = [
  | `alert
  | `autoComplete
  | `avatar
  | `badge
  | `breadcrumb
  | `button
  | `calendar
  | `card
  | `carousel
  | `cascader
  | `checkbox
  | `collaspe
  | `datepicker
  | `dropdown
  | `form
  | `grid
  | `input
  | `layout
  | `modal
  | `pageheader
  | `pagination
  | `radio
  | `rate
  | `select
  | `statistic
  | `table
  | `tabs
  | `tooltip
  | `treeselect
  | `typography
];

let varToComp = var =>
  switch (var) {
  | `alert => <Alert />
  | `autoComplete => <AutoComplete />
  | `avatar => <Avatar />
  | `badge => <Badge />
  | `breadcrumb => <Breadcrumb />
  | `button => <Button />
  | `calendar => <Calendar />
  | `card => <Card />
  | `carousel => <Carousel />
  | `cascader => <Cascader />
  | `checkbox => <Checkbox />
  | `collaspe => <Collapse />
  | `datepicker => <DatePicker />
  | `dropdown => <Dropdown />
  | `form => <Form />
  | `grid => <Grid />
  | `input => <Input />
  | `layout => <Layout />
  | `modal => <Modal />
  | `pageheader => <PageHeader />
  | `pagination => <Pagination />
  | `radio => <Radio />
  | `rate => <Rate />
  | `select => <Select />
  | `statistic => <Statistic />
  | `table => <Table />
  | `tabs => <Tabs />
  | `tooltip => <Tooltip />
  | `treeselect => <TreeSelect />
  | `typography => <Typography />
  };

let comps = [|
  `alert,
  `autoComplete,
  `avatar,
  `badge,
  `breadcrumb,
  `button,
  `calendar,
  `card,
  `carousel,
  `cascader,
  `checkbox,
  `collaspe,
  `datepicker,
  `dropdown,
  `form,
  `grid,
  `input,
  `layout,
  `modal,
  `pageheader,
  `pagination,
  `radio,
  `rate,
  `select,
  `statistic,
  `table,
  `tabs,
  `tooltip,
  `treeselect,
  `typography,
|];

[@react.component]
let make = () => {
  let (searchValue, setSearchValue) = React.useState(() => "");
  let filter = value =>
    componentsToJs(value)
    |> Js.String.includes(searchValue |> Js.String.toLowerCase);
  <div className=Styles.body>
    <Antd.Input.Search
      onChange={v => setSearchValue(ReactEvent.Form.target(v)##value)}
    />
    {comps |> Js.Array.filter(filter) |> Array.map(varToComp) |> React.array}
  </div>;
};