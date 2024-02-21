#include <stdio.h>
#include <stdlib.h>

void Swap(int, int*);

int main() {
    int size, *arr;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    printf("Input the %d elements in the array: \n", size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", (arr + i));

    }
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d \n", i + 1, *(arr + i));
    }

    Swap(size, arr);
    printf("-----------\n");
    printf("Result after reversing\n");

    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d \n", i + 1, *(arr + i));
    }

    return 0;
}

void Swap(int size, int *arr) {
    int temp;
    for (int i = 0; i < size / 2; i++) { // divide the array by 2 so we can 
            temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
}
}