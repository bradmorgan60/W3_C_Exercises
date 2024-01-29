#include <stdio.h>

int main() {

    int sum = 0;
    double num, avg;

    printf("Enter the number of integers: ");
    scanf("%lf", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

        avg = sum / num;

        printf("Sum: %d\n", sum);
        printf("Average: %lf\n", avg);

        
    return 0;
}