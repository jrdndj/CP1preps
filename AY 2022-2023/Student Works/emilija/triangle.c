//enter num between 1 to 10
#include <stdio.h>
int main()
{
	int dNum;
	printf("\nEnter number between 1 and 10: ");
	scanf("%d", &dNum);

	for(int i=0; i<=dNum; i++){
		for(int k=0; k<i; k++){
			printf(" ");
		}
		for(int p=i; p<dNum; p++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}