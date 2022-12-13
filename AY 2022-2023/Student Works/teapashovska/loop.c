#include <stdio.h>
int main(){
	//declare variable 
	int dFactor1, dFactor2;

	//for (; dFactor<=10; dFactor++){
		
	//printf("\n %d x %d = %d \n", dFactor, dFactor, dFactor*dFactor);
	//}

	//this outer for loop prints the rows
	for (dFactor1=1; dFactor1<=10; dFactor1++){

		//inner forloop to do the colums
		for( dFactor2=1; dFactor2<=dFactor1; dFactor2++){
			printf(" %d ", dFactor1*dFactor2);
		}
		printf("\n");
	}
	return 0;
}
