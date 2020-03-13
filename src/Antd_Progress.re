/* type	to set the type, options: line circle dashboard	string	line
   format	template function of the content	function(percent, successPercent)	percent => percent + '%'
   percent	to set the completion percentage	number	0
   showInfo	whether to display the progress value and the status icon	boolean	true
   status	to set the status of the Progress, options: success exception active normal	string	-
   strokeLinecap	to set the style of the progress linecap	Enum{ 'round', 'square' }	round
   strokeColor	color of progress bar	string	-
   successPercent	segmented success percent	number	0
   */


[@bs.deriving jsConverter]
type mode = [ | `line | `dashboard | `circle];

[@bs.deriving jsConverter]
type status = [ | `success | `exception_ | `active | `normal];

[@bs.deriving jsConverter]
type strokeLinecap = [ | `round | `square];

[@bs.obj]
external makePropsProgress:
  (
    ~_type: option(string)=?,
    ~format: (float, float) => string=?,
    ~percent: float=?,
    ~showInfo: bool=?,
    ~status: option(string)=?,
    ~className: string=?,
    ~strokeLinecap: option(string)=?,
    ~strokeColor: string=?,
    ~successPercent: float=?,
    unit
  ) =>
  _ =
  "";

[@bs.module]
external reactComponent: React.component('a) = "antd/lib/progress";

[@react.component]
let make =
    (
      ~_type: option(mode)=?,
      ~format: option((float, float) => string)=?,
      ~percent: option(float)=?,
      ~showInfo: option(bool)=?,
      ~status: option(status)=?,
      ~className: option(string)=?,
      ~strokeLinecap: option(strokeLinecap)=?,
      ~strokeColor: option(string)=?,
      ~successPercent: option(float)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsProgress(
      ~_type=Belt.Option.map(_type, modeToJs),
      ~format?,
      ~percent?,
      ~showInfo?,
      ~status=Belt.Option.map(status, statusToJs),
      ~className?,
      ~strokeLinecap=Belt.Option.map(strokeLinecap, strokeLinecapToJs),
      ~strokeColor?,
      ~successPercent?,
      (),
    ),
  );