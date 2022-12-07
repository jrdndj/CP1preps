#include <stdio.h>

int main(){
	int x, y;
	printf("Please enter a number\n");
	scanf("%d", &x);
	printf("Please enter another number\n");
	scanf("%d", &y);

	if (x==1 && y==0)
	{
		printf("Bazinga\n");
	}
	else if (x==0 && y==1)
	{
		printf("Booyeah\n");
	}
	else if ((x==1&&y==1) || (x==0&&y==0))
	{
		printf("Alakazam\n");
	}
	else printf("Please enter only 0 or 1.\n");


}