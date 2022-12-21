#include<stdio.h>
int main(){

	int dday, dys, d=1;

	printf("\nCalendar of specific month will be shown.\n");
	printf("Which day of teh week does teh month start?\n");
	printf("0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5:Fri, 6: Sat\n");
	scanf("%d", &dday);

	printf("How many days does the month have?\n");
	scanf("%d", &dys);

	printf("\n");
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\t");
	printf("\n");

	for(int i=0; i<6; i++){

		for(int j=0; j<7; j++){

			if(i==0 && j<dday){
				printf(" ");
			} else {

				if(d<=dys){
					printf("%d", d++);
				}

			}

			printf("\t");

		}

		printf("\n");

	}
	
	return 0;

}//end main
