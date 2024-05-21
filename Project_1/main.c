/*
    Author: Brad Morgan
    Start date: May 21, 2024
    Idea: Business Scenario
        Inventory valuation:
            - Data Structure: Queue
    This is a LIFO (Last In First Out) data structure that is very prevalent in inventory management
    The use case for this data structure is that if more stock is added, that stock will be appended
    - older stock will need to be used

*/

#include "requirements.h"

void display_stock(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int *arr, quantity;
    int stock_count = 0;
    char choice, material;

    printf("Do you wish to shop today? (y/n): ");
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("Enter the material you wish to buy: ");
        scanf("%c", &material);

        printf("\n");

        printf("Enter the quantity of the of material %c: ", material);
        scanf("%d", &quantity);

        arr = calloc(quantity, sizeof(int)); // int is 4 bytes

    }

    return 0;
}