/*
 The program accepts a number from the user that sets
 the length or number of & a program prints
 However for ever 2 &, they should be printed in a new line

 e.g. user = 6
 	output should be &&
 				     &&
 				     &&
 	filename: breakampersand.c
*/
#include<stdio.h>

int main(){
	//declare variables
	int dLength; 

	printf("\n How many \'&\' would you like to print? \n");
	scanf("%d", &dLength);

	for(int i=0; i<dLength; i++){
		if(i%2==0){
			printf("\n");
		}//endif
		printf("&");
	}//end for

	printf("\n\n");

	//using i=1
	for(int i=1; i<=dLength; i++){
		printf("&");
		if(i%2==0){
			printf("\n");
		}//endif
	}//end for

	return 0;
}//endmain