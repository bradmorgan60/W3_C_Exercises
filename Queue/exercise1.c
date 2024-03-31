/*
1. Write a C program to implement a queue using an array. Programs should contain functions for 
  inserting elements into the queue
  displaying queue elements
  checking whether the queue is empty or not

Expected Output:

Initialize a queue!
Check the queue is empty or not? Yes

Insert some elements into the queue:
Queue elements are: 1 2 3 

Insert another element into the queue:
Queue elements are: 1 2 3 4 

Check the queue is empty or not? No  
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

struct Heap {
    int size;
    int *arr;
};

void display(struct Heap *heap) {
    printf("Original array: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", *(heap->arr + i));
    }
    printf("\n");
}

void User_Input(struct Heap *heap) {
    printf("Initialize the queue!\n");
    printf("Enter the size of the queue: ");
    scanf("%d", &heap->size);

    for (int i = 0; i < heap->size; i++) {
        printf("Num-%d: ", (i + 1));
        scanf("%d", (heap->arr + i));
    }
}

int is_empty(struct Heap *heap) {
    if (heap->arr == NULL) return 1;
    else return -1;
}

int main() {
    struct Heap *heap;
    heap->arr = calloc(heap->size, sizeof(int));
    User_Input(heap);
    display(heap);
    return 0;
}