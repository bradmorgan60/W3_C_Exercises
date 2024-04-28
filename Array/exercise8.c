/*
8. Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size, *arr;
    int count = 0;

    printf("Enter the number of integers for the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", (arr + i));
    }

    printf("Array: ");
    display(arr, size);


    for (int i = 0; i < size; i++) {
        int counter = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                counter++;
                
            }
        }
    }

    return 0;
}