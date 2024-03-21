/*
3. Write a C program to calculate the sum or product of an array of integers using a callback function.
Expected Output:

Original array elements: 10 20 30 40 50 60 
Sum: 210
Product: 720,000,000
*/

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}

// void my_pointer(int *(math)(int)) {
//     int size, *arr;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     arr = calloc(size, sizeof(int));

//     // User input the values for the arrays
//     for (int i = 0; i < size; i++) {
//         printf("Element-%d: ", i + 1);
//         scanf("%d", (arr + i));
//     }

//     // Display the array which was input by the user...
//     // This array will be used for our calculations
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr + i));
//     }
// }

typedef int (* operation_func_t)(int, int);
int calculate(int * arr, size_t n, int initial_value, operation_func_t operation) {
    int result = initial_value;
    for (size_t i = 0; i < n; i++) {
        result = operation(result, arr[i]);  // callback function used here
    }
    return result;
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int sum, product;

    printf("Original array:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }





    return 0;
}