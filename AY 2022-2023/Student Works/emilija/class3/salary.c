#include <stdio.h>
#define HOURLY_RATE 5.21
int main(){
	//declare variables
	float fSalary=0.0;
	int dHours=0, dDay=0;
	//ask the user how many days and hours(for that day) they worked
	printf("\nHow many days did you work: ");
	scanf("%d", &dDay);
	for (int dCtr = 1; dCtr <= dDay; dCtr++)
	{
		printf("\nHow many hours did you work on day %d?", dCtr);
		scanf("%d", &dHours);
		fSalary+=dHours*HOURLY_RATE;
		printf("\nYou earned %.2f in Day %d", dHours*HOURLY_RATE, dCtr);
	}//endfor

	//print final salary
	printf("\nFor a total od %d days, you earned %.2f.\n", dDay, fSalary);
	return 0;
}