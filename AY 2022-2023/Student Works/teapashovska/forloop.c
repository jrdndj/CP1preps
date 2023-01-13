#include <stdio.h>

int main(){
	int i, j, k, dNum;
	printf("\n Insert number:");
	scanf("%d", &dNum);

	for(int i=1; i<=dNum; i++){
		for(int j=1; j<i; j++){
			printf(" ");
		}
		for(int k=i; k<=dNum; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
