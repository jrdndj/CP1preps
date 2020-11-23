//we need stdio to run printf
#include<stdio.h>

/* this function returns int */
int main(){
	//this is an integer variable declaration
	int num;

	printf("\nCurrent value of num: %d\n ", num);

	//interactive input
	printf("Please enter a number: \n");

	//input a number and save it in the address of num
	scanf("%d", &num);

	//we will now print the contents of num
	printf("\nOh you gave me %d!\n", num);

	return 0; //since main returns int, we need to have an integer here
}//endmain
