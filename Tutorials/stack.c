#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

Stack memory deals with static memory, not dynamic.

There are 3 segments which make up RAM
1. Machine Code - CPU can only read binary data (1s and 0s) and execute instructions. When code is compiled, the compiler translates this code
into machine code so the CPU can execute the instructions.

2. Stack - Static memory (cannot be changed)

3. Heap - Dynamic memory (memory can scale in response to load)
*/


int Multiply(int x, int y) {

    printf("Enter your first number: ");
    scanf("%d", &x);

    printf("Enter your second number: ");
    scanf("%d", &y);

    return x * y;
}


int main() {
    int x, y;

    printf("%d \n", Multiply(x, y));

    return 0;
}