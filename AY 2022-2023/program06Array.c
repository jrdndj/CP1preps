/*
	Ask the user to enter 10 values 
	and then print the number of odd values in it.
*/

#include<stdio.h>

int main(){
	//declare an array
	int dArr[10], dEvenCtr=0;

	//ask the user for an input
	for(int dCtr = 0; dCtr<=10; dCtr++){
		printf("\n Enter a number in slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		
		//check if the number is even
		if (dArr[dCtr]%2 == 0){
			dEvenCtr++;
		
		}//endCheckEven

	}//endForLoop
	printf("\n There are %d even numbers in our array. \n ", dEvenCtr);

	return 0;
}