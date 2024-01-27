#include <stdio.h>
#include <stdlib.h>
// a pointer is a memory address, a type of data
// Memory addresses in C are important because we are interacting with the hardware within embdedded systems
// You can write operating systems in C

int main() {

    int a, b, c;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;

    printf("Enter a number below: ");
    scanf("%d", &a);

    printf("Enter a number below: ");
    scanf("%d", &b);

    printf("Enter a number below: ");
    scanf("%d", &c);

    printf("Sum: %d \n", a+b+c);
    printf("%p ----> %d\n", ptr_a, *ptr_a);
    printf("%p ----> %d\n", ptr_b, *ptr_b);
    printf("%p ----> %d\n", ptr_c, *ptr_c);
    printf("%d \n", *ptr_a); // This will show the value contained in the memory address above
    






    // printf("%d \n", a, b, c);


}