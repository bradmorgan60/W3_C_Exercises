/*
2. Write C program to sort an array of integers in ascending or descending order using a callback function to compare the elements.
Expected Output:

Original array: 7 2 0 5 8 9 

Ascending order: 0 2 5 7 8 9 

Descending order: 9 8 7 5 2 0
*/

#include <stdio.h>
#include <stdlib.h>

int compare(int x, int y) {
    if (x > y) return -1;
    else return 1;
}

// Bubble sort algorithm - use a nested for loop to compare indexes side-by-side
void Bubble_Sort(int size, int *arr) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            // printf("%d ", arr[i]);
        }
        printf("%d ", arr[i]);
    }
    printf("\n");
        
}

int main() {
    int size, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    // User inputs all elements in array based on size selected
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    // print all integers that were entered...
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    printf("Ascending Order: ");
    Bubble_Sort(size, arr);
    

    return 0;
}