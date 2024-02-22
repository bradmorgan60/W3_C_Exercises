#include <stdio.h>

int Add(int*, int*);

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Sum: %d\n", Add(&num1, &num2));


    return 0;
}

int Add(int *first, int *second) {
    int sum; 
    sum = *first + *second;
    return sum;

}