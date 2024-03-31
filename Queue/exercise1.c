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
    int arr[MAX_HEAP_SIZE];
};

void display(struct Heap *heap) {
    printf("Queue elements are: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", *(heap->arr + i));
    }
    printf("\n");
}

void insert(struct Heap *heap, int key) {
    heap->arr[heap->size] = key;
    heap->size++;
}

void is_empty(struct Heap *heap) {
    for (int i = 0; i < heap->size; i++) {
        if (heap->arr == NULL) {
            printf("Array is empty...\n");
            break;
        } else {
            printf("Array is not empty...\n");
            break;
        }
    }
}

void User_Input(struct Heap *heap) {
    printf("Initialize the queue!\n");
    

}

int main() {
    struct Heap heap;    
    // printf("\n");
    return 0;
}