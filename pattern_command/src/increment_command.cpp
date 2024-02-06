
#include "increment_command.hpp"
#include <iostream>

int IncrementCommand::execute(int current_value) const {
  std::cout << "Executing IncrementCommand.\n";
  return current_value + 1;
}

int IncrementCommand::undo(int current_value) const {
  std::cout << "Undoing IncrementCommand.\n";
  return current_value - 1;
}
