#include <stdio.h>

int main() {
    int number, sum = 0;
    printf("Enter a positive integer: \n");
    printf("Note: Enter 0 to stop the program.\n");


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

    printf("Sum: %d\n", sum);


    return 0;
}