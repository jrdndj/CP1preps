/*
   This program in C was written by Teodora Taleska.
*/

#include<stdio.h>

int main() {

	//variable declaration
	 int n;
	 int array1[100];
	 
	//user input
	 printf("\nNumber for elements in your array: ");
	 scanf(" %d", &n);
	 
	//enter the elements in the array with for loop
	printf("\nYour numbers:\n ");
	 for (int i=0; i<n; i++) {
	   printf("--> ");
	   scanf("%d", &array1[i]);
	 }
	 	
	//finding the even numbers
	 printf("\nEven numbers in your array are: ");
	  for(int i=0; i<n; i++) {
	   if(array1[i] % 2 == 0) {
	     printf(" %d ", array1[i]);
	    }
	  }
	  
	//finding the odd numbers
	 printf("\nOdd numbers in your array are: ");
	  for(int i=0; i<n; i++) {
	   if(array1[i] % 2 != 0) {
	     printf(" %d ", array1[i]);
	    }
	  }

	return 0;
} //endmain
