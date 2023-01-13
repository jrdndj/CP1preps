#include <stdio.h>

int main()
{
	int n;
	while(n!=999){
	printf("Enter one or 2 digit integer\n");
	scanf("%d",&n);
	for (int i = 0; i < 3; ++i)
	{
		printf("%d",n);
	}//end for
	printf("\n");
	}//end for
	return 0;
}