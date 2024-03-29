#include <stdio.h>
#include <string.h>

/*
13. Write a program in C to count the number of vowels and consonants in a string using a pointer.
Test Data :
Input a string: string
Expected Output :

Number of vowels : 1                                                                                     
Number of constant : 5

Vowels: A, E, I, O, U
Consonants: Not vowels
*/

int main() {
    char string[100], *ptr;
    int ctrV, ctrC;

    printf("Count the number of vowels and consonants in the string! \n");
    printf("Input a string: ");
    // scanf("%c", &string);
    fgets(string, sizeof(string), stdin); 
    // stdin -> I/O stream, OS-level abstraction that allows data to be read
    // fgets is used for strings, scanf is used for numbers (i.e integers, floats, doubles)

    ptr = string;

    ctrV = ctrC = 0;
    // Whenever you have to count something, always think of initializing variables at 0 for your counters

    // Learned that \0 marks the end of an array...is this only for a string
    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
                ctrV++;
            } else {
                ctrC++;
            }
        ptr++;

    }

    printf("Number of vowels: %d\n", ctrV);
    printf("Number of consonants: %d\n", ctrC - 1);



    return 0;
}