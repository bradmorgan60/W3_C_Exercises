#include <stdio.h>

int main() {

    double weight1, weight2, quantity1, quantity2, avg_value;


    printf("Item 1 weight: ");
    scanf("%lf", &weight1);

    printf("Item 1 quantity: ");
    scanf("%lf", &quantity1);

    printf("Item 2 weight: ");
    scanf("%lf", &weight2);

    printf("Item 2 quantity: ");
    scanf("%lf", &quantity2);

    
    avg_value = ((weight1 * quantity1) + (weight2 * quantity2)) / (quantity1 + quantity2);

    printf("Average value: %lf", avg_value);


    return 0;
}