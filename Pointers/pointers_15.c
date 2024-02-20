#include <stdio.h>

int* TestFunction(int*, int*);

int main() {
    int first, second, *result;
    printf("Input the first number: ");
    scanf("%d", &first);

    printf("Input the second number: ");
    scanf("%d", &second);
    result = TestFunction(&first, &second);
    printf("%d is the larger number \n", *result);
    return 0;
    
}

int* TestFunction(int *x, int *y) {
    if (*x > *y)
    {
        return x;
    } else {
        return y;
    }
    
}