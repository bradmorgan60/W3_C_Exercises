#include <stdio.h>

/*
12. Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :
   1
   2 3
   4 5 6
   7 8 9 10
*/

int main() {
    int rows, k = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) { // loop for the number of rows
        for (int j = 1; j <= i; j++) // loop to create a new line for each row
            printf("%d ", k++); // for each row, iterate by the row number by 1
        printf("\n");

    }


    return 0;
}