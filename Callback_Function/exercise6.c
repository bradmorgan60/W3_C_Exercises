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

typedef double (*my_pointer)(int size, int *arr);

// The median requires us to sort the array
void sort(int size, int *arr) { 
    int temp;
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
}
// Mean --> Sum / # of values
double mean(int size, int *arr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (double) sum / size;
}

// median may differ based on the size of the array. if odd, pick middle value of sorted array
// if even, add the two middle together, then divide by 2. sorted array still applies
double median(int size, int *arr) {
    double median;
    sort(size, arr);

    if (size % 2 == 0) {
        median = (double)(arr[size / 2] + (arr[(size / 2 - 1)])) / 2;
    } else {
        median = arr[size / 2];
    }

    return median;
}

double calculate(int size, int *arr, my_pointer operator) {
    return operator(size, arr);
}

int main() {
    // begin with asking user to input the size of the array
    int size, *arr;
    printf("Enter the size of the array: (# of integers): ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Number-%d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    // sort(size, arr);

    printf("\n");

    int option;
    printf("Select an option: \n");
    printf("1. Calculate average of said array elements: \n");
    printf("2. Calculate median of said array elements: \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Average: %lf \n", calculate(size, arr, mean));
        break;
    case 2:
        printf("\nMedian: %lf\n", calculate(size, arr, median));
        break;
    
    default:
        printf("Invalid selection...\n");
        break;
    }
    
    return 0;
}