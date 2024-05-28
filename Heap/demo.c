#include <stdio.h>
#include <stdlib.h>

/*
1. Write a C program that implements the basic operations of a heap - insert, delete, and display.
*/

// In a heap, we will be working with a tree that consists of root nodes and child nodes
// we can also visualize this in the form of an array

struct Heap {
    int leftNode;
    int rightNode;
    int data;
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

void swap(int size, int *arr) {
    // We want to have the largest node as the root. The user will input the values
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

// 
void HeapifyUp(struct Heap) {
    struct Heap heap;
    /* 
        If the new value is less than the root, then that value will become the new root
        The root value must be maintained if the new value is greater than the root
    */
   if (heap->leftNode < heap->data) {
        

   }

}

int main() {
    struct Heap;
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