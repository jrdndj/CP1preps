#include <stdio.h>

int main () {
    
    int dNumber; // Declaring Variable
    
    while (dNumber!=999) { // While Loop until user inserts "999"
    
  printf( "\nEnter a 1 or 2 digit number: " ); // Printing Message
     scanf( "%d", &dNumber ); // Scanning Input of User
     
    if ( dNumber>0 && dNumber <100 ) { // If between 1 and 99
  printf( "%d%d%d", dNumber,dNumber,dNumber ); // Print Out 3 Times
            }
    }
  printf("\nThanks For using my Program!");
    return 0;
}