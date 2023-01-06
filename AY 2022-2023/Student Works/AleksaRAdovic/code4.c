#include <stdio.h>

int main(){


	int dNum1;

	printf("\n Give dimenisons: ");
	scanf("%d", &dNum1);

	for(int i=1; i<=dNum1; i++){

		for(int j=1; j<i; j++){
			printf(" ");
		}

	for(int k=i; k<=dNum1; k++){

			printf("*");
		}
		printf("\n");
	}
	return 0;
}
