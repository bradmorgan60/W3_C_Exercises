/*
6. Write a program in C program to calculate the average or median of an array of integers using a callback function to perform the calculation.
Expected Output:

Original array elements: 2 5 4 7 1 8 4 6 5 9 10 

Select an option:
1. Calculate average of the said array elements:
2. Calculate median of the said array elements:
Average: 5.545455
*/

/* 
In order to find the median, we need to sort the array first. 
If the array is odd, we just pick the middle value
if the array is of even length, we need to add the two middle values, then divide by 2
*/

#include <stdio.h>
#include <stdlib.h>

typedef int (* my_pointer)(int, int);

void sort(int size, int *arr) {
    int temp;
    printf("\nSorted array: ");
    for (int i = 0; i < size; i ++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", *(arr + i));
    }
}

double mean(int size, int *arr) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    return (double) sum / size;
}
double median(int size, int *arr) {
    sort(size, arr);
    double median;
   if (size % 2 == 0) {
        median = (double) (arr[size / 2] + arr[(size / 2) - 1]) / 2;
   }
   else {
        median = arr[size / 2];
   }

    return median;
}

double calculate(int size, int *arr, my_pointer operation) {
    return operation(size, arr);
}

int main() {
    int size, *arr;
    int option = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Number-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("--------------\n");

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    sort(size, arr);

    printf("\n");

    printf("\nSelect an option: \n");
    printf("1. Calculate average of array elements: \n");
    printf("2. Calculate median of array elements: \n");
    printf("Option: ");
    scanf("%d", &option);

    double result;

    switch (option)
    {
    case 1:
        result = calculate(size, arr, mean);
        printf("Average: %f", result);
        break;
    
    case 2:
        result = calculate(size, arr, median);
        printf("Median: %f", result);
        break;
    
    default: 
        printf("Invalid option...\n");
        break;
    }

    return 0;
}