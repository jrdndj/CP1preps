#include<stdio.h>
#include<stdbool.h>
int main() {

int dNum1;
printf("\n Please enter number: ");
scanf("%d", &dNum1);
for (int i = 0; i < dNum1; ++i)
{	
	for (int j = 0; j < i; ++j)
	{
		printf(" ");
	}
	for (int j = i; j < dNum1; ++j)
	{
		printf("*");
	}
	printf("\n");
}

} //endmain