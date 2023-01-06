#include <stdio.h>
int main(){
	int dFactor1=1;

	for( ; dFactor1<=10; dFactor1++ ){
		for ( int dFactor2 =1 ; dFactor2<=dFactor1; dFactor2++ ){
			printf(" %d ", dFactor2*dFactor1);
		}//endfor2
		printf("\n");
	}//enfor1

	return 0;
}