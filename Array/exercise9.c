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

void display(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void display_max(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        if (max_compare(arr[i], arr[0])) {
            printf("Max: %d\n", arr[i]);
        }
        if (min_compare(arr[i], arr[0])) {
            printf("Min: %d\n", arr[i]);
        }

    }
   
}

int main() {
    int size, *arr; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", (arr + i));
    }


    display(arr, size);
    display_max(arr, size);

    

    return 0;
}