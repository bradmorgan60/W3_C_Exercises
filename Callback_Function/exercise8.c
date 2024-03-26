/*
8. Write a C program to find the largest or smallest element in an array using a callback function to compare the elements.
Expected Output:

Original array elements: 7 0 4 2 9 5 1 

The minimum element is 0
The maximum element is 9
*/

#include <stdio.h>
#include <stdlib.h>

typedef int (*my_pointer)(int size, int *arr);

int max(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    return arr[0];
    }

int min(int size, int *arr) {
    for (int i = 0; i < size; i++) {
        if (arr[0] > arr[i]) {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}

int calculate(int size, int *arr, my_pointer operator) {
    return operator(size, arr);
}

int main() {
    int size, *arr;
    printf("Enter size of array (# of elements): ");
    scanf("%d", &size);

    // user input array
    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Number-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    printf("Max: %d\n", calculate(size, arr, max));
    printf("Min: %d\n", calculate(size, arr, min));

    return 0;
}