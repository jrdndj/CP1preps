#include <stdio.h>

int main() {

	int num = 0;

	while ( 1==1 ) {
		printf("\nEnter one or two digit numbers: ");
		scanf("%d", &num);

		if ( num == 999 ) {
			break;
		}
		else if ( num > 99 ) {
			printf("\nPlease enter only one or two digit numbers\n");
			continue;
		}
		else {
			printf("%d%d%d", num, num, num);
			continue;
		}
	} 
	return 0;
}