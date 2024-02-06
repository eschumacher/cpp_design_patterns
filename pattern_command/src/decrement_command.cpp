
#include "decrement_command.hpp"
#include <iostream>

int DecrementCommand::execute(int current_value) const {
  std::cout << "Executing DecrementCommand.\n";
  return current_value - 1;
}

int DecrementCommand::undo(int current_value) const {
  std::cout << "Undoing DecrementCommand.\n";
  return current_value + 1;
}
