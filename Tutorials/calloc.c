#include <stdio.h>
#include <stdlib.h>

/*
The malloc() function allocates memory and leaves the memory uninitialized, 
The calloc() function allocates memory and initializes all bits to zero.


*/

int main() {

    int num1, sum = 0, *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &num1);

    ptr = (int*)calloc(num1, sizeof(int));

    if (ptr == NULL) {
        printf("Error. Memory not allocated...");
    } else {
        printf("Enter elements: ");
        for (int i = 0; i < num1; i++) {
            scanf("%d", ptr + i);
            sum += *(ptr + i);
            
        }
        printf("Sum: %d", sum);
        free(ptr);
    }
    
    return 0;
}