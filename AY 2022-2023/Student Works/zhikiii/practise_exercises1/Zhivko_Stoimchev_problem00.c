#include <stdio.h>

int main(){
    char cCode, cAnsw;
    printf("Enter kind of animal (d||D: dog, c||C: cat, b||B: bird, r||R: reptile): ");
    scanf(" %c", &cCode);

    printf("Is it neutered? (y/n): ");
    scanf(" %c", &cAnsw);

    if (cAnsw == 'y'){
        if (cCode == 'd' || cCode == 'D')
            printf("A dog that has been neutered costs $50\n");
        else if (cCode == 'c' || cCode == 'C')
            printf("A cat that has been neutered costs $40\n");
        else if (cCode == 'B' || cCode == 'b')
            printf("A bird that has been neutered costs nothing\n");
        else if (cCode == 'r' || cCode == 'R')
            printf("A reptile that has been neutered costs nothing\n");
        else
            printf("Error!\n");
    }
    else{
        if (cCode == 'd' || cCode == 'D')
            printf("A dog that has not been neutered costs $80\n");
        else if (cCode == 'c' || cCode == 'C')
            printf("A cat that has not been neutered costs $60\n");
        else if (cCode == 'B' || cCode == 'b')
            printf("A bird that has not been neutered costs nothing\n");
        else if (cCode == 'r' || cCode == 'R')
            printf("A reptile that has not been neutered costs nothing\n");
        else
            printf("Error!\n");
    }

    return 0;
}