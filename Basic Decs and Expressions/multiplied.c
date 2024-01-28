#include <stdio.h>

/*
Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!
*/

int main() {

    int num1, num2;

    printf("Enter your first integer: ");
    scanf("%d", &num1);

    printf("Enter your second integer: ");
    scanf("%d", &num2);

    if (num2 > num1) { // this is used to swap the numbers
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 % num2 == 0)
    {
        printf("Multiplied!\n");
    // } else if (num2 % num1 == 0)
    // {
    //     printf("Multiplied!\n");
    } else {
        printf("Not multiplied \n");
    }
    
    return 0;
}