#include<stdio.h>

int main(){

	printf("\nInsert a dimension: ");
	int dN;
	scanf("%d", &dN);

	for (int i = 0; i <= dN; i++){

		for (int j = 0; j < i; j++){
			printf(" ");
		}

		for (int k = 0; k <= dN-i; k++){
			printf("*");
		}
		printf("\n");
		
	}
}