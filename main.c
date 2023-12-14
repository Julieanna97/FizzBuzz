#include "FizzBuzz.h"

void automatedFizzBuzzGame();
void printResult(FIZZBUZZCONSOLE result, int number);

int main(void) {
    int input = 0;

    while (1) {
        printf("\t\t\t===== Welcome to FizzBuzz Game! =====\n");

        printf("You get 2 options:\n1. Press 1 for automated FizzBuzz game from 1-100.\n2. Press 2 to choose your own number to manually call FizzBuzz method.\n3. Press 3 to exit the game.\nGood luck!\n");
        
        // Check if scanf successfully reads an integer
        if (scanf("%d", &input) != 1)
        {
            // Handle the case where input is not an integer
            printf("Invalid input. Please enter a valid number.\n");
            // Clear the input buffer
            while (getchar() != '\n');  // Consume characters until newline
            continue;   // Restart the loop

        }

        switch (input) {
            case 1:
                automatedFizzBuzzGame();
                break;
            case 2:
                int userNumber;
                printf("Enter a number: ");
                scanf("%d", &userNumber);
                FIZZBUZZCONSOLE result = fizzBuzz(userNumber);
                printResult(result, userNumber);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please choose again.\n");
                break;
        }
    }
}

void automatedFizzBuzzGame() {
    for (int i = 1; i <= 100; i++) {
        FIZZBUZZCONSOLE result = fizzBuzz(i);
        printResult(result, i);
    }
}

void printResult(FIZZBUZZCONSOLE result, int number) {
    
    char int_str[20];

    switch (result) {
        case FIZZ:
            printf("Fizz!\n");
            break;
        case BUZZ:
            printf("Buzz!\n");
            break;
        case FIZZ_BUZZ:
            printf("FizzBuzz!\n");
            break;
        case STRING_OF_NUMBER:
            snprintf(int_str, sizeof(int_str), "%d", number);
            printf("%s\n", int_str);
            break;
    }
}