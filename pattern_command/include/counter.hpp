
#pragma once

#include <memory>
#include <stack>
#include "counter_command.hpp"

class Counter {
 public:
  void execute_command(std::unique_ptr<CounterCommand> command);
  bool undo();

  [[nodiscard]] int get_value() const noexcept { return value_; }

 private:
  using CommandStack = std::stack<std::unique_ptr<CounterCommand>>;

  CommandStack command_history_{};
  int value_{0};
};
