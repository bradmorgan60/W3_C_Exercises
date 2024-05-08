/*
2. Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. 
   Calculate and print the sum of all the positive integers entered
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers, *arr, sum = 0;
    arr = calloc(numbers, sizeof(int));

    while (numbers != 0) {
        printf("Enter a new number: ");
        scanf("%d", &numbers);
        sum += numbers;
    }

    printf("Sum: %d\n", sum);


    return 0;
}


