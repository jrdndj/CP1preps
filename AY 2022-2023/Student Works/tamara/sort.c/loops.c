#include<stdio.h>

int main(){
	//declare variables
	int dFactor=1;

	//print the statement in a for loop
	for( ; dFactor<=10; dFactor++){
		printf("\n %d x %d =   %d\n", dFactor, dFactor, dFactor*dFactor);
	}//endforloop

	return 0;
}