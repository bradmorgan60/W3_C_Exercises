#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, *ptr, sum = 0;

    printf("Demo on malloc, dynamic memory allocation\n");

    printf("Enter an integer: ");
    scanf("%d", &num1);

    ptr = (int*)malloc(num1 * sizeof(int));

    if (ptr == NULL) {
        printf("Unable to allocate memory...");
    } else {
        printf("Enter the number of elements: ");
        for (int i = 0; i < num1; i++) {
            scanf("%d", ptr + i); // for every integer added, we need to allocate memory for that
            sum += *(ptr + i);
        }
        printf("Sum: %d\n", sum);
    }
    free(ptr);

    return 0;
}