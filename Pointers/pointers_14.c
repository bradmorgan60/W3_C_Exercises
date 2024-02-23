#include <stdio.h>
#include <stdlib.h>

void Sorting(int, int*);
void SumArray(int, int*);
void MultArray(int, int*);

int main() {
    int size, tmp, *arr;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    printf("Input the %d elements in the array: \n", size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("\n");
    printf("The %d elements in the array after sorting: \n", size);
    Sorting(size, arr);

    for (int i = 0; i < size; i++) {
        printf("Element-%d : %d\n", i + 1, *(arr + i));
    }
    SumArray(size, arr);
    MultArray(size, arr);
    free(arr);

    return 0;
}

void Sorting(int size, int *arr) {
    int tmp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j))
            {
                tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
                /* 
                This is a swap algorithm used to compare the values in the array.  
                The sort will be in ascending order, so we will work from smallest to largest
                If the value on the left > right, swap
                If value on left < right, do not swap
                This will be iterated through the entire array.

                index i checks for the value on the left
                index j checks for the value directly to the right of index i
                */
            }

        }
    }

}
/* 
sorting in C is interesting...may need to think about this
Update:
We are using a nested For Loop to solve this problem. This is because we are comparing

Index i :  0  1   2   3   4
Values i: 15 25  45  82  89

*/

void SumArray(int size, int *arr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    printf("Sum: %d\n", sum);
}

void MultArray(int size, int *arr) {
    int product = 1; // cannot multiply by 0, must initialize at 1
    for (int i = 0; i < size; i++) {
        product *= *(arr + i);
    }
    printf("Product: %d\n", product);
}
