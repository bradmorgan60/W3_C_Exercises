#include <stdio.h>
#include <stdlib.h>

// typedef double (*my_pointer)(int, int);

int add(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

double mean(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum / size;
}

// double calculate(int *arr, int size, my_pointer operator) {
//     return operator(*arr, size);
// }

int main() {
    // int num1, num2;
    int size, *arr;
    double result;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Num-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    printf("Sum: %d", add);   // Code works

    printf("\n");

    // mean_result = calculate(arr, size, mean);
    printf("Mean: %f ", mean); // Incompatibility error

    return 0;
}