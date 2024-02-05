
#pragma once

#include "ai_strategy.hpp"

class AiStrategyBeginner : public AiStrategy {
 public:
  void execute() const noexcept override;
};
