/*
Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  
cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc

4! = 24 combinations
*/

#include <stdio.h>
#include <string.h>

// Function to swap characters
void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

// Function to generate permutations of a string
void charPermu(char *str, int left, int right)
{
    int i;
    if (left == right)
        printf("%s  ", str); // Print the generated permutation when left equals right
    else
    {
        for (i = left; i <= right; i++)
        {
            changePosition((str + left), (str + i)); // Swap characters at positions left and i
            charPermu(str, left + 1, right); // Recursively generate permutations for the rest of the string
            changePosition((str + left), (str + i)); // Restore the original string by swapping back
        }
    }
}

// Main function
int main()
{
    char str[] = "abcd"; // The input string
    printf("\n\n Pointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");
    int n = strlen(str); // Get the length of the string
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n - 1); // Call function to generate permutations
    printf("\n\n");
    return 0;
}



