#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = 10;

    do
    {
        printf("%d ", num1);
        num1++;

    } while (num1 <= 10);

    printf("\n--------------\n");

    do
    {
        printf("%d ", num2);
        num2--;
    } while (num2 > 0);
    
    



    return 0;
}