#include <stdio.h>
#include <math.h>
#define PI 3.1415626535

/*
Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/

int main() {
    // Area of circle (pi)(radius)^2
    // Perimeter of circle 2*(pi)*(r)

    // The code below will allow you to choose the radius of the circle
    // Then, the program will calculate both the perimeter and the area of this circle
    int radius;
    int * ptr_radius;
    printf("Type in the integer for the radius of your circle: ");
    scanf("%d", &radius);

    float area, perimeter;
    // radius = 6;

    // Area of a circle
    area = PI * radius * radius;
    printf("The area of the circle: %f inches \n", area);


    // Perimeter of a circle
    perimeter = 2 * PI * radius;
    printf("The perimeter of the circle: %f inches", perimeter);

    return 0;
}