#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#include <stdio.h>
#include <stdlib.h>


/*
Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

int main() 
{
    int num1, num2, num3, result, max;
    printf("Enter number 1: ");
    scanf("%d", &num1); // 25

    printf("Enter number 2: ");
    scanf("%d", &num2); // 35

    printf("Enter number 3: ");
    scanf("%d", &num3); // 15

    // int max = MAX("%d");

    result = (num1 + num2 + abs(num1 - num2)) / 2;

    max = (result + num3 + abs(result - num3)) / 2;

    printf("Max value: %d \n", max);

    return 0;
}


