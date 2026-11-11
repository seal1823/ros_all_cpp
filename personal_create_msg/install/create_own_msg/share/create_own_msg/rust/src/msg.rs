#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to create_own_msg__msg__OwnMsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnMsg {
    /// 输入节点名
    pub node_name: std::string::String,

    /// 用户名称呼
    pub user_name: std::string::String,

    /// 请输入文本
    pub num_of_l: i8,

}



impl Default for OwnMsg {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OwnMsg::default())
  }
}

impl rosidl_runtime_rs::Message for OwnMsg {
  type RmwMsg = super::msg::rmw::OwnMsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        user_name: msg.user_name.as_str().into(),
        num_of_l: msg.num_of_l,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        user_name: msg.user_name.as_str().into(),
      num_of_l: msg.num_of_l,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_name: msg.node_name.to_string(),
      user_name: msg.user_name.to_string(),
      num_of_l: msg.num_of_l,
    }
  }
}


