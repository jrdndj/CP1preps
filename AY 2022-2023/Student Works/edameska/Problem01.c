#include <stdio.h>

int main()
{
	int n;
	printf("Enter a value for n\n");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		for (int j = n; j >=i; j--)//prints *
		{
			printf("*");

		}//end innerfor
		printf("\n");
		for (int j = 1; j <=i; j++)//prints spaces between
		{
			printf(" ");
		}//end innerfor
		
	}//end outerfor
	return 0;
}