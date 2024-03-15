#include <stdio.h>

int main() {
    int rows, space, i, k, j, t = 1;
    printf("Input the number of rows: ");
    scanf("%d", &rows);

    rows = space;

    for(i = 1; i <= rows; i++) {
        for (k = space; k >= 1; k--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", t++);
        }
        printf("\n");
        space--;

    }
    return 0;
}