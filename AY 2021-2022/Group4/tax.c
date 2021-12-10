/* This program will do the following:
- it will ask the user to input the number hours they worked in a day
- it will compute the daily salary based on the hours and hourly rate
- it will compute for the taxes and deductions
- it will print the total take home or net pay 
- it sets a different tax rate for locals vs foreigners */
#include<stdio.h>
#define MINIMUM_WAGE 5.6
#define LOCAL_TAX 0.1 //10% tax rate for locals
#define FOREIGN_TAX 0.3 //30% tax rate for foreigners  
#define INSURANCE 0.05

int main(){
	//declare variables 
	int nHoursPerDay[5];
	float fNetPay = 0.0, fDeduct = 0.0, fTaxRate = 0.0;
	char cType; 

	//we ask the user if they are local or foreigner
	printf("\n Are you local (L) or a foreigner (F)?: ");
	scanf("%c", &cType);

	//we need to treat stupid users 
	if( cType == 'l' || cType == 'L' ){
		printf("\n Your tax rate is %.2f %%", LOCAL_TAX*100);
		fTaxRate = LOCAL_TAX; 
	}//endif
	else{
		printf("\n Your tax rate is %.2f %%", FOREIGN_TAX*100);
		fTaxRate = FOREIGN_TAX;
	}//endelse

	//we now prompt the user for an input of daily hours
	for(int nDay=0; nDay<5; nDay++){
		printf("\n Enter number of hours for Day %d: ", nDay+1);
		scanf("%d", &nHoursPerDay[nDay]);

		//compute for daily salary 
		printf("\n Earnings for Day %d: %.2f ",nDay+1, nHoursPerDay[nDay]*MINIMUM_WAGE);
		fNetPay += nHoursPerDay[nDay]*MINIMUM_WAGE;
	}//endfor

	//we need to compute the deductions
	// deductions subtracted from the total earnings 
	fDeduct = (fNetPay*fTaxRate) + (fNetPay*INSURANCE) ;
	//compute the total salary
	fNetPay = fNetPay - fDeduct;
	printf("\n Total deductions is %.2f.", fDeduct);
	printf("\n Your total take home pay is %.2f. \n", fNetPay);
	return 0; 
}//endmain