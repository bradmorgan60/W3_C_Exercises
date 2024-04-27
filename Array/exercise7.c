/*
7. Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int compare(int a, int b) {
    return a < b;
}

void sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

}

int main() {
    int size1, size2, full_size;
    int *arr1, *arr2, merged_array[100];
    int i, j, k;

    printf("Program will merge two arrays together in descending order\n");
    printf("\n-------------------------------------\n");
    printf("Input number of data elements to be stored in first array: ");
    scanf("%d", &size1);
    printf("%d elements will be entered\n", size1);

    arr1 = calloc(size1, sizeof(int));

    for (i = 0; i < size1; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr1 + i));
    }

    printf("First array: ");
    display(arr1, size1);


    printf("\n-------------------------------------\n");
    printf("Input number of data elements to be stored in second array: ");
    scanf("%d", &size2);
    printf("%d elements will be entered\n", size2);

    arr2 = calloc(size2, sizeof(int));
    for (i = 0; i < size2; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr2 + i));
    }

    printf("Second array: ");
    display(arr2, size2);

    // free(arr2);

    full_size = size1 + size2;

    // merged_array[full_size];

    for (i = 0; i < size1; i++) {
        merged_array[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        merged_array[i] = arr2[j];
        i++;
    }

    // function exists for displaying the full array
    // for (i = 0; i < full_size; i++) {
    //     printf("%d ", merged_array[i]);
    // }
    printf("\n---------------------\n");
    printf("Merged array: ");
    display(merged_array, full_size);

    sort(merged_array, full_size);

    printf("Sorted array: ");
    display(merged_array, full_size);

    return 0;
}