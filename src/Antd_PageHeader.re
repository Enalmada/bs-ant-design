// title	custom title text	ReactNode	-
// subTitle	custom subTitle text	ReactNode	-
// backIcon	custom back icon, if false the back icon will not be displayed	ReactNode	<Icon type="arrow-left" />
// tags	Tag list next to title	Tag[] | Tag	-
// extra	Operating area, at the end of the line of the title line	ReactNode	-
// breadcrumb	breadcrumb config	breadcrumb	-
// footer	PageHeader's footer, generally used to render TabBar	ReactNode	-
// onBack	back icon click event	()=>void	()=>history.back()


let breadcrumbConfig = routes => {"routes": routes};

[@bs.obj]
external makePropsPageHeader:
  (
    ~title: React.element=?,
    ~subTitle: React.element=?,
    ~backIcon: React.element=?,
    ~tags: array(React.element)=?,
    ~extra: React.element=?,
    ~breadcrumb: option({. "routes": array(Antd_Breadcrumb.route)})=?,
    ~footer: React.element=?,
    ~onBack: unit => unit=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/page-header";

[@react.component]
let make =
    (
      ~title: option(React.element)=?,
      ~subTitle: option(React.element)=?,
      ~backIcon: option(React.element)=?,
      ~tags: option(array(React.element))=?,
      ~extra: option(React.element)=?,
      ~breadcrumb: option(array(Antd_Breadcrumb.route))=?,
      ~footer: option(React.element)=?,
      ~onBack: option(unit => unit)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsPageHeader(
      ~title?,
      ~subTitle?,
      ~backIcon?,
      ~tags?,
      ~extra?,
      ~breadcrumb=Belt.Option.map(breadcrumb, breadcrumbConfig),
      ~footer?,
      ~onBack?,
      ~children?,
      (),
    ),
  );