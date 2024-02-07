#include <stdio.h>

/*
6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.
*/

int main() {
    int num1, num2, *first, *second;

    printf("Input the first number; ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    first = &num1;
    second = &num2;

    if (*first > *second) {
        printf("%d is the maximum number\n", *first);
    } 
    else if (*second > *first) {
        printf("%d is the maximum number\n", *second);
    }
    else {
        printf("These numbers are equal\n");
    }
    

    return 0;
}