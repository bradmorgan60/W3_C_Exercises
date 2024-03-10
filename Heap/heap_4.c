#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void UserInput(int *arr, int size) {
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", (arr + i));
    }
    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d\n", (i + 1), *(arr + i));
    }
}

int main() {
    int size, *arr, i, j;
    
    // UserInput(arr, size);
    printf("Size of array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    printf("Original array...\n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", arr + i);
    }
    
    // Ascending Sortinng algorithm
    printf("Ascending Order....\n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    printf("Element-%d : %d \n", i + 1, *(arr + i));
    }

    printf("\n");
    // Descending Sorting Algorithm
    printf("Descending Order....\n");
     for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) < *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    printf("Element-%d : %d \n", i + 1, *(arr + i));
    
    }

    
    
    // swap(arr, size);

    return 0;
}