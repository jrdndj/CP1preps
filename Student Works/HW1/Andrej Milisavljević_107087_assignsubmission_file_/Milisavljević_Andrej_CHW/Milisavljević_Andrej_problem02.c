#include<stdio.h>

int main()
{
	int dN;

	printf("Enter a value pls: ");
	scanf("%d", &dN);
	for(int i = 1; i <= dN; i++)
	{
		printf("N=%d\n", i);
		for(int j = 1; j<=i; j++)
		{
			for(int k = 0; k < j-1; k++)
			{
				printf(" ");
			}
			for(int l = 0; l <= i-j; l++)
			{
				printf("*");
			}

			printf("\n");
		}
	}
//I didn't use hungarian notation for the counters as they are local variables 
//(and obviously integers)

    return 0;
	
} //end main