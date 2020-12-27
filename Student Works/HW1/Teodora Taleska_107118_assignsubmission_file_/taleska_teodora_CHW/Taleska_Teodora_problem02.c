/*
  This program in C was written by Teodor Taleska.
*/

#include<stdio.h>

int main() {

	//variable declaration
	 int n1, n2, n3;
	
	//user input
	 printf("\n--Please, would you be kind to enter three different numbers and you will see something.--");
	 printf("\n--Your first number: ");
	 scanf(" %d", &n1);
	 
	//using for loop for making triangle with stars(*)
	 for(int i=1; i<=n1; i++) {
	  //1st inner loop
	  for(int j=1; j<i; j++) {
	   printf(" ");
	  }
	  for(int k=i; k<=n1; k++) {
	   printf("*");
	   }
	   printf("\n");
	 }//end for

	printf("\n--Your second number: ");
	scanf(" %d", &n2);
	//for loop
	for(int i=1; i<=n2; i++) {
	  //1st inner loop
	  for(int j=1; j<i; j++) {
	   printf(" ");
	  }
	  //2nd inner loop
	  for(int k=i; k<=n2; k++) {
	   printf("*");
	  }
	  printf("\n");
	 }//end for
	 
	printf("\n--Your second number: ");
	scanf(" %d", &n3);
	//for loop
	for(int i=1; i<=n3; i++) {
	  //1st inner loop
	  for(int j=1; j<i; j++) {
	   printf(" ");
	  }
	  //2nd inner loop
	  for(int k=i; k<=n3; k++) {
	   printf("*");
	  }
	   printf("\n ");
	 }//end for
        
 return 0;
}//end main
