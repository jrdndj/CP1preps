/* this program allows the user to enter an integer */
#include<stdio.h>

int main(){
	//declare variables
	int nUserInput = 0; 

	//prompt the user for an input
	printf("\n Hello please give me number: ");
	scanf("%d", &nUserInput);

	//to confirm the user input
	printf("\n You gave me %d \n", nUserInput );
	return 0;
}//endmain