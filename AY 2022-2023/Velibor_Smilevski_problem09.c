#include <stdio.h>

int main(){
	int dArr[10], dNum;

	printf("Enter 10 numbers: ");
	scanf("%d", &dNum);

		for (int i = 0; i < dNum; i++){
		scanf("%d", &dArr[i]);
	}

	printf("Array of the even elements: ");
	for (int i = 0; i < dNum; i++){
		if(dArr[i]%2 == 0){
			printf(" %d", dArr[i] );
		}
	}
	printf("\n");

	printf("Array of the odd elements: ");
	for(int i = 0; i < dNum; i++){
		if(dArr[i]%2 != 0){
			printf(" %d", dArr[i]);
		}
	}
	printf("\n");
}