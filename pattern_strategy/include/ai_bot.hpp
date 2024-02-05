
#pragma once

#include <memory>
#include "ai_strategy.hpp"

class AiBot {
 public:
  explicit AiBot(std::unique_ptr<AiStrategy> strategy) noexcept
      : strategy_(std::move(strategy)) {}

  void set_strategy(std::unique_ptr<AiStrategy> strategy) noexcept {
    strategy_ = std::move(strategy);
  }

  void execute_strategy() const noexcept { strategy_->execute(); }

 private:
  std::unique_ptr<AiStrategy> strategy_{};
};
