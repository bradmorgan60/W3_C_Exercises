/*
6. Write a program in C program to calculate the average or median of an array of integers using a callback function to perform the calculation.
Expected Output:

Original array elements: 2 5 4 7 1 8 4 6 5 9 10 

Select an option:
1. Calculate average of the said array elements:
2. Calculate median of the said array elements:
Average: 5.545455
*/

#include <stdio.h>
#include <stdlib.h>

typedef double (*my_pointer)(int, int);

void sort(int size, int *arr) {
    int temp;
    for (int i = 0; i < size; i ++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("Sorted array: %d", arr[i]);
    }
}

double mean(int size, int sum) {
    return sum / size;
}
double median(int size, int sum) {
    return sum / 2;
}

double calculate(int size, int *arr, int initial, my_pointer operation) {
    int result = initial;
    for (int i = 0; i < size; i++) {
        result = operation(result, arr[i]);
    }
    return result;
}

int main() {
    int size, *arr;
    int option = 0;
    double mean_result, median_result;

    printf("Enter size of the array: ");
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

    printf("\nSelect an option: \n");
    printf("1. Calculate average of array elements: \n");
    printf("2. Calculate median of array elements: \n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        mean_result = calculate(size, arr, 1, mean);
        printf("Average: %f", mean_result);
        break;
    
    case 2:
        median_result = calculate(size, arr, 1, median);
        printf("Median: %f", median_result);
        break;
    }

    return 0;
}