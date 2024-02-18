#include <stdio.h>

int main() {
    int size, number[50];
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements below: \n", size);

    for (int i = 0; i < size; i++) {
        printf("Enter an integer: %d : ", i + 1);
        scanf("%d", &number[i]);
    }

    // store the largest number
    for (int i = 0; i < size; i++) {
        if (number[0] < number[i] ) {
            number[0] = number[i];
        }
    }

    printf("The largest value : %d \n", number[0]);
    // printf("The smallest value: %d \n", number[0]);


}