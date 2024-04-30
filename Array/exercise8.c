/*
8. Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void frequency(int *arr, int size) {
    int freq[100], count;
    for (int i = 0; i < size; i++) {
        count = 1; // if the number appears, begin at 1
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;  // if a number matches, increment by 1
                freq[j] = 0; // duplicate element frequency marked as 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }

        for (int i = 0; i < size; i++) {
            if (freq[i] != 0) {
                printf("%d appears %d times\n", arr[i], freq[i]);
            }
        }
        // free(arr);
    }
    printf("Memory address: %p\n", arr);
}


int main() {
    int size, *arr, count, freq[100];
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));  // 4 bytes per int

    for (int i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", (arr + i));
        freq[i] = -1; // correction
    }

    // display(arr, size);
    frequency(arr, size);
    display(arr, size);
    free(arr);

    return 0;
}