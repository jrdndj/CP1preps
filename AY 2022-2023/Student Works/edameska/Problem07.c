#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter a value \n");
	scanf("%d",&n);
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j<=n; j++)
		{
			printf("%d \t", i*j);
		}
		printf("\n");
	}
	return 0;
}