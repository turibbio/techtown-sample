enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(CalculatorAppTests CalculatorTests.cpp)
target_link_libraries(CalculatorAppTests ${GTEST_LIBRARIES} pthread)

add_test(
    NAME CalculatorTests
    COMMAND CalculatorAppTests
)