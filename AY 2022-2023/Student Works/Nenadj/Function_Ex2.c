#include <stdio.h>

void AmountOFB(int);

int main() {
	int nTIMES;
	printf("How many girls you got? -->");
	scanf("%d", &nTIMES);
	AmountOFB(nTIMES);
	return 0;
}

void AmountOFB(int n) {
	if(n == 0)
		printf("Thank you for being realistic!\n");
	else
	{
		while(n>0)
		{
			printf("Error! Stop the cap!\n");
			n--;
		}
	}
}