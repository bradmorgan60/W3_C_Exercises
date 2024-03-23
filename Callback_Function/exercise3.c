/*
3. Write a C program to calculate the sum or product of an array of integers using a callback function.
Expected Output:

Original array elements: 10 20 30 40 50 60 
Sum: 210
Product: 720000000
*/

#include <stdio.h>
#include <stdlib.h>

typedef int (*my_pointer)(int, int); // function pointer returns an integer, accepts 2 integers

int sum(int a, int b) {
    return a + b;
}

int product(int a, int b) {
    return a * b;
}

int calculate(int size, int *arr, int initial_value, my_pointer operation) { // I forgot to name the pointer here....
    int result = initial_value;
    for (int i = 0; i < size; i++) {
        result = operation(result, arr[i]);    // This was the part I was confused on....
    }
    return result;
}

int main() {
    int size, *arr;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Number-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    int sum_result = calculate(size, arr, 0, sum);
    int prod_result = calculate(size, arr, 1, product);

    printf("Sum: %d\n", sum_result);
    printf("Product: %d\n", prod_result);



    return 0;
}