#include<stdio.h>
#include <sys/types.h> 
int main()
{
	int dInt; //ah yes the integer integer, what a name!
	
	printf(">:| Enter an integer from 1 to 10: ");
	scanf(" %d", &dInt);
	if (dInt < 1 || dInt > 10) //if user didn't input proper value...
	{
		printf("No.");
		return 1;
	}
	
	int d2dMatrix[dInt+1][10];
	//				x      y
	

	//MATRIX GENERATOR
	//d2dMatrix[0][0] = 1; //top left corner is 1
	
	//write first row to matrix
	for(int x = 1;x<dInt+1; x++)
	{
		d2dMatrix[x][0] = x; //write row from 1 to dInt
	}
	//write first collumn to matrix
	for (int y = 0; y<10; y++)
	{
		d2dMatrix[0][y] = y+1;
	}
	
	for (int x = 1; x<dInt+1; x++) //for every unwritten row
	{
		for(int y = 1; y<10; y++) //for every unwritten collumn
		{
			d2dMatrix[x][y] = d2dMatrix[0][y] * d2dMatrix[x][0]; //calculate product
		}
	}
	
	//END MATRIX GENERATOR
	
	//PRINTER========================
	//print first row
	printf("x ");
	for(int i = 1;i<=dInt; i++)
	{
		printf(" ");
		printf("%d ", i);
	}
	printf("\n");
	//print matrix
	for (int y = 0; y<10; y++) //for every collumn
	{
		for(int x = 0; x<dInt+1; x++) //for every row
		{
			printf("%d",d2dMatrix[x][y]);
			if(d2dMatrix[x][y]<10) printf(" ");
			printf(" ");
		}
		printf("\n");
	}
	//END PRINTER====================
	return 0;
} //end main
