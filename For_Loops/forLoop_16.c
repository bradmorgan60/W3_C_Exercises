#include <stdio.h>

/*
16. Write a C program to display the sum of n terms of even natural numbers.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/

int main() {
    int terms, nums, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("\nEven numbers: ");
    for (int i = 1; i <= terms; i++) {
        nums = i * 2;
        printf("%d ", nums);
        sum += nums;
    }
    printf("\n-----\n");
    printf("\nSum of even natural numbers up to %d terms: %d\n", terms, sum);

    return 0;
}



