#include <stdio.h>
/*
6. Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 
*/

int main() {
    int table;
    printf("Input the number (table to be calculated) : ");
    scanf("%d", &table);

    for (int i = 1; i <=table; i++) {
        printf("%d X %d = %d\n", table, i, table * i);

    }


    return 0;
}