#include <stdio.h>

// Function takes an array, size, and index as input and ensures that the subtree rooted at the index maintains the min-heap property
// The heap is a tree data structure and we need to arrange the root node and child nodes accordingly
void minHeapify(int arr[], int n, int i) {
    int smallest = i;     // smallest is the root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    if (left < n && arr[left] < arr[smallest])
    {
        smallest = left;
    }

    if (right < n && arr[right] < arr[smallest])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        // recursively heapify the affected sub-tree
        minHeapify(arr, n, smallest);
    }

}

void buildMinHeap(int arr[], int n) {
    for (int i = n; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int randomArray[] = {4, 10, 3, 5, 1};
    int randomSize = sizeof(randomArray) / sizeof(randomArray[0]);

    printf("Random Array: ");
    printArray(randomArray, randomSize);

    // Build Heap
    buildMinHeap(randomArray, randomSize);

    printf("Min heap from Random Array: ");
    printArray(randomArray, randomSize);

    printf("\n");

    int sortedArray[] = {8, 7, 5, 4, 2};
    int sortedSize = sizeof(randomArray) / sizeof(randomArray[0]);

    printf("Sorted Array: ");
    printArray(sortedArray, sortedSize);

    // Build Heap
    buildMinHeap(sortedArray, sortedSize);

    printf("Min heap from Sorted Array: ");
    printArray(sortedArray, sortedSize);

    return 0;
}