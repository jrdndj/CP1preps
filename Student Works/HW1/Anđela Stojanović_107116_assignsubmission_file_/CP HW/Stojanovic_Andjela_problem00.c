#include <stdio.h>

int main()
{
	int a,b,C;
	printf("Provide side a!");
	scanf("%d", &a);
	printf("Provide side b!");
	scanf("%d", &b);
	printf("Provide angle C!");
	scanf("%d", &C);
	if(C == 90)
	{
		printf("This is right triangle.");
	}
	if(C<90 && C>0)
	{
		printf("This is acute triangle.");
	}
	if(C>90)
	{
		printf("This is obtuse triangle");
	}
}
