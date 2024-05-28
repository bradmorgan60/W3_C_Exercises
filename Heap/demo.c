#include <stdio.h>
#include <stdlib.h>

// In a heap, we will be working with a tree that consists of root nodes and child nodes
// we can also visualize this in the form of an array
void display(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));
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
                arr[j] = arr[i];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size, *arr;
    printf("Demo environment for working with Heap data structure\n");
    printf("Enter the size of the tree: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + i);
    }

    return 0;
}