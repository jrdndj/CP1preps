#include<stdio.h>

int main(){
	
	int dFirst, dNumOfDays;
	int day = 1;
	int dCounter;
	
	printf("Which day of the week does the month start with?\n");
	scanf("%d", &dFirst);
	
	printf("\nHow many days does the month have?\n");
	scanf("%d", &dNumOfDays);
	
	// printing the header
	printf("\nSu    Mo    Tu    We    Th    Fr    Sa\n");
	
	// prining spaces for all the days before the day month starts with
	for (int i=0; i<dFirst; i++){
		printf("      ");
	}
	
	
	dCounter = dFirst;
	
	while (day<=dNumOfDays){
		if (day < 10){ // we check if the day has one or two digits so we know how many spaces to print out
			printf("%d     ", day);
		}
		else{
			printf("%d    ", day);
		}
		day++;
		dCounter++;
		if (dCounter == 7){ // If counter is equal to 7, it means we need to print a new line, and reset counter
			printf("\n");
			dCounter=0;
		}
	}
	printf("$\n"); // printing the sign that we finished
	return 0;
}
