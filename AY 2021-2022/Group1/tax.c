/* this program receives the following data from the user
number of hours worked
rate of salary per hour

it will print the salary for the week including taxes
*/
#include<stdio.h>
#define FOREIGN_TAX 0.1f
#define INSURANCE 0.05f
//this means that our foreign tax is at 10%
//no equal sign

int main(){
	//declare variables here 
	float fSalary = 5.6; //this is hourly rate 
	int nDailyHours[5];
	float fNetPay = 0.0; //this is the total weekly salary 

	//we need to get the hours from the user
	for(int nCtr=0; nCtr<5; nCtr++){
		//prompt the user for input
		printf("\nHours worked for Day %d: ", nCtr+1);
		scanf("%d", &nDailyHours[nCtr]);
		//we only remove the & if its c-string

		//compute the daily hours * fsalary and save it 
		fNetPay = fNetPay + (nDailyHours[nCtr]*fSalary);
		//print the salary 
		printf("\n Gross Salary earned: %.2f\n", fNetPay); 
	}//endfor - this means we are done receiving daily salaries

	//we compute for tax 
	fNetPay = fNetPay - (fNetPay*FOREIGN_TAX);
	printf("\n Your Net Salary is %.2f. ", fNetPay);

	return 0;
}//endmain