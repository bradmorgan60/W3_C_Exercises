/*
9. Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/

#include <stdio.h>
#include <stdlib.h>

int max_compare(int a, int b) {
    return a > b;
}

int min_compare(int a, int b) {
    return a < b;
}

void compare(int *arr, int size) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max_compare(arr[i], arr[0])) {
            max = arr[i];
        }
        if (min_compare(arr[i], arr[0])) {
            min = arr[i];
        }
    }
        printf("Max: %d\n", max);
        printf("Min: %d\n", min);
}

void display(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));
    }

    display(arr, size);
    compare(arr, size);

    return 0;
}