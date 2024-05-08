/*
1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
*/

#include <stdio.h>

int main() {
    int x = 0;
    int y = 10;

    printf("Ascending:\n");
    while (x <= 10)
    {
        printf("%d\n", x);
        x++;
    }

    printf("\n");
    printf("Descending:\n");

    while (y >= 0) {
        printf("%d\n", y);
        y--;
    }
    

    return 0;
}