#include <stdio.h>
#include <stdlib.h>

void Descending(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
}

void Ascending(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {     // The only difference with the above function is logic operator "<" vs ">"
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
}

int main() {
    int size, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("----------------\n");
    printf("Expected Output: \n");
    printf("Original array: ");

    for (int i = 0; i < size; i++) { 
        printf("%d ", *(arr + i)); 
        }

    printf("\nAscending order: ");
    Ascending(size, arr);

    printf("\nDescending order: ");
    Descending(size, arr);

    printf("\n");

    return 0;
}