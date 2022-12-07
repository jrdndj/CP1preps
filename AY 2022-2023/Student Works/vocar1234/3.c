/*ask the user to enter number fomr 1 to 10. then the program prints an inverted right triangle with the input number as base
uses asterisks
hint use 3 for loops
*/

#include <stdio.h>

int main(){
	int dNum1;
	printf("\n give me a number from 1-10:" );
	scanf("%d", &dNum1);
	for (int i=0; i<dNum1; i++){

		for (int k=dNum1; k>i; k--){
			printf("*");
			}
			for (int j=0; j<i; j++){
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}