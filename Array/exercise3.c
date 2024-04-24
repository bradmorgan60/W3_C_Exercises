/*
3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *arr, sum = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);
    printf("Input %d elements in the array: \n", size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", (arr + i));
    }

    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    printf("Sum: %d\n", sum);


    return 0;
}