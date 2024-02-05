
#pragma once

#include "ai_strategy.hpp"

class AiStrategyPassive : public AiStrategy {
 public:
  void execute() const noexcept override;
};
