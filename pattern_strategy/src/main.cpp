
#include <iostream>
#include <memory>
#include "ai_bot.hpp"
#include "ai_strategy_aggressive.hpp"
#include "ai_strategy_beginner.hpp"
#include "ai_strategy_passive.hpp"

int main() {
  std::cout << "Strategy Pattern Example:\n\n";

  AiBot ai_bot(std::make_unique<AiStrategyBeginner>());
  ai_bot.execute_strategy();

  ai_bot.set_strategy(std::make_unique<AiStrategyPassive>());
  ai_bot.execute_strategy();

  ai_bot.set_strategy(std::make_unique<AiStrategyAggressive>());
  ai_bot.execute_strategy();

  return 0;
}
