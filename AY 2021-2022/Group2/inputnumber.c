/* this program will allow the user to input a number */ 
#include<stdio.h>

int main(){
	//declare variables
	int num1 = 0; 

	//prompt the user to enter a number
	printf("\n Enter a number: ");
	scanf("%d", &num1);

	//print the number the user entered
	printf("\n User entered %d", num1);
	return 0;
}//endmain