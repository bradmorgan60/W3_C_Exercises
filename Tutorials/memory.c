/*
Tutorial on Dynamic Memory Allocation

Memory is allocated to all variables in a program automatically durng compile time
There are times when memory needs to be reallocated due to resize the size of an array
Memory must be allocated during runtime

2 ways to allocate memory in C:
1. Static Memory Allocation
2. Dynamic Memory Allocation
        - Memory is allocated during runtime
        - C provides several functions to allocate memory dynamically
        - Functions:
            - MALLOC()
                - first checks the free available memory on the heap and allocates the block of memory size requested
                - 
            CALLOC()
            - REALLOC()
            - FREE()

*/

#include <stdio.h>
#include <stdlib.h>

void MY_MALLOC() {
    /*
    first checks the free available memory on the heap
    allcates the block of memory size requested

    if there is not enough memory space to allocate, malloc() function
    returns a zero or null value

    constantly checks if the contiguous memory is available on the heap

    the pointer value will hold the address of the first element on the block

    */

    int num1;
    // ptr_variable = *malloc(memory_size);

    int * p_num1 = &num1;

    p_num1 = (int *)malloc(10*sizeof(int));

}

void MY_CALLOC() {
    /*
    similar to malloc, but accepts 2 parameters
    allocates multiple blocks of memory of the same size
    holds value of zero by default

    ptr_variable = *calloc(number_element, memory_size);
    */
    int num1;
    int *p_num1 = &num1;

    p_num1 = (int *)calloc(10, sizeof(int));

}

void MY_REALLOC() {
    /*
        ptr_variable = *realloc(pointer_variable, memory_size)
    
    
        use case: We need to change the size of an array
        This is relevant with the to-do list app where new tasks
        are being added, which constantly changes the size

        new memory needed to be allocated to the program dynamically when
        the user added a task.
        Realloc was used in this case

    */

   int num1;
   int * p_num1 = &num1;

   p_num1 = (int *)realloc(p_num1, 5*sizeof(int));

}

void MY_FREE() {
    /*
    free(pointer_variable);

    */
}

int main() {
    int num;
    int *ptr_num = &num;

    ptr_num = (int*)calloc(1000, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", ptr_num);

    MY_CALLOC();
    MY_MALLOC();
    MY_REALLOC();

    // if(ptr_num) == 0) {
    //     printf("memory is unavailable...");
    //     return 1;
    // }
    // *ptr = 10;
    printf("%d \n", *ptr_num);
    free(ptr_num);


    return 0;
}