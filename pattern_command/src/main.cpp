
#include <iostream>
#include <memory>
#include "counter.hpp"
#include "decrement_command.hpp"
#include "double_command.hpp"
#include "increment_command.hpp"

namespace {

void print_counter(Counter const &counter) {
  std::cout << "Counter value: " << counter.get_value() << "\n\n";
}

}  // namespace

int main() {
  std::cout << "Command Pattern Example:\n\n";

  Counter counter{};
  print_counter(counter);

  counter.execute_command(std::make_unique<IncrementCommand>());
  print_counter(counter);

  counter.execute_command(std::make_unique<DecrementCommand>());
  print_counter(counter);

  counter.undo();
  print_counter(counter);

  counter.execute_command(std::make_unique<DoubleCommand>());
  print_counter(counter);

  while (counter.undo()) {
    print_counter(counter);
  }

  print_counter(counter);

  return 0;
}
