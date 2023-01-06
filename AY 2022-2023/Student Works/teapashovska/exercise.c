#include <stdio.h>

int main(){
 
	//declare data types here
	int dNum1, dFirst, dSecond, dLast;
	//ask the user for an input
	printf("\n Give a 3-digits number: ");
	scanf("%d", &dNum1);

	//extract 5
	printf("\n %d is the first digit. \n", dNum1/100);

	printf("\n %d is the second digit. \n", (dNum1-((dNum1/100)*100))/10);

	printf("\n %d is the third digit. \n", (dNum1-((dNum1/100)*100))%10);
	
	return 0;
}//end main