// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/ChangeVar.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/change_var__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeVar_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeVar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeVar_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::ChangeVar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::ChangeVar_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::ChangeVar_Request>()
{
  return "custom_interfaces::srv::ChangeVar_Request";
}

template<>
inline const char * name<custom_interfaces::srv::ChangeVar_Request>()
{
  return "custom_interfaces/srv/ChangeVar_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ChangeVar_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ChangeVar_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ChangeVar_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeVar_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeVar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeVar_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::ChangeVar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::ChangeVar_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::ChangeVar_Response>()
{
  return "custom_interfaces::srv::ChangeVar_Response";
}

template<>
inline const char * name<custom_interfaces::srv::ChangeVar_Response>()
{
  return "custom_interfaces/srv/ChangeVar_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ChangeVar_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ChangeVar_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::ChangeVar_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ChangeVar>()
{
  return "custom_interfaces::srv::ChangeVar";
}

template<>
inline const char * name<custom_interfaces::srv::ChangeVar>()
{
  return "custom_interfaces/srv/ChangeVar";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ChangeVar>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::ChangeVar_Request>::value &&
    has_fixed_size<custom_interfaces::srv::ChangeVar_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::ChangeVar>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::ChangeVar_Request>::value &&
    has_bounded_size<custom_interfaces::srv::ChangeVar_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::ChangeVar>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::ChangeVar_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::ChangeVar_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_VAR__TRAITS_HPP_
