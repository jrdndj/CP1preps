#include <stdio.h>

int main () {
    
	int dRow,dCol,dInput; // Variable Declaration
	    
	printf ("Insert a Number (1-10): "); // Printing Sentence for User
	scanf ("\n %d",&dInput); // Scanning User Input
	
 while (dInput>0 && dInput<=10) { // While Loop for (1-10)
     printf (" X" ); // print X in first row
	for (dCol = 1 ; dCol <= dInput; dCol++ ) // for Loop for Row1 
	printf("%5d" ,dCol); //%5 for 5 spaces
	printf(" \n" );
	
	for (dRow = 1 ; dRow <= dInput; dRow++ ) { // For Loop for the following columns
		printf ("%2d" ,dRow);  // 2d For spaces
		for (dCol = 1 ; dCol <=dInput; dCol++ ) // For Loop for rows 
			printf("%5d" , dRow * dCol); // Calculation of the Multiplication Table
			printf(" \n" ); // Next Line
		
	}
	
	break; // Break While;
 }
 if (dInput<0 ||dInput>10) { // If User Input is not (1-10)
     printf("\nInsert Values (1-10)!!!"); // Print out Message
 } 
	printf("\nThank You For Using My Program!"); // Wholesome Comment
	}
