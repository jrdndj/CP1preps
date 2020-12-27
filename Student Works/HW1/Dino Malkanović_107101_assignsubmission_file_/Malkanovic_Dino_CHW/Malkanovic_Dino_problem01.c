#include<stdio.h>

int main ()

{
 
    char chPet, chYN; //declaring variables
    printf("What kind of pet do you have?\nType D/d for dog, C/c for cat, B/b for bird or R/r for reptile: "); //priting message
    scanf(" %c", &chPet); //user input 
    
    if ( chPet=='D' || chPet=='d' || chPet=='C' || chPet=='c' || chPet=='B' || chPet=='b' || chPet=='R' || chPet=='r' ) { //checking if user input is correct if not prints error
    if ( chPet=='D' || chPet=='d' ) { //if user inputs D/d continues this statement
        printf("Is your dog neutered? (Y/N)\n");
        scanf(" %c", &chYN);
            switch ( chYN ) {
              case 'Y': 
              printf("50$");
              break;
              case 'N':
              printf("80$");
              break;
        }
    }
    
    if ( chPet=='C' || chPet=='c' ) { //if user inputs C/c continues this statement
        printf("Is your cat neutered? (Y/N)\n");
        scanf(" %c", &chYN);
            switch ( chYN ) {
              case 'Y': 
              printf("40$");
              break;
              case 'N':
              printf("60$");
              break;
        }
    }
    
    if ( chPet=='B' || chPet=='b' || chPet=='R' || chPet=='r' ) { //if user inputs B/b/R/r prints message
        printf("It is free for birds and reptiles"); }
    
    }//ends first if
        
    else
    { printf ("Wrong input."); }

    return 0;
    
}