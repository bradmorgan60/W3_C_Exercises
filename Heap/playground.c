#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

struct Heap {
    int size;
    int arr[MAX_HEAP_SIZE];
};

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void HeapifyDown(struct Heap *heap, int index) {
    // index should be the largest value...now we try to 
    int largest = index;
    int leftChild = 2 * index + 1;
    int RightChild = 2 * index + 2;

    if (index != largest)
    {
        swap(heap->arr[index], heap->arr[largest]);
    }
    
}

void HeapifyUp(struct Heap *heap, int index) {
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (index != smallest) { // call the swap function
        swap(heap->arr[index], heap->arr[smallest]);
    }
}

void display(struct Heap *heap) {
    printf("Heap elements: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
}

int main() {
    return 0;
}