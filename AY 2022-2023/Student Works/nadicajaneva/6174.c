#include<stdio.h>

int main(){
    //variables here
	int dNum1 = 6174;

	//print the thousands number
	printf("\nFirst digit: %d ", dNum1/1000);

	//print the hundreds number
	printf("\nSecond digit: %d ", (dNum1%1000)/100);

	// print the hundreds number
	printf("\nThird digit: %d ", (dNum1%100)/10);

	//print the last digit
    printf("\nLast diget: %d \n", dNum1%10);

    //print the digits
    return 0;

	
}