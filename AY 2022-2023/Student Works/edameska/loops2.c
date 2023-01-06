#include <stdio.h>

int main()
{
	int dFactor1, dFactor2;

	//print multiplication table in for loop
	//outer for loop for rows
	for( dFactor1=1; dFactor1<=10; dFactor1++ )
	{
		//inner for loop for columns
		for ( dFactor2=1;dFactor2<=dFactor1; dFactor2++)
		{
			printf(" %d \t", dFactor1*dFactor2);
		}//end inner for loop
		//prints new line before new row
		printf("\n");
	}//end outer for loop

	return 0;
}