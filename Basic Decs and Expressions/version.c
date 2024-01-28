#include <stdio.h>

int main(int argc, char** argv)
{
    /* Check for C standard version */
    #if __STDC_VERSION__ >= 201710L
        printf("We are using C18!\n");
    
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");

    #elif __STDC_VERSION__ >= 199001L
        printf("We are using C99!\n");
    
    #else __STDC_VERSION__ >= 201112L
        printf("We are using C89/C90!\n");
    
    #endif
    
    

    
    return 0;
}