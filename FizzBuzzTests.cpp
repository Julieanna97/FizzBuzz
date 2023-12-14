#include <gtest/gtest.h>

extern "C"
{
    #include "FizzBuzz.h"

}

class FizzBuzzTest : public testing::Test
{
    protected:
        void SetUp() override
        {
            /* Without this the Tests could break */
        }

};

TEST_F(FizzBuzzTest, WhenNumberIsDivisableByThreeShouldReturnFizz)
{
    // ARRANGE
    int choice = 3;

    // ACT
    FIZZBUZZCONSOLE result = fizzBuzz(choice);

    // ASSERT

    ASSERT_EQ(result, FIZZ);

}

TEST_F(FizzBuzzTest, WhenNumberIsDivisableByFiveShouldReturnBuzz)
{
    // ARRANGE
    int choice = 5;

    // ACT
    FIZZBUZZCONSOLE result = fizzBuzz(choice);

    // ASSERT

    ASSERT_EQ(result, BUZZ);

}

TEST_F(FizzBuzzTest, WhenNumberIsDivisableByThreeAndFiveShouldReturnFizzBuzz)
{
    // ARRANGE
    int choice = 15;

    // ACT
    FIZZBUZZCONSOLE result = fizzBuzz(choice);

    // ASSERT

    ASSERT_EQ(result, FIZZ_BUZZ);

}