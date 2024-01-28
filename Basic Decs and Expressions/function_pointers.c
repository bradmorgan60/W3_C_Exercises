#include <stdio.h>

void swap(int *p, int *q) {
    int temp_val;
    temp_val = *p;
    *p = *q;
    *q = temp_val;

}

int main()
{
    int x = 45;
    int y = 65;
    printf("x = %d, y = %d \n", x, y);
    swap(&x,&y);
    printf("x = %d, y = %d \n", x, y);
    return 0;
}