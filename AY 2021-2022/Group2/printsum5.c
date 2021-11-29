#include<stdio.h>

int main(){
	//declare variables
	int nUserInput=0 , nSum=0;

	//logic must have print and sum inside the for loop
	for(int nCounter = 0; nCounter<5; nCounter++ ){
		printf("\n Enter number: ");
		scanf("%d", &nUserInput);

		//print the sum using an accumulator
		nSum += nUserInput;
		//nSum = nSum + nUserInput; 
		printf(" Latest sum is %d\n", nSum);

	}//endfor
	//print the final sum
	printf("\n The final sum is %d\n", nSum);

	return 0; 
}//endmain