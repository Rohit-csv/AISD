// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ChangeVar.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/change_var__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeVar_Request_b
{
public:
  explicit Init_ChangeVar_Request_b(::custom_interfaces::srv::ChangeVar_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ChangeVar_Request b(::custom_interfaces::srv::ChangeVar_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ChangeVar_Request msg_;
};

class Init_ChangeVar_Request_a
{
public:
  Init_ChangeVar_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeVar_Request_b a(::custom_interfaces::srv::ChangeVar_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ChangeVar_Request_b(msg_);
  }

private:
  ::custom_interfaces::srv::ChangeVar_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ChangeVar_Request>()
{
  return custom_interfaces::srv::builder::Init_ChangeVar_Request_a();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeVar_Response_d
{
public:
  explicit Init_ChangeVar_Response_d(::custom_interfaces::srv::ChangeVar_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ChangeVar_Response d(::custom_interfaces::srv::ChangeVar_Response::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ChangeVar_Response msg_;
};

class Init_ChangeVar_Response_c
{
public:
  Init_ChangeVar_Response_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeVar_Response_d c(::custom_interfaces::srv::ChangeVar_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_ChangeVar_Response_d(msg_);
  }

private:
  ::custom_interfaces::srv::ChangeVar_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ChangeVar_Response>()
{
  return custom_interfaces::srv::builder::Init_ChangeVar_Response_c();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__BUILDER_HPP_
