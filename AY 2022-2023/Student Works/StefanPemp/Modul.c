#include <stdio.h>

int main(){

	int dNum3, dFirst, dMiddle, dLast;
	printf("\n Enter a three digit number: \n");
	//567
	scanf("%d", &dNum3);
	if (dNum3>99){
		dFirst = dNum3/100;
		//567/100=5
		printf("\n  First: %d \n", dFirst);
		dMiddle = dNum3-(dFirst*100);
		//567-(5*100)/10= 567-(500)/10=67/10=6
		printf("\n  Middle: %d \n", dMiddle/10);
		dLast = dMiddle = dNum3-(dFirst*100);;
		//567-(5*100)/10= 567-(500)/10=67%10=7
		printf("\n Last: %d \n", dLast%10);
	}

	}//end main