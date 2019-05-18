open Antd.Layout;

let str = React.string;

module Styles = {
  open Css;

  let mainLayout = style([textAlign(`center), color(white)]);
  let mainLayoutWithMargin =
    style([textAlign(`center), color(white), marginBottom(`px(50))]);
  let mainContent = style([lineHeight(`px(120))]);

  let lightBlue = ReactDOMRe.Style.make(~backgroundColor="#80BDE8", ());
  let mediumBlue = ReactDOMRe.Style.make(~backgroundColor="#41A1E6", ());
  let darkBlue = ReactDOMRe.Style.make(~backgroundColor="#1F90E6", ());
  let footer =
    ReactDOMRe.Style.make(~backgroundColor="#80BDE8", ~color="#fff", ());
};

[@react.component]
let make = () =>
  <Section name="Layout">
    <Layout className=Styles.mainLayoutWithMargin>
      <Header style=Styles.lightBlue> {str("Header")} </Header>
      <Content className=Styles.mainContent style=Styles.darkBlue>
        {str("Content")}
      </Content>
      <Footer style=Styles.footer> {str("Footer")} </Footer>
    </Layout>
    <Layout className=Styles.mainLayoutWithMargin>
      <Header style=Styles.lightBlue> {str("Header")} </Header>
      <Layout className=Styles.mainLayout>
        <Sider className=Styles.mainContent style=Styles.mediumBlue>
          {str("Sider")}
        </Sider>
        <Content className=Styles.mainContent style=Styles.darkBlue>
          {str("Content")}
        </Content>
      </Layout>
      <Footer style=Styles.footer> {str("Footer")} </Footer>
    </Layout>
    <Layout className=Styles.mainLayoutWithMargin>
      <Header style=Styles.lightBlue> {str("Header")} </Header>
      <Layout className=Styles.mainLayout>
        <Content className=Styles.mainContent style=Styles.darkBlue>
          {str("Content")}
        </Content>
        <Sider className=Styles.mainContent style=Styles.mediumBlue>
          {str("Sider")}
        </Sider>
      </Layout>
      <Footer style=Styles.footer> {str("Footer")} </Footer>
    </Layout>
    <Layout className=Styles.mainLayoutWithMargin>
      <Sider className=Styles.mainContent style=Styles.mediumBlue>
        {str("Sider")}
      </Sider>
      <Layout className=Styles.mainLayout>
        <Header style=Styles.lightBlue> {str("Header")} </Header>
        <Content className=Styles.mainContent style=Styles.darkBlue>
          {str("Content")}
        </Content>
        <Footer style=Styles.footer> {str("Footer")} </Footer>
      </Layout>
    </Layout>
  </Section>;