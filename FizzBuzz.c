#include "FizzBuzz.h"

FIZZBUZZCONSOLE fizzBuzz(int number)
{
    FIZZBUZZCONSOLE return_value = STRING_OF_NUMBER;

    if (number % 3 == 0 && number % 5 == 0)
    {
        return_value = FIZZ_BUZZ;
    }
    else if (number % 3 == 0)
    {
        return_value = FIZZ;
    }
    else if (number % 5 == 0)
    {
        return_value = BUZZ;
    }

    return return_value;

}