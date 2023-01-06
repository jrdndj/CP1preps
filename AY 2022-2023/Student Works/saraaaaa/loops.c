#include<stdio.h>
/* 
linear multiplication table
1x1=1
2x2=4
..
10x10=100
*/

int main(){

	//declare variables
	int dFactor1, dFactor2;

	/*//print the statement
	for( ; dFactor<=10; dFactor++ ){
		printf("\n %d x %d =   %d \n", dFactor, dFactor, dFactor*dFactor);
	}//endforloop*/

	
	//print the multiplication table
	//this outer for loop determines the number of rows of your table
	for( dFactor1=1; dFactor1<=5; dFactor1-- ){

		//this one controls the number of columns in your table
		for(dFactor2=1; dFactor2<=dFactor1; dFactor2++ ){
			printf(" %d ", dFactor1*dFactor2);
		}//endinnerforloop
		//print a new line to go to the next level
		printf("\n");
	}//ednouterforloop

	return 0;
}