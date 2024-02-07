set(
  PATTERN_VISITOR_SOURCES
  ./src/main.cpp
)

add_executable(pattern_visitor ${PATTERN_VISITOR_SOURCES})

target_include_directories(
  pattern_visitor
  PRIVATE
  ./include
)
