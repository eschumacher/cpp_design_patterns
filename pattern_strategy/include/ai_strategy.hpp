
#pragma once

class AiStrategy {
 public:
  AiStrategy() = default;
  virtual ~AiStrategy() = default;
  AiStrategy(AiStrategy const &) = default;
  AiStrategy(AiStrategy &&) = default;
  AiStrategy &operator=(AiStrategy const &) = default;
  AiStrategy &operator=(AiStrategy &&) = default;

  virtual void execute() const noexcept = 0;
};
