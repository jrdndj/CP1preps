#include<stdio.h>

int main(){
	//declare variables
	int dFactor; dFactor2;

	//print the multiplication table
	//this outer for loop determines the number of rows of your table
	for( dFactor1=1; dFactor1<=10; dFactor1++ ){

		//this one controls the number of rows in table
		for( dFactor2=1; dFactor2<=10; dFactor2++){
			printf(" %d ", dFactor1*dFactor2);

		}//endinnerforloop
		//print a new line to go zo the next level
		printf("\n");
	}//endforloop

	return 0;
}