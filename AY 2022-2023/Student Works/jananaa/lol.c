#include <stdio.h>
int main()
{
	//declare variables
	int i, j,k;

	//print the matrix
	for( i=5; i >= 1; i-- )
	{
		for(j = 5; j > i; j--)
		{
			printf(" ");
		}

		for ( k=1; k<=i; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}//endouterforloop

	return 0;
}