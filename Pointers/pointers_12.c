#include <stdio.h>
/*
12. Write a program in C to find the factorial of a given number using pointers.
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120 
*/

void FindFactorial(int, int*);

int main() {
    int num, fact;
    printf("Factorial exercise using call by reference and pointers...\n");
    printf("Enter the integer: ");
    scanf("%d", &num);

    FindFactorial(num, &fact);

    printf("Factorial of %d = %d \n", num, fact);


    return 0;
}

void FindFactorial(int num, int *fact) {
    *fact = 1;
    for (int i = 1; i <= num; i++) {
        *fact = *fact * i;
    }

}

