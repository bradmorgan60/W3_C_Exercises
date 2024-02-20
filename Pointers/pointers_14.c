#include <stdio.h>
#include <stdlib.h>

void Sorting(int, int*);

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
