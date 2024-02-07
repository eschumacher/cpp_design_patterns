
#pragma once

#include "json_data_processor.hpp"
#include "xml_data.hpp"

class XmlToJsonAdapter : JsonDataProcessor {
 public:
  void process(XmlData const &data);
};
