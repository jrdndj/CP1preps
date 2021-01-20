/*
  This code is written by Teodora Taleska from Computer Science class. This is our 2nd homework in C programming language and it is about: for a given positive integer N, finding positive integer K, such that K! is multiple of the square of N!. 
*/
#include<stdio.h>

int main() {

  //variable declaration: we have one for test cases and one for the numbers that will input the user
   int dTestCase;
   int dN[200000];
  
  //asking user for input 
   printf("Please, tell me how many test cases you want to have! Your number should be positive and smaller that 200 000!! \n");
   //printing the user input
   printf("Your test cases: ");
   scanf(" %d", &dTestCase);
  //making restrictions so that the user will not overdo his requests
     if ( dTestCase <= 1 || dTestCase >=200000 ) {
       printf("Error!");
       return 0;
     } else {
      printf("Thank you for your submission!");
      }//end if-else
   //doing the calculations 
      printf("\n Now give me %d numbers: \n", dTestCase);
     for (int i=0; i<dTestCase; i++) {
     //asking user for input the numbers 
        scanf("\n %d", &dN[i]);
       //printing the calculations
        printf(" For %d! multiple of its square is %d! And the minimum positive integer is %d. :)\n", dN[i], dN[i]*dN[i], dN[i]*2);
     }//end for 
  return 0;
}//end main 
