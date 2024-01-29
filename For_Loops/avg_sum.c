#include <stdio.h>

int main() {

    int sum = 0;
    double avg, num;

    printf("Enter an integer: ");
    scanf("%lf", &num);

    for (int i = 1; i <= num; i++) {
        sum = sum + i;
        printf("%d ", i);
    }

        avg = sum / num;


        printf("\nSum: %d\n", sum);
        printf("Average: %lf\n", avg);


    return 0;
}