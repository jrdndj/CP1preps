/*
A program that lets the user enter 10 numbers in an array
and prints the count of even numbers in it.
*/
#include<stdio.h>

int main(){
	//seclare an empty integer array here
	int dArr[10], dCtr=0, dEvenCtr=0;

	//lets ask the user for an input using while loops
	while( dCtr<10 ){
		printf("\n Enter a number for a slot %d: ", dCtr);
		scanf("%d", &dArr[dCtr]);
		//we need to check the value if it is even or not
		if( dArr[dCtr]%2==0 ){
			//if true increase the count of even
			dEvenCtr++;
		}//endif
		dCtr++;
	}//endwhile

	//lets print the total number of even numbers
	printf("\n You entered %d even numbers.", dEvenCtr);

	return 0;
}
