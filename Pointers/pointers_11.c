#include <stdio.h>
#include <stdlib.h>

void SwapNums(int *ptr, int size);

void SwapNums(int *ptr, int size) {
    for (int i = 0; i < size / 2; i++) { // the reason to divide by 2 is to find the midpoint of the array
        int temp = ptr[i];
        ptr[i] = ptr[size - 1 - i];
        ptr[size - 1 - i] = temp;
    }
}
/*
Logic for swap...
Index:  0  1  2  3  4
Array: [1, 2, 3, 4, 5]

ptr[0] = temp;
ptr[0] = ptr[5 - 1 - 0] (ptr[4])
ptr[4] = temp;

*/

int main() {
    int size, *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements below: \n", size);

    ptr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("The value before swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", i + 1, *(ptr + i));
    }

    SwapNums(ptr, size);

    printf("The value after swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", i + 1, *(ptr + i));
    }

    free(ptr); // use to prevent memory leaks

    return 0;
}