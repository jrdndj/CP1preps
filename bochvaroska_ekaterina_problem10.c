#include<stdio.h>
int main(){
	//declaring some values
	int dMatrix1[10][10];
	int dMatrix2[10][10];
	int R1;
	int C1;
	int R2=C1;
	int C2=R1;


	//asking user for an input 
	printf("\nEnter two positive numbers R and C:");
	scanf("%d",&R1);
	scanf("%d",&C1);

if(C1==R2)
{
	//entering the elements of the first matrix:
	printf("\nEnter some values for the first matrix:");
	for(int i=1;i<=R1;i++)
	{
		for(int j=1;j<=C1;j++)
		{
			printf("\nEnter element e[%d][%d]:", i, j);
			scanf("%d ", &dMatrix1[i][j]);
		}
	}


	//printing the elements of the first matrix:
	printf("\nEntered first matrix:\n");
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			printf("%d ", dMatrix1[i][j]); //printing the element
		if(j==R1) 
		    {
			printf("\n");
		    }
		}

	}


	//entering the elements of the second matrix:
	printf("\nEnter some values for the second matrix:");
	for(int i=0;i<R2;i++)
	{
		for(int j=0;j<C2;j++)
		{
			printf("\nEnter element e[%d][%d]:", i, j);
			scanf("%d ", &dMatrix2[i][j]);
		}
	}

	//printing the elements of the second matrix:
	printf("\nEntered second matrix:\n");
	for(int i=1;i<=R2;i++)
	{
		for(int j=1;j<=C2;j++)
		{
			printf("%d ",dMatrix2[i][j]); //printing the element
		if(j==R2) 
		{
		printf("\n");
		}
		}

	}
	//bulding the third matrix
	int dMatrix3[R1][C2];
	int sum=0;
	printf("The multiplication of the matrices is:");
	for(int i=0;i<R1;i++){
		for(int j=0;j<C2;j++)
		{
			for(int k=0;k<R2;k++){
			 sum=+dMatrix1[i][k]*dMatrix2[k][j];
		    }
		dMatrix3[i][j]=sum;
		sum=0;
		}
	}

	//printing the elements of the recieved matrix 
	printf("\nEntered second matrix:\n");
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C2;j++)
		{
			printf("%d ",dMatrix3[i][j]); //printing the element
		}//endfor
		printf("\n");
	}//endfor
}
else
{
	printf("\n Not possible for the given rows and columns!");
}

	return 0;
}
