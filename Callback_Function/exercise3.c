/*
3. Write a C program to calculate the sum or product of an array of integers using a callback function.
Expected Output:

Original array elements: 10 20 30 40 50 60 
Sum: 210
Product: 720000000
*/

#include <stdio.h>
#include <stdlib.h>

typedef int (*my_pointer)(int, int); // accepts 2 integers, returns an integer

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int result(int *arr, int size, int initial_value, my_pointer operation) {
    int result = initial_value;
    for (int i = 0; i < size; i++) {
        result = operation(result, arr[i]);
    }

    return result;

}

int main() {
    int size, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));

    // User will specify their own values in the array:
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i+1);
        scanf("%d", arr + i);
    }

    // Print the original array specified by the user
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    printf("---- Mathematical operations ----");
    // Calling our functions
    int sum_result = result(arr, size, 0, add);
    printf("\nSum: %d\n", sum_result);

    int product_result = result(arr, size, 1, multiply);
    printf("Product: %d\n", product_result);

    return 0;
}