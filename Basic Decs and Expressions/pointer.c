#include <stdio.h>
#include <stdlib.h>
// a pointer is a memory address, a type of data
// Memory addresses in C are important because we are interacting with the hardware within embdedded systems
// You can write operating systems in C

int main() {

    char ch = 'W', *p;    // *p = &p;
    p = &ch;

    printf("Value of ch -> %c \n", ch);
    printf("Value stored at pointer p -> %c \n", *p);
    printf("Address of variable %c is %x \n", ch, &ch);
    printf("p points hexadecimal address = %x\n", p);
    printf("p points to the full address = %p \n", p);
    


    return 0;

}