set(
  PATTERN_COMMAND_SOURCES
  ./src/counter.cpp
  ./src/increment_command.cpp
  ./src/main.cpp
)

add_executable(pattern_command ${PATTERN_COMMAND_SOURCES})

target_include_directories(
  pattern_command
  PRIVATE
  ./include
)
