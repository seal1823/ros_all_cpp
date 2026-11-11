#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to service_demo_cpp__srv__OwnTur_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnTur_Request {
    /// 不能输入滚木
    pub l_num: i8,

}



impl Default for OwnTur_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::OwnTur_Request::default())
  }
}

impl rosidl_runtime_rs::Message for OwnTur_Request {
  type RmwMsg = super::srv::rmw::OwnTur_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        l_num: msg.l_num,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      l_num: msg.l_num,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      l_num: msg.l_num,
    }
  }
}


// Corresponds to service_demo_cpp__srv__OwnTur_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnTur_Response {
    /// 处理结果
    pub result: i8,

}

impl OwnTur_Response {
    /// 成功返回值
    pub const SUCCESS: i8 = 1;

    /// 失败返回值
    pub const FAIL: i8 = 0;

}


impl Default for OwnTur_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::OwnTur_Response::default())
  }
}

impl rosidl_runtime_rs::Message for OwnTur_Response {
  type RmwMsg = super::srv::rmw::OwnTur_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}






#[link(name = "service_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__service_demo_cpp__srv__OwnTur() -> *const std::ffi::c_void;
}

// Corresponds to service_demo_cpp__srv__OwnTur
#[allow(missing_docs, non_camel_case_types)]
pub struct OwnTur;

impl rosidl_runtime_rs::Service for OwnTur {
    type Request = OwnTur_Request;
    type Response = OwnTur_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__service_demo_cpp__srv__OwnTur() }
    }
}


