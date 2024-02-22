/*
C programming exercises_ Pointer - w3resource
10. Write a program in C to calculate the length of a string using a pointer.
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource                                                                    
is : 10    
*/

#include <stdio.h>
int StringLength(char*);

int main() {
    char string[100];
    int length;

    printf("Program will ask for a string and display the length of that string\n");
    printf("Enter the string below: ");
    fgets(string, sizeof(string), stdin);

    length = StringLength(string);

    printf("\nThe length of '%s' : %d\n", string, length - 1);

    return 0;
}

int StringLength(char* character) {
    int counter = 0;
    while (*character != '\0')
    {
        counter++;
        character++;
    }
    return counter;
    
}