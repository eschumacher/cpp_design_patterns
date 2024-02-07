cmake_minimum_required(VERSION 3.0.0)
project(cpp_design_patterns VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(pattern_command)
add_subdirectory(pattern_singleton)
add_subdirectory(pattern_strategy)
add_subdirectory(pattern_visitor)
