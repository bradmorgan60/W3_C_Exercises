#include <stdio.h>
#include <stdlib.h>


void swap(int *n1, int *n2, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; i < size; i++) {
            int temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
    }

}

void UserInput(int size, int *arr) {
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Element-%d : ", i + 1);
        scanf("%d", (arr + i));
    }

    for (int i = 0; i < size; i++) {
        printf("\n");
        printf("Element-%d: %d\n", (i + 1), *(arr + i));
    }
}

int main() {
    int size, *arr;
    
    UserInput(size, arr);

    return 0;
}