#include <stdio.h>
int main()
{
	int counter;
	scanf("%d", &counter);
	for (int i = 0; i<=counter; i++ )
	{
		for (int j = 0; j <= counter; j++)
		{
			if(j>i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}