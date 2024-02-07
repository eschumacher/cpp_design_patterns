
#include <iostream>
#include "xml_data.hpp"
#include "xml_to_json_adapter.hpp"

int main() {
  std::cout << "Adapter Pattern Example:\n\n";

  XmlData xml_data{"<data>Meaningless dummy data</data>"};
  XmlToJsonAdapter adapter;

  std::cout << "Initial XML Data:\n\t" << xml_data.get_data() << "\n\n";

  adapter.process(xml_data);

  return 0;
}
