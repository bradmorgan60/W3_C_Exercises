#include <stdio.h> // library for input / output for printf function
#include <stdlib.h> // library for dynamic memory allocation

#define MAX_HEAP_SIZE 100 // define the max size of the heap

// Function used to swap two elements in the heap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Maintain the max heap property after an element is inserted
void heapifyDown(int arr[], int size, int index) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < size && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }

    if (rightChild < size && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }

    if (largest != index)
    {
        swap(&arr[index], &arr[largest]);
        heapifyDown(arr, size, largest);
    }
}

void buildMaxHeap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        heapifyDown(arr, size, i);
    }
}

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Test with a random array
    int randomArray[] = {6, 8, 12, 7, 1};
    int randomSize = sizeof(randomArray) / sizeof(randomArray[0]); // integer = 4 bytes
    // printf("%d \n", randomSize);

    printf("Original Random Array: \n");
    display(randomArray, randomSize);

    buildMaxHeap(randomArray, randomSize);

    printf("\n");
    printf("Max Heap of Random Array: \n");
    display(randomArray, randomSize);

    // Test with sorted array
    int sortedArray[] = {19, 12, 8, 6, 2};
    int sortedSize = sizeof(sortedArray) / sizeof(sortedArray[0]);

    printf("\nOriginal Sorted Array: \n");
    display(sortedArray, sortedSize);

    buildMaxHeap(sortedArray, sortedSize);

    printf("\nMax Heap from Sorted Array:\n");
    display(sortedArray, sortedSize);


    return 0;
}