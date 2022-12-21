#include <stdio.h>
#include <string.h>

int main() {

	int num = 0;
	int input = 0;
	int sum = 0, counter = 0;

	while ( 1==1 ) {
		printf("\nEnter a positive integer: ");
		scanf("%d", &num);


		if ( num < 0) {
			printf("\nERROR!\n");
			continue;
		}
		else if ( num > 0 ) {
			sum+=num;
			counter++;
			continue;
		}
		else if ( num == 0 && sum == 0 ) {
			printf("\nNO AVERAGE\n");
			break;
		}
		else if ( num == 0 && sum>0 ) {
			double average = sum/counter;
			printf("\nThe average of the positive integers is %f\n", average);
			break;
		}
		continue;
	}




	return 0;
}