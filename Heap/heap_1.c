#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

struct Heap {
    int arr[MAX_HEAP_SIZE];
    int size; // display function
};

void display(struct Heap *heap) {
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    // no memory is being dynamically allocated to the heap
    printf("\n");
}

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

int main() {
    struct Heap heap;
    int size, *arr;
    printf("Exercise 1: Implement basic heap functionality\n");

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", arr + i);
    }
    printf("\n");

    // printf("Struct display: ");
    // display(&heap);
    // error occurs because we do not have memory dynamically allocating to the heap

    // printf("Display via pointer: ");
    // display_pointer(size, arr);
    // works

    printf("Regular display: ");
    display_reg(size, arr);
    // works
    return 0;
}