#include <stdio.h>
/*
5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 
*/

long Add2Numbers(long *, long *);

int main() {
    long first, second, sum;
    printf("Enter the first number: ");
    scanf("%ld", &first);

    printf("Enter the second number: ");
    scanf("%ld", &second);

    sum = Add2Numbers(&first, &second);

    printf("The sum of %ld and %ld is %ld\n", first, second, sum);
    return 0;
}

long Add2Numbers(long *n1, long *n2) {
    long sum;
    sum = *n1 + *n2;
    return sum;
}