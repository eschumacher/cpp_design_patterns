set(
  PATTERN_SINGLETON_SOURCES
  ./src/main.cpp
)

add_executable(pattern_singleton ${PATTERN_SINGLETON_SOURCES})

target_include_directories(
  pattern_singleton
  PRIVATE
  ./include
)
