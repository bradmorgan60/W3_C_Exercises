#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1;

    p1.x = 2;
    p1.y = 4;

    printf("Sum: %d\n", p1.x + p1.y);

    Point *p2; // assign a memory address to a struct
    p2 = &p1;

    p2->x = 5;
    p2->y = 4;

    printf("Sum: %d\n", p1.x + p1.y);

    struct Point *p3;
    p3 = malloc(sizeof(Point));



    return 0;
}