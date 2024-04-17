// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xpkg_msgs/msg/detail/xmsg_device_list__rosidl_typesupport_introspection_c.h"
#include "xpkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xpkg_msgs/msg/detail/xmsg_device_list__functions.h"
#include "xpkg_msgs/msg/detail/xmsg_device_list__struct.h"


// Include directives for member types
// Member `dev_list`
#include "xpkg_msgs/msg/xmsg_device.h"
// Member `dev_list`
#include "xpkg_msgs/msg/detail/xmsg_device__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xpkg_msgs__msg__XmsgDeviceList__init(message_memory);
}

void xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_fini_function(void * message_memory)
{
  xpkg_msgs__msg__XmsgDeviceList__fini(message_memory);
}

size_t xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__size_function__XmsgDeviceList__dev_list(
  const void * untyped_member)
{
  const xpkg_msgs__msg__XmsgDevice__Sequence * member =
    (const xpkg_msgs__msg__XmsgDevice__Sequence *)(untyped_member);
  return member->size;
}

const void * xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_const_function__XmsgDeviceList__dev_list(
  const void * untyped_member, size_t index)
{
  const xpkg_msgs__msg__XmsgDevice__Sequence * member =
    (const xpkg_msgs__msg__XmsgDevice__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_function__XmsgDeviceList__dev_list(
  void * untyped_member, size_t index)
{
  xpkg_msgs__msg__XmsgDevice__Sequence * member =
    (xpkg_msgs__msg__XmsgDevice__Sequence *)(untyped_member);
  return &member->data[index];
}

void xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__fetch_function__XmsgDeviceList__dev_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xpkg_msgs__msg__XmsgDevice * item =
    ((const xpkg_msgs__msg__XmsgDevice *)
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_const_function__XmsgDeviceList__dev_list(untyped_member, index));
  xpkg_msgs__msg__XmsgDevice * value =
    (xpkg_msgs__msg__XmsgDevice *)(untyped_value);
  *value = *item;
}

void xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__assign_function__XmsgDeviceList__dev_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xpkg_msgs__msg__XmsgDevice * item =
    ((xpkg_msgs__msg__XmsgDevice *)
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_function__XmsgDeviceList__dev_list(untyped_member, index));
  const xpkg_msgs__msg__XmsgDevice * value =
    (const xpkg_msgs__msg__XmsgDevice *)(untyped_value);
  *item = *value;
}

bool xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__resize_function__XmsgDeviceList__dev_list(
  void * untyped_member, size_t size)
{
  xpkg_msgs__msg__XmsgDevice__Sequence * member =
    (xpkg_msgs__msg__XmsgDevice__Sequence *)(untyped_member);
  xpkg_msgs__msg__XmsgDevice__Sequence__fini(member);
  return xpkg_msgs__msg__XmsgDevice__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_member_array[2] = {
  {
    "dev_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDeviceList, dev_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dev_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDeviceList, dev_list),  // bytes offset in struct
    NULL,  // default value
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__size_function__XmsgDeviceList__dev_list,  // size() function pointer
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_const_function__XmsgDeviceList__dev_list,  // get_const(index) function pointer
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__get_function__XmsgDeviceList__dev_list,  // get(index) function pointer
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__fetch_function__XmsgDeviceList__dev_list,  // fetch(index, &value) function pointer
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__assign_function__XmsgDeviceList__dev_list,  // assign(index, value) function pointer
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__resize_function__XmsgDeviceList__dev_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_members = {
  "xpkg_msgs__msg",  // message namespace
  "XmsgDeviceList",  // message name
  2,  // number of fields
  sizeof(xpkg_msgs__msg__XmsgDeviceList),
  xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_member_array,  // message members
  xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_init_function,  // function to initialize message memory (memory has to be allocated)
  xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_type_support_handle = {
  0,
  &xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xpkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xpkg_msgs, msg, XmsgDeviceList)() {
  xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xpkg_msgs, msg, XmsgDevice)();
  if (!xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_type_support_handle.typesupport_identifier) {
    xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xpkg_msgs__msg__XmsgDeviceList__rosidl_typesupport_introspection_c__XmsgDeviceList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
