#include <stdio.h>
#include <stdlib.h>

// How can we dynamically allocate memory?
// Malloc is a function we can use to dynamically allocate memory on the heap

// In this exercise, we are dynamically allocating memory based on a user input...cool!

int main() {

    int num1, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num1);

    ptr = (int*)malloc(num1 * sizeof(int)); // int = 4 bytes

    if (ptr == NULL) {
        printf("Unabale to allocate memory...");

    } else {
        for (int i = 0; i < num1; i++) {
            // sum = sum + i;
            scanf("%d", ptr + i); // confused by logic here
            sum += *(ptr + i); // confused by logic here
        }

        printf("Sum: %d \n", sum);
    }

    free(ptr);


    return 0;
}