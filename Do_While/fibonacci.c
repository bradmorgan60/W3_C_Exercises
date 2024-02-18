#include <stdio.h>

int main(void) {
    printf("This is a fibonacci exercise...\n");
    printf("Example: 0 1 1 2 3 5...\n");
    int x,y,z;

    while(1) {
        int x = 0, y = 1;

        do
        {
            printf("%d \n", x);
            z = x + y;
            x = y;
            y = z;
            
        } while (x < 255);
        break;
    }
}