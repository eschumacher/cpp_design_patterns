
#include <iostream>
#include "singleton.hpp"

int main() {
  std::cout << "Singleton Pattern Example:\n\n";

  Singleton::get_instance().print_address();

  Singleton &singleton_ref = Singleton::get_instance();
  Singleton *singleton_ptr = &Singleton::get_instance();

  singleton_ref.print_address();
  singleton_ptr->print_address();
  Singleton::get_instance().print_address();

  return 0;
}
