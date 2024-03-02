#include <stdio.h>

int main() {
    int rows, space, i, j, k;

    printf("Input the number of rows in the tree: ");
    scanf("%d", &rows);

    space = rows + rows - 1;

    for (i = 1; i <= rows; i++) {
        for (k = space; k >= 1; k--) {
            printf(" ");
        }
    
    for (j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
    space--;
    }

    return 0;
}