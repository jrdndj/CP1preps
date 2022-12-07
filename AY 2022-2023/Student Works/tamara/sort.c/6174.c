
#include <stdio.h>

int main(){
	int dNum1 = 6174;

	//print the thousands number
	printf("\nFirst digit: %d", dNum1/1000);

	//print hundreds number
	printf("\nSecond digit: %d", (dNum1%1000)/100);

	//print the hundreds number
	printf("\nThird digit: %d", (dNum1%100)/10 );
	//print the last digit
	printf("\nLast digit: %d\n", dNum1%10);

	//print the digit
	return 0;




}