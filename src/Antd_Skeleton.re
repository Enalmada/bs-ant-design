
/*
 size	Set the size of avatar	Enum{ 'large', 'small', 'default' }	-
 shape	Set the shape of avatar	Enum{ 'circle', 'square' }	-
 */
[@bs.deriving abstract]
type avatarProps = {
  .
  "size": int,
  "shape": string,
};

/*
 width	Set the width of title	number | string
 */
[@bs.deriving abstract]
type titleProps = {. "width": int};

/*
 PARAGRAPH PROPS
 rows	Set the row count of paragraph	number	-
 width	Set the width of paragraph. When width is an Array, it can set the width of each row. Otherwise only set the last row width	number | string | Array<number | string>	-
 */
[@bs.deriving abstract]
type paragraphProps = {
  .
  "rows": int,
  "width": int,
};

/*
 active	Show animation effect	boolean	false
 avatar	Show avatar placeholder	boolean | SkeletonAvatarProps	false
 loading	Display the skeleton when true	boolean	-
 paragraph	Show paragraph placeholder	boolean | SkeletonParagraphProps	true
 title	Show title placeholder	boolean | SkeletonTitleProps	true
 */

[@bs.module] [@react.component]
external make:
  (
    ~active: bool=?,
    ~avatar: bool=?,
    ~loading: bool=?,
    ~paragraph: paragraphProps=?,
    ~title: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "antd/lib/skeleton";

let make = make;