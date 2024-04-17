// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "xpkg_msgs/msg/detail/xmsg_device__struct.h"
#include "xpkg_msgs/msg/detail/xmsg_device__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xpkg_msgs__msg__xmsg_device__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xpkg_msgs.msg._xmsg_device.XmsgDevice", full_classname_dest, 37) == 0);
  }
  xpkg_msgs__msg__XmsgDevice * ros_message = _ros_message;
  {  // dev_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "dev_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dev_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dev_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "dev_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dev_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dev_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "dev_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dev_number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dev_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "dev_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dev_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xpkg_msgs__msg__xmsg_device__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of XmsgDevice */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xpkg_msgs.msg._xmsg_device");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "XmsgDevice");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xpkg_msgs__msg__XmsgDevice * ros_message = (xpkg_msgs__msg__XmsgDevice *)raw_ros_message;
  {  // dev_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dev_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dev_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dev_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dev_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dev_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dev_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dev_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dev_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dev_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dev_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dev_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}