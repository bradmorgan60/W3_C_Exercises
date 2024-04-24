/*
. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Array original values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Array reverse order: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");



    return 0;
}