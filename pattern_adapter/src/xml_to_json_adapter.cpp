
#include "xml_to_json_adapter.hpp"
#include "xml_data.hpp"

namespace {

constexpr std::string convert_xml_to_json(XmlData const &data) {
  std::string xml{data.get_data()};

  // dummy conversion for now (this code is meant to
  // illustrate the adapter design pattern and not
  // actually convert xml to json).
  std::string data_content = xml.substr(xml.find_first_of('>') + 1);
  data_content = data_content.substr(0, data_content.find_last_of('<'));

  std::string json = R"({"data": ")" + data_content + R"("})";
  return json;
}

}  // namespace

void XmlToJsonAdapter::process(XmlData const &data) {
  std::cout << "XmlToJsonAdapter: Converting XML to JSON...\n\n";

  std::string json_data{convert_xml_to_json(data)};
  process_json(json_data);
}
