#include <stdio.h>

int main() {
    int sum = 0, num1;
    printf("Please enter the number of values in the loop: ");
    scanf("%d", &num1);
    
    for (int i = 1; i < num1 + 1; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\n");

    printf("Sum: %d\n", sum);
    return 0;
}