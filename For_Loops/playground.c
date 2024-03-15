
#include <stdio.h>

int main() {
    int sum = 0, size;
    printf("Enter the integer table to be calculated: (1-15): ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        printf("%d X %d = %d\n", size, i, size * i);
    }


    


    return 0;
}