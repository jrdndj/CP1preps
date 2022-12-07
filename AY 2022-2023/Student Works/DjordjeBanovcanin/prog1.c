#include<stdio.h>

int main(){

	int dNum1 = 0, dNum2 = 0;

	printf("\n Gib number: ");
	scanf("%d", &dNum1);
	//scanf("%d", &dNum2);

	int hundreds = dNum1/100;
	int tens = dNum1%100/10;
	int ones = dNum1%10;
	
	printf("\n %d %d %d \n", hundreds, tens, ones);



	

	return 0;
}//end main
