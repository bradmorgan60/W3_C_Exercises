#include <stdio.h>

int main() {
    int terms, x;
    printf("Input number of terms: ");
    scanf("%d", &terms);


    for(x = 1; x <= terms; x++) {
        printf("Number is %d and cube of %d is %d \n", x, x, x*x*x);
    }


    return 0;
}