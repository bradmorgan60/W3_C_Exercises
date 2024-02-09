#include <stdio.h>
#include <string.h>

/*
10. Write a program in C to calculate the length of a string using a pointer.
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource                                                                    
is : 10    
*/

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", &str);
    int x = strlen(str);
    int *y;
    y = &x;
    printf("%d is the length of the string\n", *y);


    return 0;
}