/*
4. Write a C program to check if a string (case-sensitive) is a palindrome or not using a callback function.
Expected Output:

String: Madam
Madam is not a palindrome (case-sensitive).
Madam is a palindrome (case-insensitive).

String: aba
aba is a palindrome (case-sensitive).
aba is a palindrome (case-insensitive).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char (*palindrome)(char);

char yes_palindrome() {
    
    return 0;
}

char no_palindrome() {
    return 0;
}

char determine() {
    return 0;
}


int main(void) {
    char user_string;
    int *arr;

    printf("Enter a string: ");
    scanf("%c", &user_string);


    return 0;
}