#include <stdio.h>

/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/

int main() {
    int num1, num2, *first, *second, sum;

    printf("Adding two pointers together\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    first = &num1;
    second = &num2;

    sum = *first + *second;

    printf("Sum: %d\n", sum);

    return 0;
}