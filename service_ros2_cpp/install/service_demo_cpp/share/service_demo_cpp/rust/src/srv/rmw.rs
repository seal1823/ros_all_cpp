#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "service_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__service_demo_cpp__srv__OwnTur_Request() -> *const std::ffi::c_void;
}

#[link(name = "service_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn service_demo_cpp__srv__OwnTur_Request__init(msg: *mut OwnTur_Request) -> bool;
    fn service_demo_cpp__srv__OwnTur_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Request>, size: usize) -> bool;
    fn service_demo_cpp__srv__OwnTur_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Request>);
    fn service_demo_cpp__srv__OwnTur_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnTur_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Request>) -> bool;
}

// Corresponds to service_demo_cpp__srv__OwnTur_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnTur_Request {
    /// 不能输入滚木
    pub l_num: i8,

}



impl Default for OwnTur_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !service_demo_cpp__srv__OwnTur_Request__init(&mut msg as *mut _) {
        panic!("Call to service_demo_cpp__srv__OwnTur_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnTur_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnTur_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnTur_Request where Self: Sized {
  const TYPE_NAME: &'static str = "service_demo_cpp/srv/OwnTur_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__service_demo_cpp__srv__OwnTur_Request() }
  }
}


#[link(name = "service_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__service_demo_cpp__srv__OwnTur_Response() -> *const std::ffi::c_void;
}

#[link(name = "service_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn service_demo_cpp__srv__OwnTur_Response__init(msg: *mut OwnTur_Response) -> bool;
    fn service_demo_cpp__srv__OwnTur_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Response>, size: usize) -> bool;
    fn service_demo_cpp__srv__OwnTur_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Response>);
    fn service_demo_cpp__srv__OwnTur_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnTur_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnTur_Response>) -> bool;
}

// Corresponds to service_demo_cpp__srv__OwnTur_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !service_demo_cpp__srv__OwnTur_Response__init(&mut msg as *mut _) {
        panic!("Call to service_demo_cpp__srv__OwnTur_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnTur_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { service_demo_cpp__srv__OwnTur_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnTur_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnTur_Response where Self: Sized {
  const TYPE_NAME: &'static str = "service_demo_cpp/srv/OwnTur_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__service_demo_cpp__srv__OwnTur_Response() }
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


