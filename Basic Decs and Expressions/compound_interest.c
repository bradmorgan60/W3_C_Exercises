#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {

    int principal, period, time;
    double final_amount, rate;

    int * p_principal = &principal;

    printf("Enter your principal amount: ");
    scanf("%d", &principal);

    printf("Enter the interest rate: ");
    scanf("%lf", &rate);

    printf("How many payments per year does this security pay? ");
    scanf("%d", &period);

    printf("Enter your expected time to hold security: ");
    scanf("%d", &time);


    final_amount = principal * pow(1 + (rate / period), period*time);

    printf("The final amount: $%2f \n", final_amount);

    if(final_amount < 10) {
        printf("This sucks, bro.");
    } else {
        printf("Nice one, now keep stepping.")
    }

    return 0;
}