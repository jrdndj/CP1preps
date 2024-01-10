#include <stdio.h>

int main(){
	//declare variables
	int dStart, dDays, dCount = 1;
	
	//take user input for dStart and dDays
	printf("What day does it start?\n");
	printf("0-Sun, 1-Mon, 2-Tue, 3-Wed, 4-Thu, 5-Fri, 6-Sat.\n");
	scanf("%d",&dStart);
	printf("How many days?\n");
	scanf("%d",&dDays);

	if (dDays>=28 && dDays<=31){ //check validity of dDays

		//print header
		printf("Su   Mo   Tu   We   Th   Fr   Sa   \n");
		for (int i = 0; i < dStart; ++i){

			printf("     "); //print blank space until dStart
		}

		//variable j increases starting from dStart
		//used to check whether to change to next row
		int i,j;
		for (i = 1, j=dStart; i <= dDays ; ++i, ++j){//increase i until dDays is reached

			printf("%2d   ", i); //print the day 
			//use 2d so one and two digit numbers get evened out, not to mess up the pattern

			if (j%7==6){ //if saturday is reached (6) 
				printf("\n"); //printnewline
			}
		}
		printf("\n");//print new line for end
	}//endif
	else{
		printf("Enter valid number of days in a month.\n");
	}//endelse

	return 0;
}//endmain