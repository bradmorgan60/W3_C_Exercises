#include <stdio.h>

/*
15. Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120 
*/

int main() {
    int num, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
        printf("Factorial of %d = %d\n", num, fact);


    return 0;
}