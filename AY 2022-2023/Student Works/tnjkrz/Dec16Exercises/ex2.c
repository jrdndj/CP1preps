/*
        How does the compiler know that there is a syntax error?
        Cryptography and Compression
        Hashing

        "truwudvfvduwuuuwutfer"
        string has 21 characters

        dLen = 21;

        a program that can count how many "uwu" is there in the string

        for i=0 until i < n-3; i++

        i = u and i+1 == w and i+2 == u then uwucount++
*/

#include <stdio.h>
#include <string.h>

int main(){
        char word[21] = "truwudvfvduwuuuwutfer";
        int uwuCount=0;

        for (int i = 0; i <= strlen(word)-3; ++i)
        {
                if (word[i] == 'u' && word[i+1] == 'w' && word[i+2] == 'u'){
                        uwuCount++;
                }
        }

        printf("The uwu count is: %d \n", uwuCount);

        return 0;
}
