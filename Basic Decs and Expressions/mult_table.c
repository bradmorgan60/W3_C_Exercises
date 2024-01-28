#include <stdio.h>

/*
Multiplication table
The program allow the input of a single integer and display the multiplication table up to the square
*/

int main() {
    int x, j;

    printf("Enter the number to be calculated: ");
    scanf("%d", &x);

    for(j=1; j<=x; j++) {
        printf("%d X %d = %d \n", x, j, x*j);
    }

    return 0;
}

