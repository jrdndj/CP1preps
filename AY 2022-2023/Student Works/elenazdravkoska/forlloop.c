#include <stdio.h>

int main(){
	int dFactor1, dFactor2;

	//this outer for loop prints the rows
	for( dFactor1=1; dFactor1<=10; dFactor1++){
		//inner for loop to do columns
		for( dFactor2=1; dFactor2<=dFactor1; dFactor2++){
			printf("%d ", dFactor1*dFactor2);
		}//end inner for loop
		printf("\n");
	}//end outer for loop


 return 1;
}//end main
