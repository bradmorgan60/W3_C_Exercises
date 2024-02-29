#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0, num1, *arr, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Array entered is below....\n");

    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d\n", i + 1, *(arr + i));
        sum += *(arr + i);
    }

    double average = sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);
    
    return 0;
}