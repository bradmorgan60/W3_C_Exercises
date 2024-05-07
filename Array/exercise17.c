/*
17. Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int compare(int a, int b) {
    return a > b;
}

int min_compare(int a, int b) {
    return a < b;
}

void sort(int *arr, int size) { 
    printf("Ascending order: \n");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Second smallest value: %d\n", arr[1]);
}

int min(int *arr, int size) {
    int min = arr[0];
    int two_min[100];
    int i;
    for (int i = 0; i < size; i++) {
        if (compare(arr[0], arr[i])) {
            min = arr[i];
        }
        
    }
    return min;
}

int main() {
    int *arr, size;
    int min_val = arr[0];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    display(arr, size);
    sort(arr, size);
    // display(arr, size);

    // printf("Min value: %d\n", min_val);
    // printf("Second smallest value: %d\n", min(arr, size));

    return 0;
}