
#pragma once

#include <string>

class XmlData {
 public:
  explicit XmlData(std::string data)
      : data_(std::move(data)) {}

  [[nodiscard]] constexpr std::string get_data() const noexcept {
    return data_;
  }

 private:
  std::string data_{};
};
