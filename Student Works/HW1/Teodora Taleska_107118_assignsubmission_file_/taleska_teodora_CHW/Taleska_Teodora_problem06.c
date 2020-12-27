/*
   This program in C was written by Teodora Taleska
*/

#include<stdio.h>

int main() {

	//array declaration
	int integers[10];
	
	//user input
	printf("\nPlease enter 10 numbers!\n");
	for(int i=0; i<10; i++) {
	 printf("--> ");
	 scanf(" %d", &integers[i]);
	}//end for
	
	//consider first element as smallest
	 int smallest = integers[0];
	 
	 for (int i=0; i<10; i++) {
	  if(integers[i] < smallest) {
	   smallest = integers[i];
	  }
	 }
	 
	 //print the smallest element 
	  printf("\nSmallest element: %d \n", smallest);
	
	return 0;
} //endmain
