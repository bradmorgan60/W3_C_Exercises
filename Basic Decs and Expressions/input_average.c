#include <stdio.h>

int main() 
{
    float a_weight, b_weight;
    int a_quantity, b_quantity;

    printf("Enter the weight of item A: ");
    scanf("%f", &a_weight);

    printf("Enter the number of purchases for item A: ");
    scanf("%d", &a_quantity);

    // Item B Weight and Quantity
    printf("Enter the weight of item B: ");
    scanf("%f", &b_weight);

    printf("Enter the quantity for item B: ");
    scanf("%d", &b_quantity);

    printf("Weight Item A: %f \n", a_weight);
    printf("# Purchases A: %d \n", a_quantity);

    printf("Weight Item B: %f \n", b_weight);
    printf("# Purchases B: %d \n", b_quantity);

    float avg_value = ((a_weight * a_quantity) + (b_weight * b_quantity)) / (a_quantity + b_quantity);

    printf("---------------\n");
    printf("Average value: %f", avg_value);


    return 0;
}