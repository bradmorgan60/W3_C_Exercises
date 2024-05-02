/*
10. Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/

#include <stdio.h>
#include <stdlib.h>

int even_num(int a, int b) {
    return a % b == 0;
}

int odd_num(int a, int b) {
    return a % b != 0;
}

void compare_even(int *arr, int size) {
    printf("Even numbers: \n");
    
    for (int i = 0; i < size; i++) {
        if (even_num(arr[i], 2)) {
            // printf("Even numbers: ");
            printf("%d ", arr[i]);
        }  
    }
}

void compare_odd(int *arr, int size) {
    printf("Odd numbers: \n");
    for (int i = 0; i < size; i++) {
        if (odd_num(arr[i], 2)) {
            // printf("Even numbers: ");
            printf("%d ", arr[i]);
        }   
    }
}

 

void display(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int *arr, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    display(arr, size);
    compare_even(arr, size);
    printf("\n");
    compare_odd(arr, size);

    return 0;
}