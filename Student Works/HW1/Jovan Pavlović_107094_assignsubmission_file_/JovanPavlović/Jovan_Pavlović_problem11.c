#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y;
	printf("Enter two positive numbers R and C: ");
	scanf("%d %d",&x,&y);
	if (x > 10 || x < 0 || y > 10 || y < 0 )
	{
		printf("Error matrices can be at most 10x10\n");
		return 1;
	}
	int dMatrix[x][y];
	int dMatrix2[y][x];

	printf("Enter elements of the first matrix (%d x %d):\n",x,y);
	for (int i = 0; i < x; ++i) // input matrix elements
	{
		for (int j = 0; j < y; ++j)
		{
			printf("Enter element e%d%d: ",i,j);
			scanf("%d",&dMatrix[i][j]);
		}
	}

	for (int i = 0; i < x; ++i) // print matrix
	{
		for (int j = 0; j < y; ++j)
		{
			printf("%d ",dMatrix[i][j]);
		}
		printf("\n");
	}


   // matrix2
	printf("Enter elements of the second matrix (%d x %d):\n",x,y);
	for (int i = 0; i < y; ++i) // input matrix elements
	{
		for (int j = 0; j < x; ++j)
		{
			printf("Enter element e%d%d: ",i,j);
			scanf("%d",&dMatrix2[i][j]);
		}
	}

	for (int i = 0; i < y; ++i) // print matrix
	{
		for (int j = 0; j < x; ++j)
		{
			printf("%d ",dMatrix2[i][j]);
		}
		printf("\n");
	}


	int dMatrix3[x][y]; // product matrix
	for (int i = 0; i < x; ++i)
	{
		int dotProd = 0;
		for (int j = 0; j < y; ++j)
		{
			dotProd += dMatrix[i][j] * dMatrix2[j][i];
		}
		dMatrix3[i][i] = dotProd;
		int dotProd2 = 0;
		for (int j = 0; j < y; ++j)
		{
			dotProd2 += dMatrix[i][j] * dMatrix2[j][i+1];
		}
		dMatrix3[i+1][i] = dotProd2;
	}
	printf("Multiplication matrix is: \n ");
	for (int i = 0; i < x; ++i) // print matrix
	{
		for (int j = 0; j < y; ++j)
		{
			printf("%d ",dMatrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}