/*
5. Write a C program that generates a random number between 1 and 20 and asks the user to guess it. 
   Use a while loop to give the user multiple chances until they guess the correct number.

Questions:
   What are some use cases for this type of exercise?
        - 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Program will generate a random number between 1 and 20. Try and guess the number!\n");
    
    // srand(time(NULL));
    int target = rand() % 20 + 1; // generate randome number between 1 and 20

    int userGuess;
    int attempts = 0;

    printf("Guess the number between 1 and 20\n");

    while (1) {
        printf("Input your guess: ");
        scanf("%d", &userGuess);

        attempts++;
        
        if (userGuess == target) {
        printf("Congrats bro...you just guessed the correct number in %d attempt(s)\n", attempts);
        break;
    } else {
        printf("Incorrect. Try again\n");
    }
}

    return 0;
}