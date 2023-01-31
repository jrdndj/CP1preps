#include<stdio.h>

int main(){
    int dDayOfWeek;
    printf("Which day does the calendar needs to start from?\n");
    printf("0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat: ");
    scanf("%d", &dDayOfWeek);

    int dMonthDays;    
    printf("Number of days in the month: ");
    scanf("%d", &dMonthDays);

    printf("\nSu\t");
    printf("Mo\t");
    printf("Tu\t");
    printf("We\t");
    printf("Th\t");
    printf("Fr\t");
    printf("Sa\t\n");
    int dCounter=0;

    for(int i=0; i<dDayOfWeek; i++){
        printf("\t");
        dCounter++;
    }

    //const int dKonst=dCounter;

    for (int i = 1; i <= dMonthDays; i++)
    {
        if(dCounter==6){
            printf("%d\n", i);
            dCounter=0;
            continue;
        }
        printf("%d\t", i);
        dCounter++;
    }
    printf("\n");
    return 0;
    
}