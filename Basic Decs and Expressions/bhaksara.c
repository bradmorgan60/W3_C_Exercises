#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000

Formula:
*/

int main() 
{
    int a;
    int b;
    int c;

    printf("Enter integer A: ");
    scanf("%d", &a);

    printf("Enter integer B: ");
    scanf("%d", &b);

    printf("Enter integer C: ");
    scanf("%d", &c);

    // float pos_bhaskara, neg_bhaskara;
    double x, y, pr1;

    // pos_bhaksara = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    // neg_bhaksara = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    pr1 = (b*b - 4*a*c); // discriminant
    x = (-b + pr1) / (2*a);
    y = (-b - pr1) / (2*a);

    if(a != 0 && pr1 > 0) {
        // double x, y;
        pr1 = sqrt(pr1);
        x = (-b + pr1) / (2*a);
        y = (-b - pr1) / (2*a);

        printf("Root 1 : %.5lf \n", x);
        printf("Root 2 : %.5lf \n", y);

    }
    else {
        printf("Impossible to find root...");
    }

//    printf("%.5f \n", pos_bhaskara);
//    printf("%.5f \n", neg_bhaskara);

    return 0;
}
