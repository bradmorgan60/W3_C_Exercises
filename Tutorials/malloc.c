#include <stdio.h>
#include <stdlib.h>
/*
How can we dynamically allocate memory?
Malloc is a function we can use to dynamically allocate memory on the heap

In this exercise, we are dynamically allocating memory based on a user input...cool!

The malloc() function allocates memory and leaves the memory uninitialized, 
The calloc() function allocates memory and initializes all bits to zero.

*/

int main() {

    int num1, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num1);

    ptr = (int*)malloc(num1 * sizeof(int));

   if (ptr == NULL) {
        printf("Unable to allocate memory...");

   } else {
        printf("Enter elements: ");
        for (int i = 0; i < num1; i++) {
            scanf("%d", ptr + i);
            sum += *(ptr + i);
        }

        printf("Sum: %d\n", sum);
   }
   
   free(ptr);


    return 0;
}