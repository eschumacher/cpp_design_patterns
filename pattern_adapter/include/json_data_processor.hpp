
#pragma once

#include <iostream>
#include <string_view>

class JsonDataProcessor {
 public:
  virtual ~JsonDataProcessor() = default;
  JsonDataProcessor(JsonDataProcessor const &) = default;
  JsonDataProcessor(JsonDataProcessor &&) = default;
  JsonDataProcessor &operator=(JsonDataProcessor const &) = default;
  JsonDataProcessor &operator=(JsonDataProcessor &&) = default;

  void process_json(std::string_view data) {
    std::cout << "Processing JSON:\n\t" << data << "\n";
    ++process_count_;
  }

 protected:
  JsonDataProcessor() = default;

 private:
  int process_count_{0};
};
