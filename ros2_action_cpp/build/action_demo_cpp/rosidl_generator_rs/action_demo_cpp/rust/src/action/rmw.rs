
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Goal() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_Goal__init(msg: *mut OwnAction_Goal) -> bool;
    fn action_demo_cpp__action__OwnAction_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Goal>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Goal>);
    fn action_demo_cpp__action__OwnAction_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Goal>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_Goal {
    /// request
    pub l_num: u32,

}



impl Default for OwnAction_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_Goal__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Goal() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Result() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_Result__init(msg: *mut OwnAction_Result) -> bool;
    fn action_demo_cpp__action__OwnAction_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Result>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Result>);
    fn action_demo_cpp__action__OwnAction_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Result>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_Result {
    /// 处理结果
    pub result: u32,

}

impl OwnAction_Result {
    /// 成功值
    pub const SUCCESS: u32 = 1;

    /// 失败值
    pub const FALSE: u32 = 0;

}


impl Default for OwnAction_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_Result__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_Result where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Result() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_Feedback__init(msg: *mut OwnAction_Feedback) -> bool;
    fn action_demo_cpp__action__OwnAction_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Feedback>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Feedback>);
    fn action_demo_cpp__action__OwnAction_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_Feedback>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_Feedback {
    /// feedback
    pub l_all_num: u32,

}



impl Default for OwnAction_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_Feedback__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_Feedback() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_FeedbackMessage__init(msg: *mut OwnAction_FeedbackMessage) -> bool;
    fn action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_FeedbackMessage>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_FeedbackMessage>);
    fn action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_FeedbackMessage>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::OwnAction_Feedback,

}



impl Default for OwnAction_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_FeedbackMessage() }
  }
}




#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_SendGoal_Request__init(msg: *mut OwnAction_SendGoal_Request) -> bool;
    fn action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Request>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Request>);
    fn action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Request>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::OwnAction_Goal,

}



impl Default for OwnAction_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal_Request() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_SendGoal_Response__init(msg: *mut OwnAction_SendGoal_Response) -> bool;
    fn action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Response>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Response>);
    fn action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_SendGoal_Response>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for OwnAction_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal_Response() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_GetResult_Request__init(msg: *mut OwnAction_GetResult_Request) -> bool;
    fn action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Request>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Request>);
    fn action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Request>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for OwnAction_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_GetResult_Request() }
  }
}


#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "action_demo_cpp__rosidl_generator_c")]
extern "C" {
    fn action_demo_cpp__action__OwnAction_GetResult_Response__init(msg: *mut OwnAction_GetResult_Response) -> bool;
    fn action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Response>, size: usize) -> bool;
    fn action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Response>);
    fn action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OwnAction_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<OwnAction_GetResult_Response>) -> bool;
}

// Corresponds to action_demo_cpp__action__OwnAction_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OwnAction_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::OwnAction_Result,

}



impl Default for OwnAction_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !action_demo_cpp__action__OwnAction_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to action_demo_cpp__action__OwnAction_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OwnAction_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { action_demo_cpp__action__OwnAction_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OwnAction_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OwnAction_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "action_demo_cpp/action/OwnAction_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__action_demo_cpp__action__OwnAction_GetResult_Response() }
  }
}






#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to action_demo_cpp__action__OwnAction_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct OwnAction_SendGoal;

impl rosidl_runtime_rs::Service for OwnAction_SendGoal {
    type Request = OwnAction_SendGoal_Request;
    type Response = OwnAction_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__action_demo_cpp__action__OwnAction_SendGoal() }
    }
}




#[link(name = "action_demo_cpp__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__action_demo_cpp__action__OwnAction_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to action_demo_cpp__action__OwnAction_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct OwnAction_GetResult;

impl rosidl_runtime_rs::Service for OwnAction_GetResult {
    type Request = OwnAction_GetResult_Request;
    type Response = OwnAction_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__action_demo_cpp__action__OwnAction_GetResult() }
    }
}


