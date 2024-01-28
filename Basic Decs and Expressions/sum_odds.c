#include <stdio.h>
#include <math.h>


int main() 
{
    
    int j, num[5], total = 0;

    printf("Enter number 1: ");
    scanf("%d", &num[0]);

    printf("Enter number 2: ");
    scanf("%d", &num[1]);

    printf("Enter number 3: ");
    scanf("%d", &num[2]);

    printf("Enter number 4: ");
    scanf("%d", &num[3]);

    printf("Enter number 5: ");
    scanf("%d", &num[4]);

    for(j = 0; j < 5; j++) {
        if((num[j] % 2) != 0)
        {
            total += num[j];
        }

    }

    printf("Sum of all odd values: %d \n", total);
    
    
    
    return 0;
}