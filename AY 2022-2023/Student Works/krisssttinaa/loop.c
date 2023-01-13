#include <stdio.h>

int main(){
	//declare data types here
	int dNum, dCtr, dCtr1, dCtr2;

	//ask the user for input
	printf("\n Give me an integer from 1 to 10: ");
	scanf("%d", &dNum);

	//print pattern with for loop
	for (int dCtr = 1; dCtr <= dNum; dCtr++){
		//first inner for loop
		for (int dCtr1 = 1; dCtr1 < dCtr; dCtr1++){
		printf(" ");
		}//endofloop

		//second inner for loop
		for (int dCtr2 = dCtr; dCtr2 <= dNum; dCtr2++){
		printf("*");
		}//endofloop
	printf("\n");
	}
}