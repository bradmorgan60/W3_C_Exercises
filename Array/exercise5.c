/*
5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

#include <stdio.h>
#include <stdlib.h>

// how to check for duplicates
void duplicate_check(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
            count++;
            }
        }
    }
    printf("%d duplicate(s) found\n", count);
}

int main() {
    int size, *arr;
    printf("Input number of elements: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i);
        scanf("%d", arr + i);
    }

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    duplicate_check(arr, size);

    return 0;
}