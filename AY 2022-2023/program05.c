#include<stdio.h>

int main(){
	//declare variables
	int dFactor1 = 1, dFactor2;

	//loop this 
	//for(; dFactor <= 10; dFactor++){
	//print the equation 
	//printf("\n %d x %d = %d", dFactor, dFactor, dFactor*dFactor);
	//}//endforloop
	//printf("\n");

	//this prints the rows
	for(; dFactor1 <= 10; dFactor1++){
		//inner loop to do cols
		for(dFactor2 = 1; dFactor2 <= 10; dFactor2++){
			printf(" %d ", dFactor1*dFactor2 );
		}//endInnerForLoop
		printf("\n");
	}//endOuterForLoop
	printf("\n");
	return 0;
}