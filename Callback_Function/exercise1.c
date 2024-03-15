#include <stdio.h>
#include <stdlib.h>

void square(int *number) {
    int squared;
    squared = *number * *number;

    printf("%d ", squared);
}

int main() {
    int size, *arr, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    printf("Square of elements in array: \n");
    for (int i = 0; i < size; i++) {
        square(arr + i);
    }
    printf("\n");



    return 0;
}