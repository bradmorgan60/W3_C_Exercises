#include <stdio.h>
#include <stdlib.h>
#define MAX_heap_SIZE 100

struct heap {
    // Dealing with the heap means that you will be indexing an array....a lot. Create a struct for it, as this will be utilized in many of the subsequent functions.
    int arr[MAX_heap_SIZE];
    int size; // important for indexing the array, be sure to subtract 1
};

void display(struct heap *heap) {
    printf("Elements: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void heapifyUp(struct heap *heap, int index) {
    int parent = (index - 1) / 2;

    // How?
    while (index > 0 && heap->arr[index] > heap->arr[parent]) {
        /*
        Think: What happens to the newly inserted value? Does the array get rearranged?
        We need to account for this. If the newly inserted value is greater than the superordinate root, then we swap.
        */
        swap(&heap->arr[index], &heap->arr[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

void insert(struct heap *heap, int key) {
    if (heap->size >= MAX_heap_SIZE) {
        printf("heap overflow...\n");
        return;
    }
    heap->arr[heap->size] = key;
    heap->size++; // increment the heap size by 1 upon insertion

    heapifyUp(heap, heap->size - 1);
}

int main() {
    struct heap heap;
    heap.size = 0;

    insert(&heap, 330);
    insert(&heap, 60);
    insert(&heap, 90);
    insert(&heap, 120);
    insert(&heap, 150);
    
    display(&heap);
    return 0;
}