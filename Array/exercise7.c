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

int compare(int a, int b) {
    return a > b;
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

int display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    return *arr;
    // printf("\n");

}

int main() {
    int size, *arr;

    arr = calloc(size, sizeof(int));
    printf("Program will merge two arrays together in descending order\n");
    printf("\n-------------------------------------\n");
    printf("Input number of data elements to be stored in first array: ");
    scanf("%d", &size);
    printf("%d elements will be entered\n", size);

    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));
    }

    printf("First array: ");
    int arr1 = display(arr, size);

    printf("\n-------------------------------------\n");
    printf("Input number of data elements to be stored in second array: ");
    scanf("%d", &size);
    printf("%d elements will be entered\n", size);

    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));
    }

    printf("Second array: ");
    int arr2 = display(arr, size);

    int merged_array = arr1 + arr2;

    printf("Merged array: %d", merged_array);

    free(arr);

    return 0;
}