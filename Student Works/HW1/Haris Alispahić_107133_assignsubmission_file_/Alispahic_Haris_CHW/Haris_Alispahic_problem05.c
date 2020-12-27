#include<stdio.h>

int main () {
    
    int dNumber;  // Variable Declaration
  printf("Enter the number of Stars: ");  // Message for User
    scanf("%d",&dNumber);  // Scan user Input
for ( int i=1; i<=dNumber; i++ ) {   // For Loop until the Input Value
  for ( int j=1; j<=i; j++ ) {  // Printing Right Side Triangle
      
    printf("*");  // Asteriks Print (Second Loop)
  }  
  printf("\n");  // New Line (First Loop)
}  
for ( int i=dNumber-1; i>=1; i-- ) {  // Printing Reverse Right Side (Using dNumber-1)
  for ( int j=1; j<=i; j++ ) {  // For Loop to print out the stars for the J Value
     printf("*");  
   }  
   printf("\n");  
 }    
  printf("Thank You For Using My Program!"); // Wholesome Comment
}  