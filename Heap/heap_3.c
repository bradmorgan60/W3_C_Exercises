#include <stdio.h>

// Function takes an array, size, and index as input and ensures that the subtree rooted at the index maintains the min-heap property
//
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


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int randomArray[] = {4, 8, 12, 10, 7};
    int randomSize = sizeof(randomArray) / sizeof(randomArray[0]);

    printf("Random Array: ");
    printArray(randomArray, randomSize);
    return 0;
}