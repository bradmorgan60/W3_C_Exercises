#include <stdio.h>

long addNumbers(long *, long *);

int main() {
    long fno, sno, sum;

    printf("Enter the first number: ");
    scanf("%ld", &fno);

    printf("Enter the second number: ");
    scanf("%ld", &sno);

    sum = addNumbers(&fno, &sno);

    printf("Sum of %ld and %ld = %ld\n", fno, sno, sum);

    return 0;
}

long addNumbers(long *n1, long *n2) {
    long sum;
    sum = *n1 + *n2;
    return sum;
}