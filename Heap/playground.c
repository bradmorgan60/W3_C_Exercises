#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP_SIZE 100

void displayArray();

void UserInput(int size, int *arr) {
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Cool, now enter those %d elements: \n", size);

    arr = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Element-%d: ", i+1);
        scanf("%d", (arr + i));
    }

    printf("\n-------\n");

    for (int i = 0; i < size; i++) {
        printf("Element-%d: %d\n", i+1, *(arr + i));
    }

}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int size, *arr;
    // int RandomArray[] = {2,3,4,6,1,2,3};
    // int RandomSize = sizeof(RandomArray) / sizeof(RandomArray[0]);

    UserInput(size, arr);

    printf("Random Array: ");
    // displayArray(arr, size);

    return 0;
}