/* this program will do the following: 
ok - it will ask the user for number of hours worked per day for 5 days
ok - it will deduct taxes based on the type of worker (ok) that you are 
ok - it will print the total net pay (after taxes) */
#include<stdio.h>
#define MINIMUM_WAGE 8.3
#define LOCAL_TAX 0.1
#define FOREIGN_TAX 0.3
#define INSURANCE 0.05 //5% of the gross pay

int main(){
	//declare variables 
	int nHoursPerDay[5];
	float fDeductions=0.0, fTaxRate=0.0, fNetPay=0.0;
	char cType;

	//we ask the user if they are local or foreign
	printf("\n Are you a Local (L) or a Foreigner (F)?: ");
	scanf("%c", &cType);

	//we set the tax rate based on their type of employee
	if( cType == 'L' || cType == 'l'){
		printf("\n Your tax rate is %.2f %%. ", LOCAL_TAX*100);
		fTaxRate = LOCAL_TAX;
	}//endif
	else{
		printf("\n Your tax rate is %.2f %%. ", FOREIGN_TAX*100);
		fTaxRate = FOREIGN_TAX;
	}//endelse

	//we prompt the user to enter the number of hours per day
	for(int nCtr=0; nCtr<5; nCtr++){
		printf("\n Hours worked in Day %d: ", nCtr+1);
		scanf("%d", &nHoursPerDay[nCtr]);

		printf("\n Salary earned for Day %d: %.2f. ", nCtr+1,nHoursPerDay[nCtr]*MINIMUM_WAGE);
		fNetPay += nHoursPerDay[nCtr]*MINIMUM_WAGE;
	}//endfor

	//taxes and deductions are computed based on the gross total
	 fDeductions = (fNetPay*fTaxRate) + (fNetPay*INSURANCE); //if i have 1000 euros and 10%, 100euros
	 fNetPay = fNetPay - fDeductions; 
	 printf("\n Your final take home pay for this week is %.2f. ", fNetPay);
	 printf("\n Amount deducted: %.2f", fDeductions);
	return 0;
}//endmain