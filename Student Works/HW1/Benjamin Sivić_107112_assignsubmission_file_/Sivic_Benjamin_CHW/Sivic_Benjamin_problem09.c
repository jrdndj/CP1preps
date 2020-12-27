/*
    Program should make calendar
    the user can choose which day the month starts and how many days it has
*/
#include<stdio.h>
int main(){
//Declare vars
int dDay,dMonth;

//User input
printf("On which day should the month start?\n1.Mon\n2.Tue\n3.Wed\n4.Thu\n5.Fri\n6.Sat\n7.Sun\n");
scanf(" %d",&dDay);
printf("\nHow many days should it have?\n");
scanf(" %d",&dMonth);

//printing the weekdays
printf("Mo Tu We Th Fr Sa Su\n");
//Making the calendar with for loop
for (int i=1; i<dDay; i++) {
        printf("   ");
    }//EndForEmpty
    for (int i=1; i<=dMonth; i++) {
        printf("%2d", i);
        if ((i+dDay-1)%7==0){
            printf("\n");
        }//EndIfWeek=>Checks if day is divisible by 7
        else{
            printf(" ");
        }//EndElseDay
    }
    if ((dMonth+dDay-1)%7!=0){
        printf("\n");
    }//EndIf

return 0;
}
/*
    I did not manage to have the single digit days stay below the needed day so the calendar looks weird
    That was before I put %2d instead of %d in line 23 which seems to shift the numbers for whatever reason
*/
