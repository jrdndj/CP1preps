#include <stdio.h>

int main() {


		for (int i=10000000; i>0; i--) {
			for (int j=100000; j>0; j--) {
				if ( i>=j ) {
					printf("%d ", i);
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	return 0;
}