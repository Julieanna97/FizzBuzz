#ifndef __FIZZBUZZ_H_
#define __FIZZBUZZ_H_
#include <stdio.h>
#include <stdbool.h>

typedef enum
{
    FIZZ,
    BUZZ,
    FIZZ_BUZZ,
    STRING_OF_NUMBER

} FIZZBUZZCONSOLE;

FIZZBUZZCONSOLE fizzBuzz(int number);

void automatedFizzBuzzGame();
void printResult(FIZZBUZZCONSOLE result, int number);

#endif