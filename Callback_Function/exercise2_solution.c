#include <stdio.h>
#include <stdlib.h>

// Callback function fundamentals
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