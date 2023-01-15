#include <stdio.h>

int main(void){
	int dNum, sum = 0, count = 0;

	while(dNum != 0){
			printf("Enter a positive integer (or 0 to finish): ");
			scanf("%d", &dNum);
		if (dNum < 0){
			printf("ERROR: please enter a positive integer\n ");
		} else {
			sum += dNum;
			count++;
		}

		if(count == 0){
			printf("NO AVERAGE\n");
		}else {
			printf("The average of the positive integers is: %.2f\n", (double) sum / count);
		}
	}
			return 0;

}
