#include <stdio.h>
#include <stdlib.h>
/*
How can we dynamically allocate memory?
Malloc is a function we can use to dynamically allocate memory on the heap

In this exercise, we are dynamically allocating memory based on a user input...cool!

The malloc() function allocates memory and leaves the memory uninitialized, 
The calloc() function allocates memory and initializes all bits to zero.

*/

#include <stdio.h>
#include <stdlib.h>

void display(int size, int *arr) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {

    int size, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*) calloc(size, sizeof(int));

    if (arr == NULL) {
        printf("Memory cannot be allocated\n");
    }

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));
    }

    display(size, arr);

    free(arr);

    return 0;
}