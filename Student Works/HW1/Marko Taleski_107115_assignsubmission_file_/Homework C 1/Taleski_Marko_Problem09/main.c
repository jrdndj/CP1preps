//This code was written by Marko Taleski :P
//C code for calendar

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int dStartDay=0;
    int dDays=0;
    printf("\nWhich day of the week does the month start with?\n");
    printf("\n0: Sun, 1: Mon, 2: Tue, 3: Wed, 4: Thu, 5: Fri, 6: Sat\n");
    scanf("%d", &dStartDay);
    printf("\nHow many days does the month have?\n");
    scanf("%d", &dDays);
    printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    for(int i=1; i<=dDays+dStartDay; i++) {
        if(i<=dStartDay) {
            printf("     ");
        }
    }
    int i,j;
    for (j=1,i=dStartDay; j<=dDays; j++,i++) {
        printf("%2d   ", j);
        if(i%7==6)
        {
            printf("\n");
        }
    }
    return 0;
}

