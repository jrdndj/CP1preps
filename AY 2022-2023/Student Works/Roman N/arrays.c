#include<stdio.h>

int main(){
	int dArr[10], dOddCtr = 0;

	for (int i = 0; i < 10; i++){
		printf("\n Please enter a [%d] number: ", i);
		scanf("%d", &dArr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++){
		printf("%d ", dArr[i]);
		if (dArr[i] % 2 != 0){
			dOddCtr++;
		}
	}
	printf("\n There are %d odd numbers in your array.\n ", dOddCtr);
	return 0;
}
