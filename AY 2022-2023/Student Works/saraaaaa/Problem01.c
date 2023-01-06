#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int i, j, k;
	for( i = n; i >= 1; i-- )
	{
		for(j = n; j>i; j-- )
		{
			
			printf(" ");	
		}

		for(k = 1; k<=i; k++ )
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}