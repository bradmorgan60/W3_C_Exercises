#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *ptr, sum = 0;

    printf("Enter the length of the array: ");
    scanf("%d", &size);

    printf("\nEnter the %d integers below: \n", size);

    ptr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i);
        scanf("%d", (ptr + i));
    }

    printf("--------\n");
    printf("The integers entered are below: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d : %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }
    printf("Sum: %d\n", sum);

    return 0;
}