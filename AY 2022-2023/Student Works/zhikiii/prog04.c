/*
multiplicate two numbers withous using the * symbol.
*/

#include <stdio.h>

int main(){
/*
	printf("Enter two numbers: ");
	int dNum1, dNum2, dSum=0;
	scanf("%d %d", &dNum1, &dNum2);

	while(dNum2>0){
		dSum+=dNum1;
		dTemp--;
	}
	printf("%d \n", dSum);
*/
	//print division wothout using the / symbol

	printf("Enter two numbers: ");
	int dNum1, dNum2, dSum=0, dCount=0;
	scanf("%d %d", &dNum1, &dNum2);
	int dTemp=dNum2;
	do{
		dNum1-=dNum2;
		dTemp--;
		dCount++;
	} while(dTemp>0);

	printf("%d \n", dCount);

	return 0;
}