#include <stdio.h>
#include <stdlib.h>

// In the tree data structure, the root value will be the max value. All of the child nodes will need to be less than the root
void maxHeapify(int *arr, int size, int index) {
    int largest = index;
    int childLeft = 2 * index + 1;
    int childRight = 2 * index + 2;

    if (childLeft < size && arr[childLeft] > arr[largest])
    {
        childLeft = largest;
    }

    if (childRight < size && arr[childRight] > arr[largest])
    {
        childRight = largest;
    }

    if (largest != index) {
        int temp = arr[index];
        arr[index] = arr[largest];
        arr[largest] = temp;

        // Perform recursion
        maxHeapify(arr, size, largest);
    }
}

// Sort in descending order
void heapSort(int *arr, int size) {
    for (int i = size; i >= 0; i--) {
        maxHeapify(arr, size, i);
    

    for (int i = size - 1; i > 0; i--) {
        int temp = arr[0];
        arr[i] = arr[0];
        arr[i] = temp;

        maxHeapify(arr, size, 0);
    }
}
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
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

    printf("Original array: ");
    printArray(arr, size);

    heapSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}