set(
  PATTERN_STRATEGY_SOURCES
  ./src/main.cpp
  ./src/ai_strategy_aggressive.cpp
  ./src/ai_strategy_beginner.cpp
  ./src/ai_strategy_passive.cpp
)

add_executable(pattern_strategy ${PATTERN_STRATEGY_SOURCES})

target_include_directories(
  pattern_strategy
  PRIVATE
  ./include
)
