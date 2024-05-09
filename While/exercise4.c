/*
4. Write a C program that prompts the user to 
   input a series of numbers until they input a duplicate number. 
   Use a while loop to check for duplicates.
*/

#include <stdio.h>

int main() {
    int number;
    int duplicate = 0, index = 0;
    int previousNumber[100];

    printf("Enter a number (Program will stop if duplicate is entered)\n");
    
    while (!duplicate) {
        printf("Enter a number: ");
        int readStatus = scanf("%d", &number);

        if (readStatus != 1) {
            printf("Invalid input. Please enter a valid integer\n");

            while (getchar() != '\n') {
                continue;
            
        }

        // continue;
    }

    for (int i = 0; i < index; i++) {
        if (number == previousNumber[i]) {
            duplicate = 1;
            printf("Duplicate found. Program stopped\n");
            break;
        }
    }

    previousNumber[index++] = number;
    }
    return 0;
}