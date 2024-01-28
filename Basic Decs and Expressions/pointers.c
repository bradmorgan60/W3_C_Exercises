#include <stdio.h>

/*
Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
*/

int main() {

    int num1 = 3;
    char char1 = 'A';
    float dec1 = 3.77;

    printf("Printing the initalized values...\n");
    printf("num1 = %d \n", num1);
    printf("char1 = %c \n", char1);
    printf("dec1 =  %f \n", dec1);
    printf("----------------------------------- \n");

    int * p_num1 = &num1;
    char * p_char1 = &char1;
    float * p_dec1 = &dec1;

    printf("Pointers - Demonstrate the use of & and *\n");
    printf("----------------------------------- \n");
    printf("The use of &: %p \n", &num1);
    printf("The use of *: %p \n", p_num1);
    printf("\n");

    printf("The use of &: %p \n", &char1);
    printf("The use of *: %p \n", p_char1);
    printf("\n");
    
    printf("The use of &: %p \n", &dec1);
    printf("The use of *: %p \n", p_dec1);
    printf("\n");

    printf("Using & and * operator: \n");
    printf("----------------------------------- \n");

    printf("The use of &: %d \n", *(&num1));
    printf("The use of *: %d \n", *(p_num1));
    printf("\n");

    printf("The use of &: %c \n", *(&char1));
    printf("The use of *: %c \n", *(p_char1));
    printf("\n");
    
    printf("The use of &: %f \n", *(&dec1));
    printf("The use of *: %f \n", *(p_dec1));
    printf("\n");


    return 0;
}