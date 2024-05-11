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
    printf("Guess the random number\n");
    srand(time(NULL));  // if this is not here, the number will be fixed. This will generate the random number
    int target = rand() % 20 + 1;
    int attempt = 0;
    int userGuess;

    while(1) {
        printf("Enter number: ");
        scanf("%d", &userGuess);

        attempt++;

        if (userGuess == target) {
            printf("Congrats! You guess the correct number in %d attempts", attempt);
            break;
        } else {
            printf("Try again\n");
        }
    }

    



    return 0;
}