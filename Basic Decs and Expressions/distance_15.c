#include <stdio.h>
#include <math.h>

/*
15. Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

int main() {
    int x1, x2, y1, y2;

    printf("Enter the first x value: ");
    scanf("%d", &x1);

    printf("Enter the first y value: ");
    scanf("%d", &y1);

    printf("Enter the second x value: ");
    scanf("%d", &x2);

    printf("Enter the second y value: ");
    scanf("%d", &y2);


    double result;

    result = (y2 - y1)*(y2-y1) + (x2 - x1)*(x2 - x1);

    printf("Distance: %lf\n", sqrt(result));

    

    return 0;
}