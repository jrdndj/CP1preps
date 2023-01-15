/*
A program that lets the user enter 10 numbers in the array an prints the count of even numbers in it
*/

#include<stdio.h>

int main(){
	//declare an epmty array here
	int dArr[10], dCtr=0, dEvenCtr=0;

	//ask the user an input usin while loop
	while( dCtr<10 ){
		printf("\n Enter a number for slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		//We need to check if the value is even or not
		if( dArr[dCtr]%2==0 ){
			//if true increase the counter of even
			dEvenCtr++;


		}//end if
		dCtr++;


	}//end while loop
	//print the tota numbers of even numbers
	printf("\n You entered %d even numbers. ", dEvenCtr);


	return 0;
}