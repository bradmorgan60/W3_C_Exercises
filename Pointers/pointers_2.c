#include <stdio.h>

/*
2. Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
*/

int main() {

    int num1; // creating an integer value
    int *num2; // creating a pointer variable of num2...the address in memory

    num1 = 5; // assigning the value of 5 to the integer variable

    printf("The first integer is equal to %d\n", num1);
    printf("The address of %d --> %p\n", num1, &num1);

    num2 = &num1; // assigning the address of num1 to the pointer of num2

    printf("\n");
    printf("num2 is now assigned with the address of num1 \n");
    printf("Address of pointer num2 --> %p\n", num2);
    printf("Content of pointer num2 --> %d\n", *num2);

    num1 = 34;

    printf("\n");
    printf("Now assigned num1 as %d\n", num1);
    printf("Address of pointer num2 --> %p\n", num2);
    printf("Content of num2 --> %d\n", *num2);

    return 0;
}