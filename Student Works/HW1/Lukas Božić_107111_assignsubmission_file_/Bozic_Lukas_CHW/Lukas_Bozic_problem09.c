
#include<stdio.h>

void main() {
	//declaring variables
	int dWeekDay, dNumOfDays;
	//prompt the user for information
	printf("Enter a number in front of the day the month begins with:\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
	scanf_s("%d", &dWeekDay);
	printf("Enter how many days does the month have: \n");
	scanf_s("%d", &dNumOfDays);
	//print the calender
	printf("Su Mo Tu We Th Fr Sa\n");
	for (int i = 0; i < dWeekDay; i++) {
		printf("   ");
		}
	for (int i = 1; i <= 7 - dWeekDay; i++) {
		printf("%d ", i);
	}
	printf("\n");
	int i = 1;
	int j = 8 - dWeekDay;
		while (j <= dNumOfDays) {
			printf("%d  ", j);
			if (i % 7 == 0) {
				printf("\n");
			}
			j++;
			i++;
		}
}