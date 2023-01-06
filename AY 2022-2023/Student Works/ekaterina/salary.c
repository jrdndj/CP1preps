#include<stdio.h>
#define HOURLY_RATE 5.21



int main(){
	//declare variables 
	float fSalary=0.0;
	int dHours=0, dDay=0;

	//ask the user how many days they work and how many hours they work for that day
	printf("\n How many days did you work:");
	scanf("%d", &dDay);


	for(int dCtr=1;dCtr<=dDay;dCtr++){
	printf("\n How many hours did you work on day %d?", dDay);
	scanf("%d", &dHours);
	fSalary+=dHours*HOURLY_RATE;
	printf( "\n You entered %.2f in day %d.", dHours*HOURLY_RATE,dDay );
}

//print the final salary
printf("\n For a total of %d days, you enetred %.2f.",dDay,fSalary);

	return 1;
}//endmain