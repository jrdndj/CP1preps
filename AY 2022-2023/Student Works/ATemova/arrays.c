/* 
	User enters 10 numbers in an array
	Print the elements of the array
	Print the count of even numbers in the array
*/

#include<stdio.h>

int main(){
	//declare variables
	int dArr[10], dEvenCrt=0;

	//ask the user to enter numbers into the array
	for (int i = 0; i<10; ++i){
		printf("\n Enter a number for slot %d:", i);
		scanf("%d", &dArr[i]);

		//check if the input is even
		if (!(dArr[i]%2)){
			dEvenCrt++;
		}// end checkeven
	}//end for loop inputs

	printf("\n");

	//to print the elements we need for the loop
	for(int i=0; i<10; i++){
		printf("%d", dArr[i]);
	}//end for print loop

	return 0;
}
