#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

/*
1. Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size;
};

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void HeapifyUp(struct Heap *heap, int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap->arr[index] > heap->arr[parent]) {
        swap(heap->arr[index], heap->arr[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

void HeapifyDown(int index, struct Heap *heap) {
    // we can think of this being structured in an array. Largest number will be at index of 0
    // left node will ALWAYS be one index to the left of the right node (side by side)
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

   if (leftChild < heap->size && heap->arr[leftChild] > heap->arr[largest]) {
        largest = leftChild;
   }

   if (rightChild < heap->size && heap->arr[rightChild] > heap->arr[largest]) {
        largest = rightChild;
   }

   if (index != largest) {
        swap(heap->arr[index], heap->arr[largest]);
        HeapifyDown(largest, heap);
   }
  
}

void insert(struct Heap *heap, int key) {
    printf("Inserting element in heap: ");
    if (heap->size >= MAX_HEAP_SIZE) {
        printf("Heap overflow...");
        return;
    }
    heap->arr[heap->size] = key;
    heap->size++;

    // HeapifyUp();

}

void display(struct Heap *heap) {
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

void delete() {

}

int main() {
    struct Heap heap;
    return 0;
}