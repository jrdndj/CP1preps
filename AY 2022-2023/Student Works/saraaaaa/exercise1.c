#include<stdio.h>

int main(){

	int dNum1 = 6174;

	//print the 6---
	printf("\n First digit: %d", dNum1/1000);

	//print the -1--
	//printf("%d", dNum1-((dNum1/1000)*1000)/100);
	printf("\n Second digit: %d", (dNum1%1000)/100);

	//6174, I just need 74
	//just print 7
	printf("\n Third digit: %d", (dNum1%100)/10);

	//print the last digit
	printf("\n Last digit: %d \n", dNum1%10);	

	return 0;
}