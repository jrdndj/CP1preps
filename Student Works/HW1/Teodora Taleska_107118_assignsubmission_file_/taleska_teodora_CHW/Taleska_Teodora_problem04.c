/*
  This program in C was written by Teodora Taleska.
*/

#include<stdio.h>

int main() {

  //declare variables
   int n1, n2;
   int d;
   
  //user input
   printf("\n---Please, enter a number: ");
   scanf(" %d", &n1);
   
  //second user input
   printf("\n---Thank you for your input. Now enter another number which is prime and is less or equal to your first number: ");
   scanf(" %d", &n2);
   
  //checking if the input is correct
   d = n2/2;
    for(int i=2; i<=d; i++) {
     if (n2%i==0){
       printf("\n---Your number is not prime!");
       break;
     } //endif
    }// end for
    
    if(n2<=n1){
     printf("\n %d <= %d", n2, n1);
    } else { 
     printf("\n---Your prime number is not less or equal to your first number!\n");
    return 0;
    }//endif

 return 0;
}//endmain
