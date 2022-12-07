#include <stdio.h>
int main(){
	int dNum1,dNum2,dNum3;
	int znj=1;
	// ask the user for an input
	printf("\n Hey, give me a number 1:");
	scanf("%d", &dNum1);
	// ask the user for number 2
	printf("\n Hey, give me number 2:");
	scanf("%d", &dNum2);
	dNum3=dNum2;
	do {
		dNum1=dNum1-dNum3;
		znj++;
	}while (dNum1>dNum3);
	printf ("the result is %d\n", znj);
	return 0;
}