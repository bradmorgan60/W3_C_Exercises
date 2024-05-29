#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

/*
1. Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

// In a heap, we will be working with a tree that consists of root nodes and child nodes
// we can also visualize this in the form of an array

struct Heap {
   int arr[MAX_HEAP_SIZE];
   int size;
};

void display(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int compare(int a, int b) {
    return a > b;
}

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// 
void HeapifyDown(struct Heap *heap, int index) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (heap->arr[leftChild] > heap->arr[largest])
        {
            largest = leftChild;
        }
    
    if (heap->arr[rightChild] > heap->arr[largest])
        {
            largest = rightChild;
        }
    
    if (index != largest) {
        swap(heap->arr[index], heap->arr[largest]);
        HeapifyDown(heap, largest);
    }

}

int main() {
    struct Heap heap;
    int size, *arr;
    printf("Demo environment for working with Heap data structure\n");
    printf("Enter the size of the tree: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", arr + i);
    }
    printf("Initial: ");
    display(size, arr);

    swap(size, arr);

    printf("Reverse: ");
    display(size, arr);

    return 0;
}