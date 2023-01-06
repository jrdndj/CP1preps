#include <stdio.h>
int main(){
	//declaring variables
	int dFactor=1;

	//using loop to print statements
	for(; dFactor<=10; dFactor++){
		printf("\n%d x %d = %d \n", dFactor, dFactor, dFactor*dFactor);
	}//endfor

	return 0;
}