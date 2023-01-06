#include <stdio.h>

int main()
{
	int n,min;
	printf("Enter a value \n");
	scanf("%d",&n);
	min=n;
	for(int i=1;i<10;i++)
	{
		printf("Enter a value\n");
		scanf("%d",&n);
		if(n<min)
		{
			min=n;
		}
	}
	printf("The smallest value is %d \n",min);
	return 0;
}