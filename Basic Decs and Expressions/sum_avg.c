#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program in C to read 10 numbers from the keyboard and find their sum and average.

Test Data :
Input the 10 numbers :
Number-1 : 2
...
Number-10 : 2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

int main() 
{
    int x, nums, sum = 0;
    // int * p_nums = &nums[x];
    float avg;

    int * p_nums = malloc(sizeof(int));
    * p_nums = nums;

    printf("How many numbers would you like to use? ");
    scanf("%d", &nums);

    for(x = 1; x <= nums; x++) {
        printf("Number - %d : ", x);
        scanf("%d", p_nums);

        sum += nums;
    }


    avg = sum / nums;

    // for(x = 1; x <= nums[x]; x++) {
    //     printf("Number %d : ", x);
    //     scanf("%d", p_nums);
    //     sum += nums[x];

    //     // printf("%d", n)
    //     avg = sum / nums[x];

    // }

   

    printf("%d numbers were entered: \n", x - 1);

    printf("Sum: %d \n", sum);
    printf("Average: %f \n", avg);

    free(p_nums);
    
    return 0;
}