#include <stdio.h>
#include <stdlib.h>

int compare(int x, int y) {
    if (x > y) return 1;
    else return -1;

}

void BubbleSort(int size, int *arr, int (*compare)(int, int)) {
    int temp;
    for (int i = 0; i < size; i++) 
        for (int j = i + 1; i < size; i++) {
            if (compare(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        // printf("%d ", arr[i + 1]);
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

    printf("Original Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Sorted array...\n");
    BubbleSort(size, arr, compare);
    for (int i = 0; i < size; i++){
        printf("%d ", *(arr + i));
    }


    return 0;
}