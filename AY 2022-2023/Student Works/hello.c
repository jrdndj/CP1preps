#include <stdio.h>

int main(){
	//put local variables here
	int dNum1=0;
	int dNum2=0; 
	//ask the user for an input
	printf("\nHey,give me a number 1:");
	scanf("%d", &dNum1);

	//ask the user for an input2
	printf("\nEnter the number 2:");
	scanf("%d", &dNum2);

	//if i want to print dNum
	printf("\nThe number is %d %d",dNum1,dNum2);

	//if I want to print dNum
	if( dNum1 > dNum2 ){
		printf("\nThe bigger number is %d ", dNum1);
	}//end if dNum1 > dNum2
	else {
		printf("\nThe bigger number is %d" , dNum2);
	}//endelse

	//to know if even
	if( dNum1 % 2 == 0 ){
		printf("\n %d is even.", dNum1);
	}//endchecheven
	else printf("\n %d is odd.", dNum2);
	//if statement to check if a number is odd or even without using modul
	if( dNum1 /2 == (dNum1/2)*2)
	{
		printf("\nThe number %d is even", dNum1);
	} 
	else
	{
		printf("\nThe number %d is odd.",dNum1);
	}//endelse


	//this is a command
	printf("Hello World!\n");
	return 0;
}//endmain

