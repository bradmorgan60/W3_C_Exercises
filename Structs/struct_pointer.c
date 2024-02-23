#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
    char name[100];

} Point;

int main() {
    Point p1;

    p1.x = 3;
    p1.y = 5;
    printf("Sum: %d\n", p1.x + p1.y);
    printf("Now let's work with pointers: \n");
    Point *p2;
    p2 = &p1;

    p2 -> x = 5;
    p2 -> y = 10;

    printf("Sum: %d\n", p2->x + p2->y);
    printf("Now we can use malloc to dynamically allocate space\n");

    Point *p3;
    p3 = malloc(sizeof(Point));
    (*p3).x = 1;
    (*p3).y = 2;

    printf("Sum: %d\n", (*p3).x + (*p3).y);

    return 0;
}