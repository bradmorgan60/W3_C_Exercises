#include <stdio.h>

int Add2Numbers(int *, int *);

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = Add2Numbers(&num1, &num2);

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

int Add2Numbers(int *n1, int *n2) {
    int sum;
    sum = *n1 + *n2;
    return sum;
}