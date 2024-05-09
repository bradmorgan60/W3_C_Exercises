/*
3. Write a C program that calculates the product of numbers from 1 to 5 using a while loop
*/


#include <stdio.h>

int main() {
    printf("Use while loop to calculate the product of numbers from 1 to 5\n");
    int product = 1;
    int number = 1;

    while (number <= 5) {
        product *= number;
        printf("Number: %d -- Product: %d\n", number, product);
        number++;
    }


    return 0;
}