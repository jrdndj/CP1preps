#include<stdio.h>

int main(){

	int dFactor1=1,dFactor2;
	//loop
	// for (; dFactor<=10; dFactor++)
	// {
				
	
	// //print the equation
	// printf("\n %d x %d = %d", dFactor,dFactor,dFactor*dFactor);
	// }
	// printf("\n");
	// return 0;

	for(; dFactor1<=10;dFactor1++){
		for(dFactor2=1;dFactor2<=10;dFactor2++){
			printf(" %d ",dFactor1*dFactor2);
		}
		printf("\n");
	}
}