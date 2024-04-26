// playground for problems
#include <stdio.h>


int main() {
    int arr1size = 5, arr2size = 5, mergedarray;

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};

    mergedarray = arr1size + arr2size;

    int c[mergedarray];

    // copying contents from array 1 into new array
    for (int i = 0; i < arr1size; i++) {
        c[i] = arr1[i];
    }

    for (int i = 0, j = arr1size;
            j < mergedarray&& i < arr1size;
            i++, j++) {
                c[j] = arr2[i];
            }
    
    for (int i = 0; i < mergedarray; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}