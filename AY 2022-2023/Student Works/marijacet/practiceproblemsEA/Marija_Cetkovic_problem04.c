#include <stdio.h>

int main(){
	//declare variables
	int dNum;
	//take user input for number of *
	scanf("%d",&dNum);

	//were making two matrices for two triangles one on top of another
	for (int i = 0; i <= dNum; ++i) //goes until i = dNum
	{
		for (int j = 0; j < i; ++j) //prints * in lower diagonal
		{
			printf("*");
		}//endinnerfor
		printf("\n"); //switch to new row
	}//endouterfor

	//second nested for (second matrix) thats below the upper triangle
	for (int i = 0; i < dNum-1; ++i) //dimension now is dNum-1 so we have one less
	{
		/*to get this at every row number of * is equal to the dimension (here 4) minus the current row
		****  4 * (4-0)
		***   3 * (4-1)
		**    2    4-2
		*     1    4-3

		*/
		for (int j = 0; j < dNum-1-i ; ++j) 
		{
			printf("*");
		}//endinnerfor
		printf("\n"); //switch new row
	}//endouterfor

	return 0;
}//endmain