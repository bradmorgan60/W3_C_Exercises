/*
1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *arr;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));

    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}