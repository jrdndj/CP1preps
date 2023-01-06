#include <stdio.h>

int main(){

	int dNum1;
	int dDigit1, dDigit2;

	scanf("%d",&dNum1);

	dDigit1 = dNum1/10;
	dDigit2 = dNum1%10;

	if (dDigit1 && !dDigit2){
		
		printf("Bazinga\n");
	}
	else if(!dDigit1 && dDigit2){
		printf("Booyeah\n");
	} 						
	else{
		printf("Alakazam\n");
	}

	return 0;
}
