#include <stdio.h>

int main() {

    int num1 = 0;
    int num2 = 10;

    while (num1 <= 10) {
        printf("%d\n", num1);
        num1++;
    }

    printf("------------\n");

    while (num2 >= 0) {
        printf("%d\n", num2);
        num2--;
    }
    return 0;
}