/* 
	A C program that gets an integer input from a user 
	This input decides how many times this program will run 
*/
#include<stdio.h>

int main(){
	//declare variables 
	int dInput = 0;

	//prompt the user for an input
	printf("\n Please enter a negative integer: ");
	scanf("%d", &dInput);

	//for loop with dInput as the terminator
	for( int dCtr = 0; dCtr >= dInput; dCtr-- ){
		printf("\n %d", dCtr);

	}//endfor
	return 0; 
}