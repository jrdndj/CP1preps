#include<stdio.h>

int main(){
	//declare a variable
	int dFactor1=1, dFactor2;

	//for(;dFactor1<=10; dFactor1++){
	//print the statement
	//printf("\n %d x %d = %d", dFactor1, dFactor1, dFactor1*dFactor1);
	//}//endfor	

	//ths controls the numbers of rows
	for(dFactor1=1; dFactor1<=10; dFactor1++){
		 //we have an inner for loop to do the number of columns
		for(dFactor2=1; dFactor2<=10; dFactor2++){
			printf(" %d ", dFactor1*dFactor2);
		}//end inner for loop
		printf("\n");
	}//end outer for loop
	return 0;
}
