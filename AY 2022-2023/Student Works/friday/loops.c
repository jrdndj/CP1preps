#include<stdio.h>

int main(){
	//declare variables 
	int i,j;


	//print the statemants in the for loop
	//for( ; dFactor<=10; dFactor++ ){
	//	printf("\n %d x %d = %d \n",dFactor, dFactor,dFactor*dFactor);
	//}//end for loop


	//print the multiplication table
	//this outer for loop determines the number of rows on table
	for( i=1; i<=5; i++){

		//this for loop controls the number of columns in tbale
		for( j=1; j<=i; j++){
			printf(" * ");




		}//end inner for loop
		//print new line to go to next level
		printf("\n");
	}//end of the outer for loop
	return 0;
}