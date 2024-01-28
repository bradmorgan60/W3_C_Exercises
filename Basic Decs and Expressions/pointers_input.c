#include <stdio.h>


int main()
{
    int num1, num2, *p_num1 = &num1, *p_num2 = &num2;

    printf("Enter number 1: ");
    scanf("%d", p_num1);

    printf("Enter number 2: ");
    scanf("%d", p_num2);

    if (*p_num1 > *p_num2)
    {
        printf("%d is the max number \n", *p_num1);
    }
    else printf("%d is the max number \n", *p_num2);
    
    return 0;
}