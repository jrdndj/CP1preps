#include <stdio.h>

int main(){

	int dNum1, dNum2;
	printf("Enter a number:\n");
	scanf("%d", &dNum1);

	printf("Enter a number:\n");
	scanf("%d", &dNum2);
	
	int dprod=0;
	while(dNum1>0){
		dprod=dprod+dNum2;
		dNum1--;
	}
	printf("Answer is: %d \n", dprod);

	return 0;

}//end main
