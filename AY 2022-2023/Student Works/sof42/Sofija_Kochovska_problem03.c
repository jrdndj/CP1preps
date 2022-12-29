#include<stdio.h>
int main(){
//declare variables
	int dStart, dDaysTotal;

//prompt for input
printf("\nCalendar of a specific month will be shown.\n");
printf("\nInput figure among following figures.");
printf("\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
printf("\nWhich day of the week does the month start?\n");
	scanf("%d", &dStart);
printf("\nHow many day does this month have?\n");
	scanf("%d", &dDaysTotal);

//print the calendar
printf("\nSu\tMo\tTu\tWe\tTh\tFr\tSa\n");
	for(int i=0; i<dStart; i++){//for1
		printf("\t");
	}//endfor1
	for(int dDate=1; dDate<=dDaysTotal; dDate++){//for2
		printf("%d\t", dDate);
			if((dDate+dStart)%7==0){
				printf("\n");
			}//endif
	}//endfor2
printf("\n\n");
return 0;
}//endmain