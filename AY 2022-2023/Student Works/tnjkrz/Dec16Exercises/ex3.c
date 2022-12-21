#include <stdio.h>
#include <string.h>

/*
        onomatopoeia
        ono, nom, oma, mat, ato, top, ope, pei, eia
        num of combos: 9

        Ask the user to enter a string word input (7-25 characters).
        Ask the user how many characters do they wish to scan at a given time.

        If the user enters 3, then it will print all the 3 letter groupings that
        can be found in the word. Then, count the number of combinations printed.

*/

int main(){

        char word[25];
        int n = 0;
        int counter = 0;

        printf("Hello! Please enter string: ");
        scanf("%s", word);

        printf("Hello! Please enter n: ");
        scanf("%d", &n);

        for (int i = 0; i < strlen(word)-n+1; ++i)
        {
                for (int j = i; j <= i+(n-1); ++j)
                {
                        printf("%c", word[j]);
                }
                counter++;
                printf("\n");
        }

        printf("The counter of combinations printed: %d \n", counter);

        return 0;
}

