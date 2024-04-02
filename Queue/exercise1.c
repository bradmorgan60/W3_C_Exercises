/*
. Write a C program to implement a queue using an array. Programs should contain functions for... 
    1. Inserting elements into the queue 
    2. Displaying queue elements
    3. Checking whether the queue is empty or not

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

struct Heap {
    int size;
    int *arr;
};

void display(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void is_empty(int size, int *arr) {
    struct Heap *heap;
    if (sizeof(heap->arr) <= 7) {
        printf("Array is empty\n");
    } else {
        printf("Array is not empty\n");
    }
}


int main() {
    struct Heap *heap;
    is_empty(heap->size, heap->arr);

    printf("Enter size of queue: ");
    scanf("%d", &heap->size);
    heap->arr = calloc(heap->size, sizeof(int));

    for (int i = 0; i < heap->size; i++) {
        printf("Num-%d: ", i + 1);
        scanf("%d", (heap->arr + i));
    }

    display(heap->size, heap->arr);
    is_empty(heap->size, heap->arr);

    return 0;
}


