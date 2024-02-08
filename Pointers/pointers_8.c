#include <stdio.h>
#include <string.h>
/*
8. Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc
*/

void SwapLetters(char *ch1, char *ch2) {
    char temp;
    temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

// height of tree = length of string

void changePermu(char *cht, int stno, int endno) {
    if (stno == endno) {
        printf("%s ", cht);
    } else {
        for (int i = stno; i <= endno; i++) {
            SwapLetters((cht + stno), (cht + i));
            changePermu(cht, stno + 1, endno);
            /*
            After fixing the characters, we will find the remaining combinations
            As the height of the tree increases, the number of branches / combinations decreases
            */
            SwapLetters((cht + stno), (cht + i));
            /*
            This swaps, then swaps back
            e.g. prints ABC and ACB
            ABC is the original, but is the recovery string
            */


        }
    }

}

int main() {
    char str[] = "abc";
    printf("Pointer: Generage permutations of a string\n");
    printf("=========================================\n");
    int n = strlen(str);
    printf("Permutations of %s: \n", str);
    changePermu(str, 0, n-1);
    printf("\n\n");


    return 0;
}

/*
Time complexity:
order of time to print
only one permutation * number of permutations

N = 4
traverse throught depth of 4
O(N * N!)




*/