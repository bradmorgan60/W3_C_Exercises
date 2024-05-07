/*
15. Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// void display_deleted(int *arr, int size) {
//     for (int i = 0; i <= size; i++) {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");
// }

void delete(int *arr, int size) {
    int position, *new;
    // printf("Enter the value to be deleted: ");
    // scanf("%d", &deleted);

    printf("Input the position, where the value to be deleted: ");
    scanf("%d", &position);

    // arr = realloc(arr, sizeof(int));

    for (int i = 0; i < size; i++) { // we are going to iterate down from the last value
        // position = arr[i - 1];
        arr[i] = arr[i + 1];
        i++;
    }
    // size--;
    
}

int main() {
    int *arr, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Current array: ");
    display(arr, size);

    
    delete(arr, size);
    printf("New array: ");
    display(arr, size);

    return 0;
}