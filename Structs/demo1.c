#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 3

struct Heap {
    int array[MAX_HEAP_SIZE];
    int x, y;
    int size;
};

int main() {
    struct Heap heap;
    heap.x = 30;
    heap.size = 0;

    printf("Integer: %d\n", heap.x);
    printf("Address: %p\n", &heap.x);

    heap.y = 35;
    printf("Integer: %d\n", heap.y);
    printf("Address: %p\n", &heap.y);
    return 0;
}