
#include "counter.hpp"
#include <iostream>
#include "counter_command.hpp"

void Counter::execute_command(std::unique_ptr<CounterCommand> command) {
  value_ = command->execute(value_);

  command_history_.push(std::move(command));
}

bool Counter::undo() {
  if (command_history_.empty()) {
    std::cout << "No command to undo.\n";
    return false;
  }

  auto previous_command = std::move(command_history_.top());
  command_history_.pop();

  value_ = previous_command->undo(value_);

  return true;
}
