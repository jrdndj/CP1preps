#include <stdio.h>

int main(){
	
	int dNum1=0, dNum2=0;
	//I am now a C programmer
	printf("\n Hello world! \n");

	//ask the user for input
	printf("\n Give me number: ");
	scanf("%d", &dNum1);

	printf("\n Give me number: ");
	scanf("%d", &dNum2);

	//confirm by printing
	printf("\n You entered %d and %d. \n", dNum1, dNum2);

	if ( dNum1 > dNum2){
		printf("\n %d is the greater number. \n" ,dNum1);
		
	}//end if check number
	else printf("\n %d is the greater number. \n" ,dNum2);

	//check if the number is even
	//if (dNum1%2==0){
		//printf("\n %d is even. ", dNum1);
	//}
	//else printf("\n %d is even. \n", dNum2);
	
	dNum2=dNum1;
	//storing the value of dNum1 for later comparison

	//checkeven without module
	if ( (dNum1/2)*2==dNum1){ //dNum1 also works
		printf("\n %d is even. \n", dNum1);
	}
	else printf("\n %d is odd. \n", dNum1);

	int dn=567;
	int da=567/100;
	int db=60/10;
	int dc=76/10;
	printf("\n %d hundedreds: \n", da);
	printf("\n %d tens: \n", db);
	printf("\n %d ones: \n", dc);

	return 0;
}//end main
