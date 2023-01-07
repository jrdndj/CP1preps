#include <stdio.h>

int main(void){
	int start_day;
	int num_days;
	int i;

	printf("Calendar of a specific month will be shown.\n");
	printf("Which day if the week does the month start?\n");
	printf("Input figure among following figures.\n");
	printf("0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat \n");
	scanf("%d", &start_day);
	printf("How many days does the month have?\n");
	printf("input figure\n");
	scanf("%d", &num_days);

	printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
	printf("\n");

	for(int i = 0; i < start_day; i++){
		printf("\t");
	}

	for(int i = 1; i <= num_days; i++){
		printf("%d\t", i);

		if ((i+start_day) % 7 == 0){
			printf("\n");
	    }
	}
		    printf("\n");

	return 0;
}