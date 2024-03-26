/*
0. Write a C program to implement quick sort using callback function.
Expected Output:

Before sorting: 5 2 8 7 1 3 6 4 
After sorting: 1 2 3 4 5 6 7 8 
*/

#include <stdio.h>
#include <stdlib.h>

// typedef int (* my_pointer)(int size, int *arr);

int compare(int a, int b) {
    if (a > b) return 1;
    else return -1;
}
void sort(int size, int *arr, int (*my_pointer)(int, int)) {
    int temp;
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    // return operation(size, arr);
}

// int the_sort_pointer(int size, int *arr, my_pointer operation) {
//     return operation(size, arr);
// }

int main() {
    int size, *arr;
    printf("Enter size of array: ");
    scanf("%d", &size);

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

    sort(size, arr, compare);
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");


    return 0;
}