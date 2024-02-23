#include <stdio.h>
#include <stdlib.h>

void SwapNums(int *arr, int size);

void SwapNums(int *arr, int size) {
    for (int i = 0; i < size / 2; i++) { // the reason to divide by 2 is to find the midpoint of the array
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
/*
Logic for swap...
Index:  0  1  2  3  4
Array: [1, 2, 3, 4, 5]

arr[0] = temp;
arr[0] = arr[5 - 1 - 0] (arr[4])
arr[4] = temp;

*/

int main() {
    int size, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements below: \n", size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", arr + i);
    }

    printf("The value before swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", i + 1, *(arr + i));
    }

    SwapNums(arr, size);

    printf("The value after swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", i + 1, *(arr + i));
    }

    free(arr); // use to prevent memory leaks

    return 0;
}