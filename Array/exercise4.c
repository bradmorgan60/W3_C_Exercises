/*
4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, arr1[100], arr2[200];

    printf("Enter size of array: ");
    scanf("%d", &size);

    // arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];    // do not reverse this (arr1[i] = arr2[i]), or else the program will spit out all 0s. not sure why that is
    }

    printf("First array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

     printf("Copy of First array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}