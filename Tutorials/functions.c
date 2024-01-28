#include <stdio.h>
#include <stdlib.h>

/* 
/Users/bradmorgan60/onedrive/Computer Engineering/C Programming/W3 Exercises/Basic Decs and Expressions
*/

int x, y;
int * p_x = &x, * p_y = &y;

void Hello() {
    printf("Hello, user.\n");
}

int mult_add(x, y) {
    printf("Enter the first number: ");
    scanf("%d", p_x);

    printf("Enter the second number: ");
    scanf("%d", p_y);


    int product = (*p_x) * (*p_y);
    int sum = (*p_x) + (*p_y);


    printf("Product: %d \n", product);
    printf("Sum: %d \n", sum);
    return product;
    return sum;
}



int main()
{
    Hello();
    mult_add(*p_x, *p_y);
    return 0;
}




