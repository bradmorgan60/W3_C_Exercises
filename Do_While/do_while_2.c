#include <stdio.h>

/*
2. Write a C program that prompts the user to input a series of integers until the user 
stops by entering 0 using a do-while loop. Calculate and print the sum of all positive 
integers entered.
*/

int main() {
    int num1, sum = 0, product;

    printf("Enter any positive integer.\n");
    printf("To stop the program, press 0\n");

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &num1);

        if (num1 == 0)
        {
            break;
        } else if (num1 < 0) {
            printf("Negative numbers are not considered...ignored \n");
        } else {
            sum += num1;
        }

    } while (num1 != 0);

    printf("Sum: %d\n", sum);
    
    
    return 0;
}