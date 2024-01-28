#include <stdio.h> /* Standard input/output library, which contains functions for reading and writing data to and from the console */
#include <stdlib.h>
#define MAX 255

int main(void) /* Main funciton of the program, where execution begins */
{
    char name[MAX];
    char * ptr_name;

    char DOB[MAX];
    char * ptr_DOB;

    char phone[MAX];
    char * ptr_phone;

    printf("Enter your name: ");
    ptr_name = fgets(name, MAX, stdin);
    // scanf("%s", ptr_name);

    printf("Enter your date of birth: ");
    ptr_DOB = fgets(DOB, MAX, stdin);
    // scanf("%s", &DOB);

    printf("Enter your phone number: ");
    ptr_phone = fgets(phone, MAX, stdin);
    // scanf("%s", &phone);

    printf("-------------\n");

    printf("Name: %s\n", ptr_name);
    printf("DOB : %s\n", ptr_DOB);
    printf("Mobile : %s\n", ptr_phone);

    return 0; /* 0 = successful execution, 1 = failed execution */
}