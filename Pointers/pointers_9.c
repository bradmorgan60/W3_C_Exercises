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

int main(){
    int num1, *ptr;

    printf("Enter the number of values required: ");
    scanf("%d", &num1);

    ptr = (int*)malloc(num1 * sizeof(int));
    for (int i = 0; i < num1; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    for (int i = 1; i < num1; i++) {
        if (*ptr < *(ptr + i)) 
        {
            *ptr = *(ptr + i);
        }
        
    }

    printf("Largest element: %d\n", *ptr);

    return 0;
}