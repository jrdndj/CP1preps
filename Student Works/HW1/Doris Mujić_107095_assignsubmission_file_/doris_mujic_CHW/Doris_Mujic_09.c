#include<stdio.h>

int main(){

	int day;
	int days;
	int year=2020;

	printf("\nThis is a calendar for a specific month\n");
	printf("\nWhich day of the week does the month start?\n");
	printf("\nChoose one of these options\n");
	printf("\nMon-1, Tue-2, Wed-3, Thu-4, Fri-5, Sat-6, Sun-7\n");
	scanf("%d",&day);

	printf("\nHow many days does the month have?\n");
	scanf("%d",&monthDay); 
	
	int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31}

	if((year%4==0&&year%100!=0)||year%400==0)
		monthDay[1]=29;


	printf("\n Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

	/*my idea was to make the calender based on the number of days the user inputs based of off for loops
	so it would loop until some particular month.However i would have assigned, which month starts with the spacific days
	so when they type in day, i would just find the months the days are starting from and then see which day they picked 
	and then isolate the calendar they need an print it*/
return 0;
}
