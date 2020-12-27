/*Write a program that asks the user to type an integer N and that writes the number of primenumbers lesser or equal to N*/

#include<stdio.h>

int main(){

	//declare variables
	int dUserInput, i, dColector;

   

	//asking user for an input
	printf("Please enter a positive integer: ");
	scanf("%d", &dUserInput);

	/*if ( dUserInput == 0 || dUserInput == 1 );{

		printf("\nPlease enter a POSITIVE integer: ");
		
	}//end if*/

	dColector=0;

	
	for ( int i=2; i<=dUserInput; i++){ // counter(i) starts from 2, because 1 is not a prime

		if ( dUserInput % i != 0 ){

				dColector=dColector+1;

		}//end if

	}//end for

	printf("\nThe total number of primes is %d.\n", dColector);


	return 0;

}//end main
