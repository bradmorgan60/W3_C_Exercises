// Alternate solution to Pointers, Exercise 17 in W3Resource

/*
17. Write a program in C to print the elements of an array in reverse order.
Test Data :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The elements of array in reverse order are :                                                                 
 element - 5 : 6                                                                                              
 element - 4 : 5                                                                                              
 element - 3 : 4                                                                                              
 element - 2 : 3                                                                                              
 element - 1 : 2  
*/

#include <stdio.h>
// max of 15 numbers...
int main() {
    int size, arr1[15], *ptr;
    printf("Enter the number of elements  to store in the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements below: \n", size);

    ptr = &arr1[0]; // assigning base of array address to pointers

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &arr1[size - 1];
    printf("Elements after reversal: \n");
    for (int i = size; i > 0; i--) {
        printf("Element-%d : %d\n", i, *ptr);
        ptr--;
    }


}
