#include <stdio.h>  
#include <stdlib.h>

struct Heap {
    int *ptr, num1, i, sum;
};


int main() {

    int *ptr, num1, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num1);

    ptr = (int*) malloc(num1 * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL)
    {
        printf("Memory cannot be allocated...");
        exit(0);
        } 

    printf("Enter elements: ");
    for (int i = 0; i < num1; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);

    }

    
    printf("Sum: %d\n", sum);
    free(ptr);


    return 0;
}