/*
linear multiplication table 1x1=1....
matrix multiplication table
x 1 2 3
1 1 2 3
2 2 4 6
... two forloops

7x3 = dFactor x dFactor(prints only the result)
d1xd2
*/
#include <stdio.h>
int main()
{
	//declare variables
	int dFactor1, dFactor2;
	
	/*print the statement
	for (; dFactor <= 10; dFactor++){
		printf("\n %d x %d =    %d \n", dFactor, dFactor, dFactor*dFactor);
	}//endforloop
	*/

	//print the matrix
	//this outer forloop determines the num of rows of your tabele
	for(dFactor1 = 1; dFactor1 <= 10; dFactor1++ ){
		//this controls the num of columns
		for(dFactor2 = 1; dFactor2 <= dFactor1; dFactor2++){
			printf(" %d ", dFactor1*dFactor2);
		}//endinnerforloop
		//print a new line to go to next level
		printf("\n");
	}//endouterforloop

	return 0;
}