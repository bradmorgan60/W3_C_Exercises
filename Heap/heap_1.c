#include <stdio.h>
#include <stdlib.h>
#define MAX_heap_SIZE 100

/*
Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

typedef struct {
    int array[MAX_heap_SIZE];
    int size;
} Heap;

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void delete() {

}

void heapifyUp(struct heap *heap, int index) {
    int parent = (index - 1) / 2;
    
    while (index > 0 && heap->array[parent] > heap->array[index]) {
        // parent must be the largest value in the tree
        swap(&heap->array[parent], &heap->array[index]);
        heap->array[index] = heap->array[parent];
        parent = (index - 1) / 2;
    }
}

void insert(struct heap *heap, int inserted_num) {
    if (heap->size >= MAX_heap_SIZE) {
        printf("heap overflow...\n");
    }
    heap->array[heap->size] = inserted_num;
    heap->size++;
}

int compare(int a, int b) {
    return a > b;
}

// sort in descending order
void sort(int size, int *arr) {
    printf("Descending order: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j])) {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
} 

void display(struct heap *heap) {
    // printf("User input: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", (heap->array[i]));
    }
    printf("\n");
}

int main() {
    struct Heap heap;
    int *arr, size;
    // heap.size = 0;
    printf("Basic heap functionality\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
        insert(&heap, *(arr + i));
    }

    display(&heap);
    sort(size, arr);
    display(&heap);

    return 0;
}