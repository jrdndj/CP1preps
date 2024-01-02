/*
	This program allows the user to enter a set of 5 numbers
	and print * for every even number

	filename: checkevenarray.c
*/
#include<stdio.h>

int main(){
	//declare array
	int dSet[5]; //an array with elements, with index 0 to 4

	//entering one at a time goes thru a for loop
	for(int i=0; i<5; i++){
		printf("\n Enter number %d: ", i+1);
		scanf("%d", &dSet[i]);

		//check if its even, then print *
		if(dSet[i]%2==0){
			printf("\n * \n");
		}//endif
	}//endfor
	return 0;
}//end main