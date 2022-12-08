#include<stdio.h>
//#include<stdbool.h>

int main(){

	
	int dDigit1, dDigit2;

	printf("\nEnter two numbers 1 or 0 ");
	scanf("%d%d", &dDigit1, &dDigit2);

	if(dDigit1 && !dDigit2){
		printf("\nBazinga");
	}
	else {
		printf("\nBooyeah");
	}

	if (dDigit1 && dDigit2){
		printf("\nAlakazam");
	}

return 0;

}