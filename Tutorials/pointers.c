#include <stdio.h>

// Pointer -> a memory address, a type of data
// When we create a pointer, we need a physical memory address
// You will store the memory address of a pointer that is already in our program...

// & is used to store the memory address of the variable

int main() {

    int num;
    int * ptr_num = &num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    // scanf("%p", &num);

    printf("The integer entered: %d \n", num);
    printf("The memory address of %d --> %p \n", num, ptr_num);
    printf("Dereferencing the pointer: %d \n", *&num); // could also do *ptr_num to dereference

    double quantity;
    double * ptr_quantity = &quantity;

    // printf("The memory address: %p \n", &num);
    return 0;
}

// Pointer Notes
// In order to understand pointers, you need to understand how memory works
/*
    Memory consists of 2 things
    1. Address 
    2. Value

    A pointer is a memory addres. We can point the variable value to where it lives in memory (the address)
*/