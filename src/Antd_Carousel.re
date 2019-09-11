
[@bs.deriving jsConverter]
type effect = [ | `scrollx | `fade];

[@bs.deriving jsConverter]
type dot = [ | `top | `bottom | `left | `right];

[@bs.obj]
external makePropsCarousel:
  (
    ~afterChange: int => unit=?,
    ~autoplay: bool=?,
    ~beforeChange: (int, int) => unit=?,
    ~dotPosition: option(string)=?,
    ~dots: bool=?,
    ~easing: string=?,
    ~effect: option(string)=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/carousel";

[@react.component]
let make =
    (
      ~afterChange: option(int => unit)=?,
      ~autoplay: option(bool)=?,
      ~beforeChange: option((int, int) => unit)=?,
      ~dotPosition: option(dot)=?,
      ~dots: option(bool)=?,
      ~easing: option(string)=?,
      ~effect: option(effect)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: option(React.element)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsCarousel(
      ~afterChange?,
      ~autoplay?,
      ~beforeChange?,
      ~dotPosition=Belt.Option.map(dotPosition, dotToJs),
      ~dots?,
      ~easing?,
      ~effect=Belt.Option.map(effect, effectToJs),
      ~id?,
      ~className?,
      ~style?,
      ~children?,
      (),
    ),
  );