/*this program does the following
- asks the user to enter how many hours
they have worked in a day, for 5 days
- the program prints the salary
for the day earned
- the program prints the final net pay
for the week, after deducting taxes
a tax rate is defined as a constant*/
#include<stdio.h>
#define LOCAL_TAX 0.1f
#define FOREIGN_TAX 0.3f
#define HOURLY_RATE 5.6f
#define INSURANCE 0.05f

int main(){
	//declare variables
	int nHoursPerDay[5];
	float fDaySalary=0.0, fNetPay=0.0, fTaxes=0.0, fTaxRate=0.0;
	char cInput; 

	//ask if the person is Slovene or not
	printf("\n Are you Local (L) or a Foreigner (F): ");
	scanf("%c", &cInput);

	//we set the tax rate based on their nationality 
	if(cInput == 'L' || cInput == 'l'){
		fTaxRate = LOCAL_TAX;
		printf("\n Your taxes will be %.2f %%", fTaxRate*100);
	}//endifLocal
	else {
		fTaxRate = FOREIGN_TAX;
		printf("\n Your taxes will be %.2f %%", fTaxRate*100);
	}//endifForeign

	//we now need to get the number of hours worked using for loop
	for( int nDay=0; nDay<5; nDay++ ){
		printf("\n Hours worked for Day %d: ", nDay+1);
		scanf("%d", &nHoursPerDay[nDay]);
		//compute for the daily salary 
		fDaySalary = nHoursPerDay[nDay]*HOURLY_RATE;
		printf("\n Salary earned for Day %d is %.2f. ", nDay+1, fDaySalary);
		fNetPay = fNetPay + fDaySalary;
	}//endforloop
	//we need to compute for the taxes get N% of the total pay
	fTaxes = (fNetPay*fTaxRates) + (fNetPay*INSURANCE);
	printf("\n Taxes and Insurance deducted: %.2f: ", fTaxes);
	fNetPay = fNetPay - fTaxes;
	printf("\n Your take home pay is %.2f: ", fNetPay);
	return 69;
}//end main