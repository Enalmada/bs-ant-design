[@bs.module "antd/lib/message"] [@react.component]
external message: React.element = "default";
type content = React.element;
type duration = int;
type options;
type callback = (. unit) => unit;
[@bs.module "antd/lib/message"]
external success: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external error: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external info: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external warning: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external warn: (content, duration) => unit = "";
[@bs.module "antd/lib/message"]
external loading: (content, duration) => unit = "";
[@bs.module "antd/lib/message"] external config: options => unit = "";
[@bs.module "antd/lib/message"] external destroy: unit => unit = "";

type props = (content, duration);

let info = props => info(props);
let success = props => success(props);
let error = props => error(props);
let warning = props => warning(props);
let warn = props => warn(props);
let loading = props => loading(props);
let config = options => config(options);
let destroy = () => destroy();