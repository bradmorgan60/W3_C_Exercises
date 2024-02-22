/*
9. Write a program in C to find the largest element using Dynamic Memory Allocation.
Test Data :
Input total number of elements(1 to 100): 5

Number 1: 5
Number 2: 7
Number 3: 2
Number 4: 9
Number 5: 8
Expected Output :

The Largest element is :  9.00 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *arr;
    printf("Program will find the largest element in the array.\n");
    printf("Input the number of elements: ");
    scanf("%d", &size);

    printf("Enter the %d elements below: \n", size);
    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i+1);
        scanf("%d", (arr + i));

    }

    // Requirement is to find the largest number in the array
    for (int i = 1; i < size; i++) {
        if (*arr < *(arr + i))
        {
            *arr = *(arr + i);
    }
    
}
    printf("The largest element: %d\n", *arr);
    return 0;
}
