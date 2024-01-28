#include <stdio.h>


void test(int x, int *ptry )
{
    x = 200;
    *ptry = 200;
    return;
}

int main( void )
{
    int p = 10, q = 10;
    printf("Initial values: p = %d and q = %d \n", p, q);
    test(p, &q);
    printf("After passes to test function: p = %d, q = %d \n", p, q);

    return 0;
}

// Embedding one function inside of another
// all pointers reside in the Test function
// The code only runs in the Main function; hence why there is a void in front of functions not Main
