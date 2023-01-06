//salary rate
/* 

*/

#include <stdio.h>
#define HOURLY_RATE 5.21

int main(){
	//declare variables
	float fSalary=0.0;
	int dHours=0, dDay=0;
	//const float HOURLY_RATE=5.21;

	//ask how many days they worked and how many hours for that day
	printf("\nHow many days did you work: ");
	scanf("%d", &dDay);

	for(int dCount=1; dCount<=dDay; dCount++){
		printf("How many hours did you work on day %d? ", dCount);
		scanf("%d", &dHours);
		fSalary+=dHours*HOURLY_RATE;
		printf(" You erned %.2f in day %d \n", dHours*HOURLY_RATE, dCount);
	}//endfor

	//print the final salaty
	printf("\n For a total od %d days, you earned %.2f. \n", dDay, fSalary);


	return 1;
}//endmain
