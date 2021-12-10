/* This program will do the following:
- get the number of hours worked in a day for 5 days
- determine if local or foreign tax applies to you
- print the daily salary earned (gross)
- calculate total taxes to deduct 
- and print the final net pay  */
#include<stdio.h>
#define MINIMUM_WAGE 5.6
#define LOCAL_TAX 0.1
#define FOREIGN_TAX 0.3
int main(){
	//declare variables
	int nDays[5];
	char cType;
	float fNetPay=0.0, fTaxes=0.0, fTaxRate=0.0;

	//we talk to the user and ask if they are local or foreign
	printf("\n Are you a Local (L) or a Foreigner (F)?: ");
	scanf("%c", &cType);

	//set taxrate based on their answer
	if( cType == 'l' || cType == 'L'){
		printf("\n Your tax rate is %.2f %%", LOCAL_TAX*100);
		fTaxRate = LOCAL_TAX; 
	}//endif
	else {
		//assume anything else is foreign
		printf("\n Your tax rate is %.2f %%", FOREIGN_TAX*100);
		fTaxRate = FOREIGN_TAX;
	}//endelse

	//we prompt the user for an input
	for( int nCtr=0; nCtr<=4; nCtr++ ){
		printf("\n Enter hours for Day %d ", nCtr+1);
		scanf("%d", &nDays[nCtr]);

		//print the daily gross salary hours worked x minimum wage
		printf("\n Salary earned for Day %d: %.2f.", nCtr+1, nDays[nCtr]*MINIMUM_WAGE);
		fNetPay += nDays[nCtr]*MINIMUM_WAGE;
	}//endfor

	//calculate taxes of total earnings 
	fTaxes = fNetPay*fTaxRate; //calculating the taxes from your earnings
	fNetPay = fNetPay - fTaxes; //we deduct the taxes from your earnings
	printf("\n Your take home pay is %.2f. ", fNetPay);
	return 0;
}//endmain