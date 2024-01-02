/*
	Enter 4 numbers in an array
	Inspect each element. 
	If the element is divisible by 4, replace it with 99

	Print the elements of the array
	filename: ninenine.c
*/
#include<stdio.h>

int main(){
	int dNum[4];

	for(int i=0; i<4; i++){
		printf("\n Enter element %d: ", i+1);
		scanf("%d", &dNum[i]);

		//inspect each element
		if(dNum[i]%4 == 0){
			dNum[i] = 99; //replace the value 
		}//endif
	}//endfor


	printf("\n ");
	for(int i=0; i<4; i++){
		printf("%d | ", dNum[i]);
	}
	return 1; 
}//end main

