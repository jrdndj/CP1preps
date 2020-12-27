#include<stdio.h>

int main () {
    char chPet, chYN; // Variable Declaration
    
  printf("What kind of pet do you have?\n(D/d) - Dog, (C/c) - Cat, (B/b) - Bird (R/r) - Reptile: "); // Printing Message
    scanf(" %c", &chPet); // Scanning User Input
    
    if ( chPet=='D' || chPet=='d' || chPet=='C' || chPet=='c' || chPet=='B' || chPet=='b' || chPet=='R' || chPet=='r' ) { 
        //Check if Input matches the statement
    if ( chPet=='D' || chPet=='d' ) { // If User Input is the following 
        printf("Is your Dog Neutered? (Y/N): "); // Ask User a Question
        scanf(" %c", &chYN); // Scan the answer
            switch ( chYN ) { // Switch for Yes No
              case 'Y': 
              printf("\nPrice: $50.");
              break;
              case 'N':
              printf("\nPrice: $80.");
              break;
        }
    }
    
    if ( chPet=='C' || chPet=='c' ) { // If User Input is the following 
        printf("Is your cat neutered? (Y/N): "); // Print Message to User
        scanf(" %c", &chYN); // Scan the answer
            switch ( chYN ) { // Switch for Yes No
              case 'Y': 
              printf("\nPrice: $40.");
              break;
              case 'N':
              printf("\nPrice: $60.");
              break;
        }
    }
    
    if ( chPet=='B' || chPet=='b' || chPet=='R' || chPet=='r' ) { // If User Input is the other options
        printf("\nIt is free for birds and reptiles!"); // Print Message
    }
    
}
        
    else { //Else Command
        printf ("Wrong input."); // Print Message
    }
    printf("\nThank You For Using My Program!");
} 

