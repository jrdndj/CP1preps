/*
this program prints 1x1 all the ayt until 10x10
*/
#include<stdio.h>

int main(){
	//declare variable
	int dFactor1, dFactor2;

	//for ( ; dFactor<=10; dFactor++){
		//printf("\n %d x %d =%d", dFactor, dFactor, dFactor*dFactor);
	//}//endfor
	//return 1;
//}//endmain

	//this outer for loop prints the rows
	for( dFactor1=1, dFactor1<=10; dFactor1++){

		//innerforloop to do the cols
		for( dFactor2=1, dFactor2<=10, dFactor2++){
			printf(" %d ", dFactor1*dFactor2);

		}//endinnerloop
		printf("\n");
	}//endouterloop

	return 1;

}//endmain
