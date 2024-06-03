#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size; // display function
};

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// void display(struct Heap *heap) {
//     for (int i = 0; i < heap->size; i++) {
//         printf("%d ", heap->arr[i]);
//     }
//     // no memory is being dynamically allocated to the heap
//     // we are referencing the struct that does not contain any methods that reference the heap
//     printf("\n");
// }

void display_pointer(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void display_reg(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void HeapifyUp(struct Heap *heap, int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap->arr[index] > heap->arr[parent]) {
        swap(&heap->arr[index], &heap->arr[parent]);
        index = parent; // assigning swapped element with to parent
        parent = (index - 1) / 2;  // maintain the parent
    }
}

void insert(struct Heap *heap, int key) {
    if (heap->size >= MAX_HEAP_SIZE) {
        printf("Heap overflow...\n");
    }

    heap->arr[heap->size] = key;
    heap->size++;

    HeapifyUp(heap, heap->size - 1);
}

int main() {
    struct Heap heap;
    int size, *arr;
    heap.size = 0;
    printf("Exercise 1: Implement basic heap functionality\n");

    printf("Enter the size of the array: (amount of space to allocate): ");
    scanf("%d", &size);
    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", arr + i);
        insert(&heap, *(arr + i));
    }
    printf("\n");

    // printf("Struct display: ");
    // display(&heap);
    // error occurs because we do not have memory dynamically allocating to the heap

    printf("Display via pointer: ");
    display_pointer(size, arr);
    // works

    // printf("Regular display: ");
    // display_reg(size, arr);
    // works
    return 0;
}