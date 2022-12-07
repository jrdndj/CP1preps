#include <stdio.h>

int main() {
int dInput;
printf("Give int number: ");
scanf("%d", &dInput);

for (int i = 0; i <=dInput; i++)
{
	int j=0;
	do
	{
		printf(" ");
		j++;
	} while (j<=i);
	
	int k=dInput-i;
	while(k>0)
	{
		printf("*");
		k--;
	}

	if (i==dInput) break;
	printf("\n");
}

return 0;
}