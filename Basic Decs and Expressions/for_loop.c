#include <stdio.h>


// int main() 
// {
//     int x, sum = 0;

//     for(x = 1; x <= 100; x++) {
//         sum = sum + x;
//         printf("%d \n", x);
//         printf("The sum: %d \n", sum);
//     }

//     return 0;
// }


/*
Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number up to 7 terms : 28
*/
int main() 
{
    int x, n, sum = 0;

    printf("Enter the value of the terms: ");
    scanf("%d", &n);

    for(x=1; x<=n; x++) {
        printf("%d ", x);
        sum += x;
    }

    printf("\nThere are %d natural numbers\n", n);

    printf("The sum of the %d natural numbers: %d \n", n, sum);

    return 0;


}