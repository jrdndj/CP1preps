/*
	This program allows the user to enter a number
	and the number determines length of a line
	composed of several ampersands '&' 

	e.g. if input = 3 then print &&&
		if input = 6 then print &&&&&& 
	filename: ampersand.c 
*/

#include<stdio.h>

int main(){
	//declare variables 	
	int dLength; 

	printf("\n How many \'&\' do you wish to print?: \n ");

	scanf("%d", &dLength);

	for(int i=1, j=0; i<=dLength; i++, j++){
		printf("&");
		if(j<i){
			printf("\n");
		}//end if
		j = 0;
	}//end for

	//clearline
	printf("\n");

	return 0;
}//end main




