#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100 // max size of the heap...keep this in mind as we work on the program

/*
Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size;
}

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





int main() {
    return 0;
}