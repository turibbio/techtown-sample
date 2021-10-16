cmake_minimum_required(VERSION 3.0.0)
project(CalculatorApp VERSION 1.0.0)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../output) 
configure_file("${PROJECT_SOURCE_DIR}/src/include/config.h.in" "${PROJECT_SOURCE_DIR}/src/include/config.h")
include_directories(${PROJECT_SOURCE_DIR})
add_executable(CalculatorApp src/CalculatorApp.cpp src/Calculator.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
