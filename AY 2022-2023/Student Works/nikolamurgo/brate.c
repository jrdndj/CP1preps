#include <stdio.h>

int main(){

	int dNum1=0;
	
	printf("Hey, give me a number: ");
	scanf("%d", &dNum1);

	if ( dNum1 / 2 * 2 == dNum1 ){
		printf("%d is an even number. \n", dNum1);
	} else {
		printf("%d is an odd number. \n", dNum1);
	}
	return 0;
}
