#include <stdio.h>

/*
10. Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234
*/

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) { // loop to begin generating rows
        for (int j = 1; j <= i; j++) // print number based on current row
            printf("%d", j);        // Note: remove for loop brackets in the second for loop before running. Only use the first
        printf("\n");
    }


    return 0;
}