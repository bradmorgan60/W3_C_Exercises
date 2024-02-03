#include <stdio.h>

int main() {
    int num1, num2, *first, *second, sum;

    printf("Just adding pointers together...\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    first = &num1;
    second = &num2;

    sum = *first + *second; // we need to assign the * here to the new variables. If we do not, the program
    // thinks we are referring to the addresses

    printf("Sum: %d\n", sum);

    return 0;
}