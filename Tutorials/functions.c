#include <stdio.h>
#include <stdlib.h>


int multiplyNums(int x, int y) {
    int product;
    product = x * y;
    return product;
}

int addNums(int x, int y) {
    int sum;
    sum = x + y;
    return sum;
}

void Hello() {
    printf("Hello, computer thing.");
}

int main() {
    // Hello();
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the first integer: ");
    scanf("%d", &num2);

    printf("Product: %d \n", multiplyNums(num1, num2));
    printf("Sum: %d \n", addNums(num1, num2));
    
    return 0;
}