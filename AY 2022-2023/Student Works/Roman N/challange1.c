#include<stdio.h>

int main(){
	int dArr[10], dOddCtr = 0;

	for (int i = 0; i < 10; i++){
		printf("\nPlease enter [%d] array number: ", i);
		scanf("%d", &dArr[i]);
	}
	printf("\n");
	printf("Your array is: ");
	for (int i = 0; i < 10; i++){
		printf("%d ", dArr[i]);
	}
	printf("\n");
	printf("\n");

}