/*
11. Write a program in C to sort elements of an array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int compare(int a, int b) {
    return a > b;
}

void sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 }

int main() {
    int size, *arr;
    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    // printf("Array: ");
    // display(arr, size);

    printf("Sorted Array: ");
    sort(arr, size);
    display(arr, size);

    return 0;
}