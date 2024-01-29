#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int* ptr;

    printf("Enter size of the array: ");
    scanf("%d", &num1);
    printf("Size of array: %d values\n", num1);

    ptr = (int*)malloc(5*sizeof(int)); // allocating memory 

    if (ptr == NULL) {
        printf("Memory not allocated...\n");
        exit(0);
    } else {
        printf("Memory successfully allocated...\n");
         for (int i = 0; i < num1; i++) {
            ptr[i] = i + 1;
         }

         printf("The elements in the array are: %d\n", num1);
         for (int i = 0; i < num1; i++) {
            printf("%d\n", ptr[i]);
         }

    }

    free(ptr);

    return 0;
}