#include <stdio.h>

int main(){
	//declare variables
	int dNum1 = 0;

	//ask for input
	printf("\n Please enter a four digit integer: ");
	scanf("%d", &dNum1);

	//thousands
	printf("\n%d", dNum1/1000);

	//hundreds
	printf("\n%d", (dNum1%1000)/100);

	//tens
	printf("\n%d" , (dNum1%100)/10);

	//ones
	printf("\n%d" , dNum1%10);
	printf("\n");
	return 0;

}//endmain