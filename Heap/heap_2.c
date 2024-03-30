#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

typedef int (* my_pointer)(int, int);

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2; 
    *num2 = temp;
}

void HeapifyDown(int index, int size, int *arr) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (arr[leftChild] < size && arr[leftChild] > arr[largest]) {
        leftChild = largest;
    }

    if (arr[rightChild] < size && arr[rightChild] > arr[largest]) {
        rightChild = largest;
    }

    if (index != largest) {
        swap(&arr[index], &arr[largest]);
        HeapifyDown(largest, size, arr);
    }
}

int compare(int x, int y) {
    if (x > y) return 1;
    else return -1;
}

void sort(int *arr, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BuildMaxHeap(int size, int *arr) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        HeapifyDown(i, size, arr);
    }
}

int main() {
    int size;
    int *arr = calloc(size, sizeof(int));

    printf("Enter size of array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Num-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("Original array: ");
    display(arr, size);
    printf("Sorted array: ");
    sort(arr, size);

    printf("Max heap: ");
    BuildMaxHeap(size, arr);
    display(arr, size);


    return 0;
}