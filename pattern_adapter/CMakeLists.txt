set(
  PATTERN_ADAPTER_SOURCES
  ./src/main.cpp
)

add_executable(pattern_adapter ${PATTERN_ADAPTER_SOURCES})

target_include_directories(
  pattern_adapter
  PRIVATE
  ./include
)
