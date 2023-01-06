/*
multiplication matrix, multip. tab;e
*/
#include <stdio.h>

int main(){
	//declare variable
	int dFactor1=1;
	int dFactor2=1;

	for( ; dFactor1<=10; dFactor1++ ){
		for( int dFactor2=1; dFactor2<=dFactor1; dFactor2++ ){
			printf(" %d ",dFactor1*dFactor2 );
		}//endinnerfor
		printf("\n");
	}//endmainfor

	return 0;
}