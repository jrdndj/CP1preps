#include<stdio.h>

int main(){
	//declare variables
	int dFactor1, dFactor2;

	//print
	for(dFactor1=1; dFactor1<=10; dFactor1++){
		for(dFactor2=1; dFactor2<=10; dFactor2++){
			printf(" %d ", dFactor2*dFactor1);
		}//endinnerfor
		printf("\n");
	}//endouterfor
	return 0;
}//endmain
