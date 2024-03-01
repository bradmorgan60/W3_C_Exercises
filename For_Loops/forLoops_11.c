#include <stdio.h>
/*
11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

The pattern like :

 1
 22
 333
 4444
*/

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");

    }

    printf("-----------\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}