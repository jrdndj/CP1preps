#include <stdio.h>

int main(){
	//declare variables
	int dNum;

	//take user input
	scanf("%d",&dNum);

	//print header for the table
	printf(" x ");
	for (int i = 1; i <= dNum; ++i)
	{
		printf("%2d ",i); //print in the same row
	}//endfor

	printf("\n");//switch new row

	//nested for loop for multiplication table
	for (int i = 1; i <= 10; ++i) //go until 10
	{	printf("%2d ",i ); //print side header
		for (int j = 1; j <= dNum; ++j) //go until dNum
		{
			//print multiplication
			printf("%2d ",i*j); //use 2d to have two spaces for numbers, looks better
		
		}//endinnerfor
		printf("\n"); //switch new row
	}//endouterfor

	return 0;
}//endmain