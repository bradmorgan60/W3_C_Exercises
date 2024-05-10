/*
6. Write a C program that prompts the user to enter a positive integer. 
It then calculates and prints the factorial of that number using a while loop.
3 * 2 * 1 = 6
*/

#include <stdio.h>

int main() {
    int number, initial, increment, product = 1;
    printf("Calculating the factorial of a positive integer\n");
    printf("----------------------------\n");
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // number = initial + 1;
    
    while (number > 0) {
        product *= number;
        number--;
    }

    printf("Factorial: %d\n", product);

    return 0;
}