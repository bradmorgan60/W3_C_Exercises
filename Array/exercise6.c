/*
6. Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/

#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b) {
    return a == b;
}

void unique(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = i + 1; j < size; j++) {
            if (i != j) 
            {
                if (compare(arr[i], arr[j])) 
                {
                    count++;
                }
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }
    // printf("%d duplicate(s) found\n", count);
}

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size, *arr;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    printf("%d elements will be added to the array\n", size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));
    }

    printf("Unique values: ");
    unique(arr, size);
    // display(arr, size);


    return 0;
}