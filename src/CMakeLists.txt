project(CalculatorApp VERSION 1.0.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../build-output)

configure_file("include/config.h.in" "include/config.h")
include_directories(${PROJECT_SOURCE_DIR})
add_executable(CalculatorApp CalculatorApp.cpp Calculator.cpp)