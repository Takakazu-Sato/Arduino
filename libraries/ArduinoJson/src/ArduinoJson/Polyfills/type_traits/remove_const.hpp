// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

namespace ArduinoJson {
namespace Internals {

// A meta-function that return the type T without the const modifier
template <typename T>
struct remove_const {
  typedef T type;
};
template <typename T>
struct remove_const<const T> {
  typedef T type;
};
}  // namespace Internals
}  // namespace ArduinoJson
