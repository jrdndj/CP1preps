#include <stdio.h>
#include <string.h>

int main(){
    char sWord[12];
    int dVowels=0, dLen=0;

    printf("\n Hello human give me word: ");
    scanf("%s", sWord);
    dLen = strlen(sWord);

    for(int i=0; i<dLen; i++){
        switch( sWord[i] ){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':
                dVowels++; 
                sWord[i]='X';
                break;
            case '\0': break;
            default: break;
        }
    }

    printf("\n Your word has %d vowels. ", dVowels);
    printf("\n Im allergic to vowels si I changed thw for you. ");
    printf("\n Your word is now %s. \n", sWord);


    return 0;
}