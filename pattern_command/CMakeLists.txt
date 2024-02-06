set(
  PATTERN_COMMAND_SOURCES
  ./src/main.cpp
)

add_executable(pattern_command ${PATTERN_COMMAND_SOURCES})

target_include_directories(
  pattern_command
  PRIVATE
  ./include
)
