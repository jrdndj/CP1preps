#include<stdio.h>

int main(){

    //declaring variables
    int dDayOfWeek, dNumberOfDays;
    char* sDays[7]={"Su","Mo" ,"Tu"  ,"We " ,"Th " ,"Fr" ,"Sa"};

    printf("\nCalendar of a specific month will be shown.");
    printf("\nWhich day of the week does the month start?");
    printf("\nInput figure among following figures.\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
    scanf("%d",&dDayOfWeek);
    printf("\nHow many days does the month have?\n");
    scanf("%d",&dNumberOfDays);

    for(int i=0; i<7; i++){
        printf("%s \t",sDays[i]);
    }
    printf("\n");
    for (int i=1; i<=dNumberOfDays+dDayOfWeek; i++){
        if(i<=dDayOfWeek){
            printf("\t");
        } else {
            printf("%d \t ", i-dDayOfWeek);
        }
        if(i%7==0){
            printf("\n");
        }
    }
    return 0;
}