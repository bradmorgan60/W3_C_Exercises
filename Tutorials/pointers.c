/*
Pointers Tutorial
*/

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    int *ptr = &age;

    printf("Memory address of %d: %p\n", age, ptr);

    printf("Repeating the process\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Memory address of %d: %p\n", age, ptr);

    
    return 0;
}