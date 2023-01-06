#include <stdio.h>

int main () {

	int num = 0;

	printf("\nPlease enter a number between 1 and 10: ");
	scanf("%d", &num);

	if ( num > 0 && num <=10 ) {
		for (int i=0; i<=10; i++) {
			int product = 1;
			for (int j=0; j<=num; j++) {
				if ( i > 0 && j > 0) {
				product = i*j;
				printf("\t%d", product); 
				}
				else if ( i == 0 && j == 0){
					printf("\tx");
				}
				else if ( i == 0 && j > 0) {
					printf("\t%d", j);
				}
				else if ( j == 0 && i > 0) {
					printf("\t%d", i);
				}
			}
			printf("\n");
		}
	}
	return 0;
}