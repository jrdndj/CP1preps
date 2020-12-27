#include<stdio.h>

int main(){

	//declare variables
	int dInput;


	while ( dInput != 999 ){
	
		//prompt the user for an input
		printf("\nPlease enter one or two-digit integer. Type '999' when you want the program to stop. ");
		scanf("%d", &dInput);

		printf("\n%d%d%d\n", dInput, dInput, dInput);


	 }//end while


	return 0;


}//end main
