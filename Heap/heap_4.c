#include <stdio.h>
#include <stdlib.h>

void Ascending_Order(int*, int);
void Descending_Order(int*, int);
void printArray(int*, int);

int main() {
    int *arr, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", (arr + i));
    }
    
    printf("Original array: \n");
    printArray(arr, size);

    Ascending_Order(arr, size);
    printArray(arr, size);

    Descending_Order(arr, size);
    printArray(arr, size);

    free(arr);

    return 0;
}

void Ascending_Order(int *arr, int size) {
    printf("Ascending order...\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    // printf("%d ", *(arr + i));
    }
    // printf("\n");
    
}

void Descending_Order(int *arr, int size) {
    printf("Descending order...\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) < *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    // printf("%d ", *(arr + i));
    }
    // printf("\n");
}

void printArray(int *arr, int size) {
     for (int i = 0; i < size; i++) {
        // printf("Element-%d: %d\n", (i + 1), *(arr + i));
        printf("%d ", *(arr + i));
    }
    printf("\n");
}