
#include "double_command.hpp"
#include <iostream>

int DoubleCommand::execute(int current_value) const {
  std::cout << "Executing DoubleCommand.\n";
  return current_value * 2;
}

int DoubleCommand::undo(int current_value) const {
  std::cout << "Undoing DoubleCommand.\n";
  return current_value / 2;
}
