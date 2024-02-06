
#pragma once

#include "counter_command.hpp"

class IncrementCommand : public CounterCommand {
 public:
  [[nodiscard]] int execute(int current_value) const override;
  [[nodiscard]] int undo(int current_value) const override;
};
