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

void HeapifyDown(int index, struct Heap *heap) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heap->size && heap->arr[leftChild] < heap->arr[index]) {
        largest = index;
    }
    if (rightChild < heap->size && heap->arr[rightChild] < heap->arr[index]) {
        largest = index;
    }

    if (index != largest) {
        swap(&heap->arr[index], &heap->arr[largest]);
        HeapifyDown(largest, heap);
    }

}

void insert() {
    
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