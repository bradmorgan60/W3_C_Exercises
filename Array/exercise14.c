/*
14. Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void display_insert(int *arr, int size) {
    for (int i = 0; i <= size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insert(int *arr, int size) {
    int inserted, position, *new;
    printf("Enter the value to be inserted: ");
    scanf("%d", &inserted);

    printf("Input the position, where the value to be inserted: ");
    scanf("%d", &position);

    arr = realloc(arr, sizeof(int));

    /* 
        Somehow, once we have the position, the right of the array will need to shift right one index space
        How can this be accomplished? Well, we could try a for loop since we need to iterate through all of the elements
    */

    for (int i = size; i >= position; i--) { // we are going to iterate down from the last value
        // position = arr[i - 1];
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = inserted;
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

    
    insert(arr, size);
    printf("New array: ");
    display_insert(arr, size);

    return 0;
}