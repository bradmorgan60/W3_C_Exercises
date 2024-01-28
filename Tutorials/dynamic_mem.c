#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int* ptr;

   printf("Enter the number of elements here: ");
   scanf("%d", &num1);
   printf("Number of elements entered: %d\n", num1);


    ptr = (int*)malloc(num1 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated...\n");
        // exit(0);
    }
    else {
        printf("Memory successfully allocated...\n");
    

        for (int i = 0; i < num1; i++) {
            ptr[i] = i + 1;
          }

        printf("The elements in the array are: \n");
        for(int i = 0; i < num1; i++) {
            printf("%d\n", ptr[i]);
    }
    }
        return 0;
}