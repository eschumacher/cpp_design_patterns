
#pragma once

class CounterCommand {
 public:
  virtual ~CounterCommand() = default;

  CounterCommand(CounterCommand const &) = default;
  CounterCommand(CounterCommand &&) = default;
  CounterCommand &operator=(CounterCommand const &) = default;
  CounterCommand &operator=(CounterCommand &&) = default;

  [[nodiscard]] virtual int execute(int current_value) const = 0;
  [[nodiscard]] virtual int undo(int current_value) const = 0;

 protected:
  CounterCommand() = default;
};
