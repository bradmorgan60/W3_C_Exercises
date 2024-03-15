#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x, y;

    printf("Pointers and swap...\n");
    x = 10;
    y = 5;

    printf("x: %d --> %p\n", x, &x);
    printf("y: %d --> %p\n", y, &y);

    printf("\n");
    x = 10;
    y = 5;


    swap(&x, &y);

    printf("x: %d --> %p\n", x, &x);
    printf("y: %d --> %p\n", y, &y);

    // printf("&x: %p\n", &x);
    // printf("&y: %p\n", &y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}