#include <stdio.h>
#include <stdlib.h>

void SwapNums(int *ptr, int size);

void SwapNums(int *ptr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = ptr[i];
        ptr[i] = ptr[size - 1 - i];
        ptr[size - 1 - i] = temp;
    }
}

int main() {
    int size, *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements below: \n");

    ptr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("The value before swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", ptr[i], *(ptr + i));
    }

    SwapNums(ptr, size);

    printf("The value after swapping are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d = %d \n", i + 1, *(ptr + i));
    }

    free(ptr); // use to prevent memory leaks

    return 0;
}
