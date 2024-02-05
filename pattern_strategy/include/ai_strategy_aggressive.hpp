
#pragma once

#include "ai_strategy.hpp"

class AiStrategyAggressive : public AiStrategy {
 public:
  void execute() const noexcept override;
};
