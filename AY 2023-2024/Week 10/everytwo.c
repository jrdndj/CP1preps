/*
	ask the user for how many & to print
	print them in one line
	however create a new line every two &s

	filename: everytwo.c 
*/
#include<stdio.h>

int main(){
	//declare variables
	int dLength; 

	printf("\n How many \'&\' do you want to print? \n");
	scanf("%d", &dLength);

	for(int i=0; i<dLength; i++){
		if(i%2==0){ //if even
			printf("\n");
		}//endif
		printf("&");
	}//endfor

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



