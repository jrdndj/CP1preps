#include<stdio.h>

int main(){
    //declare varaible
    char sWord[25];
    int dVowelCount = 0;

    //promt user
    printf("Dear user pls enter word no spaces no more than 25 letters: ");
    scanf("%s", sWord);
    for (int n = 0; n < 25; n++){
        switch ( sWord[n]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                dVowelCount++;
                sWord[n] = 'X';
                break;
        }//endswirch
    }//end for
   //print

   printf("\n There are %d vowels in the word.", dVowelCount);
   printf("\n the resulting is now %s", sWord);

    return 0;
}