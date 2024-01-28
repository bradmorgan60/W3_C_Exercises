#include <stdio.h>

// int main() {

//     int num1, num2;

//     printf("Enter your first number: ");
//     scanf("%d", &num1);

//     printf("Enter your second number: ");
//     scanf("%d", &num2);

//     if (num1 == num2)
//     {
//         printf("%d and %d are equal...", num1, num2);
//     }
//     else printf("%d and %d are not equal...", num1, num2);
    
//     return 0;
// }

// int main() {

//     int num1;

//     printf("Enter an integer: ");
//     scanf("%d", &num1);

//     if (num1 % 2 == 0)
//     {
//         printf("%d is even \n", num1);
//     } else printf("%d is odd \n", num1);
    

//     return 0;
// }

/*
9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
2|1
3|4
*/

// int main() {

//     int num1, num2;

//     printf("Enter the first integer: ");
//     scanf("%d", &num1);

//     printf("Enter the second integer: ");
//     scanf("%d", &num2);

//     if (num1 > 0 && num2 > 0)
//     {
//         printf("These are in Quadrant 1 \n");
//     }
//     else if (num1 > 0 && num2 < 0)
//     {
//         printf("Numbers are in Quadrant 4 \n");
//     }
//     else if (num1 < 0 && num2 > 0) 
//     {
//         printf("Numbers are in Quadrant 2 \n");
//     }
//     else printf("Numbers are in Qudrant 3 \n");
    
//     return 0;
// }

int main() {
    int num1, num2, num3;
    printf("Welcome this program. Enter the sides of your triangle.\n");
    printf("Enter side 1: ");
    scanf("%d", &num1);

    printf("Enter side 2: ");
    scanf("%d", &num2);

    printf("Enter side 3: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Equilateral Triangle");
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Isoceles Triangle");
    }
    else printf("Scalene triangle");


    return 0;
}