#include <stdio.h>

int main()
{
	int Num;
	printf("Enter a value \n");
	scanf("%d",&Num);
	for (int i = 0; i < Num; ++i)
	{
		for (int j = 0; j <=i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = Num; i >0; i--)
	{
		for (int j = 0; j <=i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}