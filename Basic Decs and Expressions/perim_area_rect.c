#include <stdio.h>

/*
   Write a C program to compute the perimeter and area 
   of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches 
*/

int main() {
    printf("     5    \n"); 
    printf(" - - - - -\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         | 7\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("- - - - - -\n");


    // printf("What is the perimeter of the rectangle?\n");
    // printf("What is the area of the rectangle?\n");

    int length = 7;
    int width = 5;

    int area = length * width;
    // int perimeter = height + height + width + width;
    int perimeter = 2*(length + width);

    printf("The perimeter of the rectangle is: %d \n", perimeter);
    printf("The area of the rectangle is: %d \n", area);    


    return 0;
    // This exercise is completed
}
