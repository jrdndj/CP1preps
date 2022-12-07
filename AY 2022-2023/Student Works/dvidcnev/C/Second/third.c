#include <stdio.h>

int main() {
	int dNum=0; //Initialize Num and Num2

	printf("Give me a number between 1 and 10: "); //Asking for Number
	scanf("%d", &dNum); //Entering the number for Num

	if ( dNum <= 10 || dNum > 0 ) {
		for (int i=dNum; i>0; i--) {
			for (int j=dNum; j>0; j--) {
				if ( i>=j ) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else {
		printf("ERROR!");
	}
	return 0;
}