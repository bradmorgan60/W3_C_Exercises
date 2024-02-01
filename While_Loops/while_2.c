#include <stdio.h>

int main() {

    int number, sum = 0;

    printf("Enter an integer to append to the array\n (Enter 0 to stop program) \n");

    while(1) {
        printf("Enter an integer: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        else if (number > 0) {
            sum += number;
        }
    }

    printf("The sum of the integers: %d \n", sum);

    
    return 0;
}