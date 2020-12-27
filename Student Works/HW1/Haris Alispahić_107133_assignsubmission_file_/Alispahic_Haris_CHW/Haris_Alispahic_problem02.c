#include <stdio.h>
int main() {

    int dNumber,dValue;  // Declaration of Int Variables
    printf("Enter the number of Stars: ");  // Program Message
    scanf("%d",&dNumber); // Scan User Input
    
    dValue=dNumber;  // Setting the same value for the "counter"
    
   for( int i=1; i<=dNumber; i++)  {  // for Loop till the User Input
       for( int j=1; j<i; j++) {  // for Loop for empty Spaces
           printf(" ");  
       }  
       for( int k=1; k<=dValue; k++) {   // for Loop for Star Insert
           printf("*");  
       }  
       dValue--;  // Reverse Printing
     
      printf("\n");  // While in the first loop, print each line of stars;
    }  
     printf("\nThank You for using the Pyramid Program!"); // Wholesome Comment
}  