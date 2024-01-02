/*
	A program that allows the user to enter a number
	from 1 to 5. Then the program checks the number based 
	on the following values:
	if its 2 or 4 (aka even), it will print Bazinga
	if its 1,3,5 (aka odd), it will print Kablam

	We will be using switch, thus we cannot use the % operator

	filename: switches.c
*/
#include<stdio.h>

int main(){
	//declare variables
	int dInput; 

	//tell the user to enter a number
	printf("\n Please enter a number: ");

	//actually get the input 
	scanf("%d", &dInput );

	//we are going to use switch to check dInput
	switch(dInput)
	{
		case 2 : 
		case 4 : {
			printf("\n Bazinga! \n"); 
			break;
		}//end case 4 

		case 1:
		case 3: 
		case 5: {
			printf("\n Kablam! \n");
			break;
		}//end case 5 
		default: {
			printf("\n I do not recognize this input. \n "); 
			break;
		}//end default
	}//endswitch 
	return 0; 
}//end main




