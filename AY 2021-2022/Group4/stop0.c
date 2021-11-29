/* A program that will keep accepting an integer number. It will only stop if you enter the integer 0. As you enter an integer it adds to the total sum. You can only use 2 variables. */
#include<stdio.h>

/*
int main(){
	//you can only use two variables
	int nUserInput = 1, nSum = 0; 

	while( nUserInput != 0 ){
		//anything inside while always repeat if the condition is true
		printf("\n Enter a number. Press 0 to stop: ");
		scanf("%d", &nUserInput);
		nSum = nSum + nUserInput;
		//nSum += nUserInput;
	}//endwhile

	//when im here that means there was a 0 input
	printf("\n The total sum is %d \n", nSum);
	return 0;
}//endmain
*/

int main(){
	//you can only use two variables
	int nUserInput = 1, nSum = 0; 

	do{
		//anything inside will execute first then check the condition
		printf("\n Enter a number. Press 0 to stop: ");
		scanf("%d", &nUserInput);
		nSum = nSum + nUserInput;
		//nSum += nUserInput;
	}while( nUserInput != 0 );

	//when im here that means there was a 0 input
	printf("\n The total sum is %d \n", nSum);
	return 0;
}//endmain