#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

// void displayArray();
// void UserInput();

/*
    Index: 0  1  2  3  4
    Array: 4  5  2  10 6

    the root should be the largest number here. Hence, all child items will be less than the root
*/

void HeapifyDown(int arr[], int size, int index) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && arr[leftChild] < arr[largest])
    {
        leftChild = largest;
    }

    if (rightChild < size && arr[rightChild] < arr[largest])
    {
        rightChild = largest;
    }

    if (largest != index) {
        int temp = arr[index];
        arr[index] = arr[largest];
        arr[largest] = temp;

        HeapifyDown(arr, size, largest);
    }

}




void RandomArray(int size, int *arr) {
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Cool, now enter those %d elements: \n", size);

    arr = calloc(size, sizeof(int));
    // enter 5; 5 * 4 = 20 bytes allocated to the heap

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i+1);
        scanf("%d", (arr + i));
    }

    printf("----User Input Below---\n");

    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d\n", i+1, *(arr + i));
    }

}

void displayArray(int arr[], int size) {
    // int the_array[] = {3,4,5,6,7};
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int *arr, size;
    int SortedArray[] = {10, 9, 8, 7, 6, 5};
    int SortedSize = sizeof(SortedArray) / sizeof(SortedArray[0]);

    // UserInput(size, arr);
    printf("Sorted Array: ");
    displayArray(SortedArray, SortedSize);

    RandomArray(size, arr);


    // printf("Random Array: ");
    // displayArray(arr, size);

    return 0;
}