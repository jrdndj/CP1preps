#include <stdio.h>

int main()
{
	int dNum;
	printf("\nInput a number: ");
	scanf("%d", &dNum);

	for(int i=0; i<dNum; i++) {

		for (int k=dNum; k>i; k--) {
				printf("*");
		}

		printf("\n");

		for (int j=0; j<=i; j++) {
			printf(" ");
		}
	}

	return 0;
}