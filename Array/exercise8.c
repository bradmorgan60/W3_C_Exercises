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
    // i is the first instance, j is the duplicate
    printf("Frequency of each element: \n");
    int i, j;
    int count, freq[100];
    // freq[i] = -1;
    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            // freq[i] = -1;
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
                // freq[i] = count;
            }
            
            if (freq[i] != 0) {
                freq[i] = count;
                // printf("%d occurs %d times\n", arr[i], freq[i]);
            }
            // printf("%d occurs %d times\n", arr[i], freq[j]);
        }
    }

     for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            // freq[i] = -1;
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    
}

int main() {
    int size, *arr, freq[100];
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("element-%d: ", i + 1);
        scanf("%d", (arr + i));
        freq[i] = -1; // this is what prevented the frequency count...I did not initialize it here
    }
    printf("\n");

    display(arr, size);
    frequency(arr, size);


    return 0;
}