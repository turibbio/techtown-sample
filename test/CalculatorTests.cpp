#include "../src/Calculator.cpp"
#include "gtest/gtest.h"

TEST(CalculatorTests, SumTest)
{
    Calculator c;
    double x = 5.0;
    double y = 3.0;
    double expectedResult = 8.0;

    double result = c.Sum(x, y);

    ASSERT_EQ(expectedResult, result);
}

TEST(CalculatorTests, SubTest)
{
    Calculator c;
    double x = 5.0;
    double y = 3.0;
    double expectedResult = 2.0;

    double result = c.Sub(x, y);

    ASSERT_EQ(expectedResult, result);
}

TEST(CalculatorTests, MultiplyTest)
{
    Calculator c;
    double x = 5.0;
    double y = 3.0;
    double expectedResult = 15.0;

    double result = c.Multiply(x, y);

    ASSERT_EQ(expectedResult, result);
}

TEST(CalculatorTests, DivideTest)
{
    Calculator c;
    double x = 15.0;
    double y = 3.0;
    double expectedResult = 5.0;

    double result = c.Divide(x, y);

    ASSERT_EQ(expectedResult, result);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}