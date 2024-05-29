#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100 // max size of the heap...keep this in mind as we work on the program

/*
Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size;
};

// Adding this to swap elements on the heap if a condition is met
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Function to maintain the max heap property after an element is inserted
void HeapifyUp(struct Heap *heap, int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap->arr[index] > heap->arr[parent])
    {
        swap(&heap->arr[index], &heap->arr[parent]);
        index = parent;
        parent = (index - 1) / 2; // Update the parent index
    }
}
// What if we want to insert an element into the heap? This could be anywhere in the heap
void insert(struct Heap *heap, int key) {
    if (heap->size >= MAX_HEAP_SIZE)
    {
        printf("Heap overflow....\n");
        return;
    }

    heap->arr[heap->size] = key; // insert the key at the end of the heap...what does that mean
    heap->size++; // increase size of the heap

    // HeapifyUp(heap, heap->size - 1); // Restore the max heap property
}

// just like in exercise 2, except we have the array and size in the struct
void HeapifyDown(struct Heap *heap, int index) { 
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heap->size && heap->arr[leftChild] > heap->arr[largest])
    {   
        largest = leftChild;
    }

    if (rightChild < heap->size && heap->arr[rightChild] > heap->arr[largest])
    {
        largest = rightChild;
    }

    if (index != largest)
    {
        swap(&heap->arr[index], &heap->arr[largest]);
        HeapifyDown(heap, largest);
    }
}

// Function to delete the root element from the heap
int deleteMax(struct Heap *heap) {
    if (heap->size <= 0) {
        printf("Heap underflow...\n");
        return -1;
    }
    int maxElement = heap->arr[0];
    heap->arr[0] = heap->arr[heap->size - 1];
    heap->size--;

    HeapifyDown(heap, 0);
    return maxElement;
}

void display(struct Heap *heap) {
    printf("Heap elements: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Heap heap;
    heap.size = 0;

    insert(&heap, 150);
    insert(&heap, 200);
    insert(&heap, 300);
    insert(&heap, 400);
    insert(&heap, 500);
    insert(&heap, 600);

    // display the heap
    display(&heap);

    // Test delete operation
    int maxElement = deleteMax(&heap);
    if (maxElement != -1) {
        printf("Deleted max element: %d\n", maxElement);
    }

    display(&heap);

    return 0;
}