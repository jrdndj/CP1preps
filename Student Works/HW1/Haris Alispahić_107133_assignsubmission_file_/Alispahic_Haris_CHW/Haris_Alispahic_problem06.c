#include<stdio.h>

int main () {
  int dArray[10], i, dSmall;
 
 printf("Enter 10 Integers: \n");
   for (i = 0; i < 10; i++) { // For Loop until 10
      scanf("%d", &dArray[i]); // Print out user input of 10 integers
   } 
   
   dSmall = dArray[0]; //Set up value (Considering) as the 1st position for Smallest
 
   for (i = 0; i < 10; i++) { // For Loop of 10 integers
      if (dArray[i] < dSmall) { // Check if some other number is smaller
         dSmall = dArray[i]; // assign that number to dSmall 
      }
   }
 printf("\nSmallest Number is: %d", dSmall); // Printing out the Result
 printf("\nThank You For Using My Program!"); // Wholesome Comment
}