#include <stdio.h>
#include <string.h>
/*
        I want to write a program that will allow the user to input a string wo$
        The program will analyse the input word and count the number of vowels $
        The program will censor or change all vowels into the char 'X'

        C-string
        char arr[]
        %s
        {h,e,l,l,o,\0}
        \0 is EOS (end of string character)
*/

int main(){
        //declare variables
        char sWord[13];
        int dVowels=0, dLen=0;

        //strlen = returns the current size of the string

        //prompt the user for an input
        printf("\n Hello human this is Chat GPT-1, give me a word: ");
        scanf("%s", sWord); //no ampersand &

        //print the word
        printf("\n You have entered the word: %s", sWord);
        dLen = strlen(sWord);
        printf("\n The word has %d characters. ", dLen);

        //scan the word array
        for (int i = 0; i < dLen; ++i)
        {
                switch(sWord[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                        dVowels++;
                        sWord[i] = 'X';
                        break;
                case '\0': //default handles this but this is for demonstration$
                        break;
                default:
                        break;
                }//endswitch
        }//endfor

        //print them
        printf("\n The word has %d vowels.", dVowels);
        printf("\n I am allergic to vowels so I censord them for you. \n Your word is now: %s \n", sWord);


        return 0;
}//endmain
