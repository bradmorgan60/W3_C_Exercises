#include <stdio.h>
#include <stdlib.h>

/*
7. Write a program in C to store n elements in an array and print the elements using a pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   
*/

int main() {
    int elements, arr1[25], *ptr;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &elements);

    ptr = (int*)malloc(elements * sizeof(int));
    // For every input from the user, we need to dynamically allocate memory on the heap

    printf("Input %d elements into the list: \n", elements);
    for (int i = 0; i < elements; i++) {
        printf("Element: %d : ", i);
        scanf("%d", ptr + i);
    }

    printf("\n");
    printf("The %d elements you entered are: \n", elements);
    for (int i = 0; i < elements; i++) {
        printf("Element - %d : %d \n", i, *(ptr + i));
    }

    return 0;
}