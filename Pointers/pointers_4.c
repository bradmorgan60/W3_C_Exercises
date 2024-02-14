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

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    first = &num1;
    second = &num2;

    sum = *first + *second;

    printf("Sum: %d\n", sum);

    return 0;


}

/*
The purpose of this exercise is to practice how pointer variables interact with memory references

We initialize 5 variables in the solution: num1, num2, *first, *second, sum
- The requirement is to print the sum using pointers
- The way we solve this is as follows:
    - When we use scanf(), we are required to use & which acts as a reference in memory
    - Pointers are also addresses in memory
- With this logic, we can set the pointer values equal to the memory addresses from the input values
- Those values, therefore, have the same memory addresses

- Then, we are able add the pointers together. We cancel out the memory addresses and use the values stored in memory to achieve the sum.


*/