project(CalculatorApp VERSION 1.0.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../build-output)

configure_file("${PROJECT_SOURCE_DIR}/include/config.h.in" "${PROJECT_SOURCE_DIR}/include/config.h")
include_directories(${PROJECT_SOURCE_DIR})
add_executable(CalculatorApp CalculatorApp.cpp Calculator.cpp)