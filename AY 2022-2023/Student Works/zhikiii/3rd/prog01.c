/*
multiplication
*/
#include <stdio.h>

int main(){
	//declare variable
	int dFactor=1;

	//create for loop
	for(; dFactor<=10; dFactor++){
		printf("\n %d x %d = %d\n",dFactor, dFactor, dFactor*dFactor );
	}

	return 0;
}