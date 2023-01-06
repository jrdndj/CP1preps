#include <stdio.h>

int main() {

		int num=0;

		printf("\nEnter a number: ");
		scanf("%d", &num);

		for (int i=0; i<num; i++) {
			for (int j=0; j<num; j++) {
				if ( j <=i ) {
					printf("*");
				}
			}
			printf("\n");
		}
		for (int i=num-2; i>=0; i--) {
			for (int j=i; j>=0; j--) {
					printf("*");
			}
			printf("\n");
		}
	return 0;
}