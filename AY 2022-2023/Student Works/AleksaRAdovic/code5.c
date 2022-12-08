#include <stdio.h>

int main(){


	int dNum1, dNum2, dSum;

	scanf("%d", &dNum1);
	scanf("%d", &dNum2);
	dSum = dNum1;
	for(int i = 1; i < dNum2; i++){

		dSum+=dNum1;

	}
	printf("sum is %d \n", dSum);


	return 0;
}
