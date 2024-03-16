#include <stdio.h>
#include <stdlib.h>


void Apple() {
    printf("Apple");
}

void Banana(void (*ptr)()) {
    ptr();
}

int main() {
    Banana(Apple);
    return 0;
}