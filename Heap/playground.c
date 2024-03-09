
#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

struct Heap {
    int size;
    int arr[];
};

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Root should be the max
void HeapifyDown(struct Heap *heap, int index) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heap->size && heap->arr[leftChild] > heap->arr[largest])
    {
        largest = leftChild;
    }
    else if (rightChild < heap->size && heap->arr[rightChild] > heap->arr[largest]) {
        largest = rightChild;
    }
    else if(index != largest) {
        swap(&heap->arr[index], &heap->arr[largest]);
        HeapifyDown(heap, largest);
    }
}

// root should be the min
void HeapifyUp(struct Heap *heap, int index) {
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heap->size && heap->arr[leftChild] < heap->arr[smallest])
    {
        smallest = leftChild;
    }
    else if (rightChild < heap->size && heap->arr[rightChild] < heap->arr[smallest]) {
        smallest = rightChild;
    }
    else if(index != smallest) {
        swap(&heap->arr[index], &heap->arr[smallest]);
        HeapifyUp(heap, smallest);
    }
    
}

void insert(struct Heap *heap, int key) {   // Key could be any integer value 
    if (heap->size >= MAX_HEAP_SIZE)
    {
        printf("Heap overflow...");
        return;
    }

    heap->arr[heap->size] = key;
    heap->size++;

    HeapifyUp(heap, heap->size - 1);


}

int deleteMax(struct Heap *heap) {
    if (heap->size <= 0) {
        printf("Heap underflow...");
        return -1;
    }

    int maxElement = heap->arr[0];
    heap->arr[0] = heap->arr[heap->size - 1];
    heap->size--;

    HeapifyDown(heap, 0);
    return maxElement;
}

void display(struct Heap *heap) {
    printf("Array: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
}



int main() {
    struct Heap heap;
    heap.size = 100;

    display(&heap);

    return 0;
}